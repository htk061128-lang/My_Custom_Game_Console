#include <iostream>
#include <memory>
#include <random>
#include <cstdint>
#include <verilated.h>       // Verilator 코어 라이브러리
#include <verilated_vcd_c.h> // 파형 덤프(VCD)를 위한 라이브러리

// Verilator가 생성한 모듈 헤더 파일 (V + 모듈이름.h)
#include "Vpixel_fifo_top.h"

// verilator -Wall --trace -cc pixel_fifo_top.sv --exe Compressed_Data_FIFO_tb.cpp --build && ./obj_dir/Vpixel_fifo_top
// 오류무시: verilator -Wall -Wno-fatal --trace -cc pixel_fifo_top.sv --exe Compressed_Data_FIFO_tb.cpp --build && ./obj_dir/Vpixel_fifo_top
vluint64_t main_time = 0; // 전체 시뮬레이션 타임스텝 기록용

// Verilator 내부에서 현재 시뮬레이션 시간을 알 수 있도록 함수 오버라이딩 (파형 덤프에 필수)
double sc_time_stamp() { return main_time; }

class RandomGenerator
{
private:
    static std::mt19937 engine; // 메르센 트위스터 엔진

public:
    static void setSeed(uint32_t seed)
    {
        engine.seed(seed);
    }

    // 특정 범위 [min, max] 사이의 32비트 정수 생성 (주소, 데이터용)
    static uint32_t get_uint32(uint32_t min, uint32_t max)
    {
        std::uniform_int_distribution<uint32_t> dist(min, max);
        return dist(engine);
    }

    // 특정 확률(probability)로 true를 반환 (Valid 신호, 에러 주입용)
    // 예: get_bool(0.1) -> 10% 확률로 true
    static bool get_bool(double probability = 0.5)
    {
        std::bernoulli_distribution dist(probability);
        return dist(engine);
    }

    // 8비트 min ~ max 범위의 랜덤 uin8_t 값 생성.
    static uint8_t get_byte(uint8_t min, uint8_t max)
    {
        std::uniform_int_distribution<uint8_t> dist(min, max);
        return dist(engine);
    }
};
std::mt19937 RandomGenerator::engine(42);

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true); 

    Vpixel_fifo_top *dut = new Vpixel_fifo_top;

    auto trace = std::make_unique<VerilatedVcdC>();
    dut->trace(trace.get(), 99); // top -> dut로 수정
    trace->open("waveform.vcd"); 

    // 1. 내부 BRAM 배열 선언
    uint64_t bram7[512] = {0};
    uint64_t bram8[512] = {0};
    uint64_t bram9[512] = {0};
    uint64_t bram10[512] = {0};
    uint64_t bram11[512] = {0};
    uint64_t bram12[512] = {0};

    // ========================================================
    // 💡 2. 가짜 외부 메모리 (DDR3) 선언 및 초기화
    // std::map을 사용하면 엄청나게 큰 메모리 주소라도 메모리 낭비 없이 할당 가능합니다.
    // ========================================================
    std::map<uint32_t, uint32_t> ddr3_memory; 
    
    // 테스트용 압축 데이터(RLC) 주입 예시 (시작 주소 0x0000)
    // 32비트 단위로 저장되므로, 레이어 1의 시작 주소를 0이라고 가정하고 데이터를 넣습니다.
    ddr3_memory[0] = 0x00000000; //주소 32'h00000000에서는 데이터를 0으로 설정해서 특수 제어바이트 이므로 바로 읽기가 중단됨.
    ddr3_memory[1] = 0xAA8AFF8A; //FF 10번 반복 후 AA 10번 반복.
    ddr3_memory[2] = 0xAA8AFF8A; //FF 10번 반복 후 AA 10번 반복.
    ddr3_memory[3] = 0x00000000;

    // 외부 메모리 상태 제어 변수
    int emem_state = 0; // 0: IDLE, 1: BURST_READING
    uint32_t emem_burst_counter = 0;
    uint32_t emem_current_addr = 0;

    std::cout << "Simulation start!" << std::endl;

    dut->clk = 0;
    dut->resetn = 0; 

    // 외부 메모리 주소 초기 세팅 (테스트용)
    dut->Background_Layer1_Address = 0x00000004; //이것만 테스트할 예정.
    dut->Background_Layer2_Address = 0x00000008;
    dut->Character_Layer1_Address = 0x00000000;
    dut->Character_Layer2_Address = 0x00000000;
    dut->Character_Layer3_Address = 0x00000000;
    dut->Character_Layer4_Address = 0x00000000;
    dut->Script_Layer_Address = 0x00000000;
    dut->Status_Layer_Address = 0x00000000;
    dut->Universal_Layer1_Address = 0x00000000;
    dut->Universal_Layer2_Address = 0x00000000;

    // 테스트가 충분히 진행되도록 시간 증가 (500 -> 5000)
    while (!Verilated::gotFinish() && main_time < 10000)
    {
        // 리셋 해제
        if (main_time > 10) {
            dut->resetn = 1;
        }

        // 테스트를 위해 특정 시간에 PPU_start 신호 인가
        if (main_time == 20) dut->PPU_start = 1;
        if (main_time == 22) dut->PPU_start = 0; // 1클럭 펄스

        // ----------------------------------------------------
        // [1단계] 클럭 상승 에지 (로직 평가)
        // ----------------------------------------------------
        dut->clk = 1;
        dut->eval();
        trace->dump(main_time++);
        if(dut->BRAM12_en_a) printf("BRAM9 write\n");

        // ----------------------------------------------------
        // [2단계] 클럭 하강 에지 (입력 신호 주입)
        // ----------------------------------------------------
        dut->clk = 0;
        // ========================================================
        // 💡 3. 외부 메모리(DDR3) 상태 머신
        // ========================================================
        if (emem_state == 0) {
            // [IDLE 상태] 모듈(DUT)이 유효한 읽기 요청을 보냈는지 확인
            if (dut->EMEM_valid) {
                dut->EMEM_ready = 1; // 요청 수락 (Data is valid)
                
                emem_burst_counter = dut->EMEM_burst_len; 
                // 32비트(4바이트) 단위로 배열 인덱스 접근하므로 4로 나눔
                emem_current_addr = dut->EMEM_addr / 4;   
                
                // 첫 번째 데이터 출력
                dut->EMEM_rdata = ddr3_memory[emem_current_addr];
                
                // Burst 길이가 0(1개 읽기)이 아니라면 BURST 상태로 진입
                if (emem_burst_counter > 0) {
                    emem_state = 1;
                }
            } else {
                dut->EMEM_ready = 0; // 요청이 없으면 대기
            }
        } 
        else if (emem_state == 1) {
            // [BURST 상태] 요청한 길이만큼 주소를 증가시키며 데이터 연속 출력
            emem_current_addr++;
            emem_burst_counter--;

            dut->EMEM_ready = 1; // 계속해서 데이터 유효함을 알림
            dut->EMEM_rdata = ddr3_memory[emem_current_addr];

            if (emem_burst_counter == 0) {
                emem_state = 0; // Burst 전송 완료 시 IDLE로 복귀
            }
        }
        // ========================================================
        dut->eval();
        // --- BRAM 쓰기 동작 ---
        if (dut->BRAM7_en_a && dut->BRAM7_we_a) bram7[dut->BRAM7_addr_a] = dut->BRAM7_din_a;
        if (dut->BRAM8_en_a && dut->BRAM8_we_a) bram8[dut->BRAM8_addr_a] = dut->BRAM8_din_a;
        if (dut->BRAM9_en_a && dut->BRAM9_we_a) bram9[dut->BRAM9_addr_a] = dut->BRAM9_din_a;
        if (dut->BRAM10_en_a && dut->BRAM10_we_a) bram10[dut->BRAM10_addr_a] = dut->BRAM10_din_a;
        if (dut->BRAM11_en_a && dut->BRAM11_we_a) bram11[dut->BRAM11_addr_a] = dut->BRAM11_din_a;
        if (dut->BRAM12_en_a && dut->BRAM12_we_a) bram12[dut->BRAM12_addr_a] = dut->BRAM12_din_a;

        // --- BRAM 읽기 동작 (1클럭 셋업) ---
        if (dut->BRAM7_en_b) dut->BRAM7_dout_b = bram7[dut->BRAM7_addr_b];
        if (dut->BRAM8_en_b) dut->BRAM8_dout_b = bram8[dut->BRAM8_addr_b];
        if (dut->BRAM9_en_b) dut->BRAM9_dout_b = bram9[dut->BRAM9_addr_b];
        if (dut->BRAM10_en_b) dut->BRAM10_dout_b = bram10[dut->BRAM10_addr_b];
        if (dut->BRAM11_en_b) dut->BRAM11_dout_b = bram11[dut->BRAM11_addr_b];
        if (dut->BRAM12_en_b) dut->BRAM12_dout_b = bram12[dut->BRAM12_addr_b];

        if(dut->BRAM9_en_b) {
            std::cout << "[SUCCESS] BRAM9 READ REQUEST!"<< std::endl;
        }
        if(dut->BRAM12_en_a && dut->BRAM12_we_a) {
            std::cout << "[SUCCESS] BRAM12 WRITE REQUEST!"<< std::endl;
        }
        if(bram12[0] > 0) {
            std::cout << "[SUCCESS] BRAM12 ADDR 0 WRITTEN! DATA: 0x" << std::hex << std::uppercase << bram12[0] << std::endl;
        }
        if(bram9[0] > 0) {
            //std::cout << "[SUCCESS] BRAM9 ADDR 0 WRITTEN! DATA: 0x" << std::hex << std::uppercase << bram9[0] << std::endl;
        }
        trace->dump(main_time++); // 반 클럭 진행 완료 기록
    }

    dut->final();
    trace->close();

    std::cout << "Simulation completed successfully. Check waveform.vcd!" << std::endl;
    delete dut; // 메모리 누수 방지
    return 0;
}