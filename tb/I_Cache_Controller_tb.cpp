#include <iostream>
#include <memory>
#include <random>
#include <cstdint>
#include <verilated.h>       // Verilator 코어 라이브러리
#include <verilated_vcd_c.h> // 파형 덤프(VCD)를 위한 라이브러리

// Verilator가 생성한 모듈 헤더 파일 (V + 모듈이름.h)
#include "VI_Cache_Controller.h"

// verilator -Wall --trace -cc I_Cache_Controller.sv --exe I_Cache_Controller_tb.cpp --build && ./obj_dir/VI_Cache_Controller

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

void cpu_read(VI_Cache_Controller *top, uint32_t addr, bool is_instr)
{
    top->CPU_valid = 1;
    top->CPU_addr = addr;
    top->CPU_instr = is_instr;
    top->CPU_wstrb = 0; // Read
}

void cpu_write(VI_Cache_Controller *top, uint32_t addr, uint32_t data)
{
    top->CPU_valid = 1;
    top->CPU_addr = addr;
    top->CPU_wdata = data;
    top->CPU_wstrb = 0xF; // 4-byte Write
    top->CPU_instr = 0;   // Data Write
}

// top->EMEM_valid가 1이면 계속 호출하는 함수라고 가정. return이 true면 다음 하강에지떄 top->EMEM_ready를 0으로 내려야 함.
bool emem_read_req(VI_Cache_Controller *top, uint32_t addr, uint8_t *delay, uint8_t *burst_count, bool first_call)
{
    if (first_call)
    {
        (*delay) = RandomGenerator::get_uint32(10, 20);
        top->EMEM_ready = 0;
        top->EMEM_rdata = 0;
        return false;
    }
    else
    {
        if ((*delay) > 0)
        {
            (*delay) = (*delay) - 1;
            top->EMEM_ready = 0;
            top->EMEM_rdata = 0;
        }
        else if ((*delay) == 0)
        {
            top->EMEM_ready = 1;
            top->EMEM_rdata = 33; // EMEM에서 읽은 데이터는 33으로 고정.
            printf("EMEM read! data: %08X\n", top->EMEM_rdata);
            if ((*burst_count) == 1)
            {
                return true; // 이러면 다음 하강에지때 EMEM_ready를 0으로 내려야 함.
            }
            else if ((*burst_count) > 1) // burst count가 1이면 1개를 그냥 읽는거고, 2면 2개를 연속으로 읽는거임. top->EMEM_burst_len과는 약간 다름.
            {
                (*burst_count) = (*burst_count) - 1;
                (*delay) = 0; // burst일때 그냥 연속으로 데이터가 계속 나온다고 일단 가정함.
            }
        }
        return false;
    }
}

struct CacheEntry
{
    uint32_t word0;
    uint32_t word1;
    uint32_t word2;
    uint32_t word3;
    uint16_t tag;
    bool valid_bit;
};

int main(int argc, char **argv)
{
    // Verilator 내부 변수 초기화
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true); // VCD 트레이싱 활성화

    // 대상 모듈(DUT) 동적 할당 인스턴스화
    VI_Cache_Controller *top = new VI_Cache_Controller;

    // VCD 파형 덤프 설정
    auto trace = std::make_unique<VerilatedVcdC>();
    top->trace(trace.get(), 99); // 트레이스 깊이 설정
    trace->open("waveform.vcd"); // 출력될 파형 파일 이름

    // 512개의 CacheEntry를 가진 vector 생성. 모든 값은 기본값(0)으로 초기화됨.
    std::vector<CacheEntry> way0(512);
    std::vector<CacheEntry> way1(512);

    int bram_latency = 0; // BRAM의 1클럭 지연을 구현하기 위해서 읽기 신호가 오면 1이되고 다음 클럭에지때 bram_read가 true가되고 그 때의 하강에지때 값을 input으로 넣어주는 구조임.
    bool bram_read = false;
    uint8_t emem_delay = 0;
    bool emem_first = true;
    uint8_t emem_burst_count = 1;
    bool cpu_ready = false;
    uint32_t address = 0x0;

    std::cout << "Simulation start!" << std::endl;

    // 1. 초기 신호 셋업
    top->clk = 0;
    top->resetn = 0; // Active Low 리셋이므로 0으로 시작

    // 2. 시뮬레이션 메인 루프 (원하는 타임스텝만큼 실행)
    while (!Verilated::gotFinish() && main_time < 300)
    {

        // 리셋 해제: 타임스텝 20 이후에 resetn을 1로 올려 정상 동작 시작
        if (main_time > 5)
        {
            top->resetn = 1;
        }

        // 여기서 출력이 나옴.
        top->clk = 1;
        top->eval();
        trace->dump(main_time++);
        bool cpu_handshake = false;
        bool cpu_instr_req_enable = true;
        bool should_bram_read = false;
        if (top->CPU_ready && top->CPU_valid)
        {
            cpu_handshake = true;
        }
        if (top->BRAM0_ren && top->BRAM1_ren && top->BRAM2_ren && top->BRAM3_ren)
        {
            should_bram_read = true;
            //printf("BRAM0, BRAM1, BRAM2, BRAM3 read!!\n");
        }
        if (top->BRAM0_wen && top->BRAM1_wen)
        {
            printf("BRAM0, BRAM1 write!!\n");
            way0[top->BRAM0_waddr].word0 = (top->BRAM0_din[0] >> 8) | (top->BRAM0_din[1] << 24); // BRAM0: word1상위 8비트/ word1하위 24비트, word0상위 8비트/ word0하위 24비트, tag하위8비트
            way0[top->BRAM0_waddr].word1 = (top->BRAM0_din[1] >> 8) | (top->BRAM0_din[2] << 24); // BRAM1: word3상위 8비트/ word3하위 24비트, word2상위 8비트/ word2하위 24비트, valid_bit, tag상위7비트
            way0[top->BRAM1_waddr].word2 = (top->BRAM1_din[0] >> 8) | (top->BRAM1_din[1] << 24);
            way0[top->BRAM1_waddr].word3 = (top->BRAM1_din[1] >> 8) | (top->BRAM1_din[2] << 24);
            way0[top->BRAM1_waddr].tag = ((top->BRAM1_din[0] & 0x7F) << 8) | (top->BRAM0_din[0] & 0xFF);
            way0[top->BRAM1_waddr].valid_bit = (top->BRAM1_din[0] >> 7) & 0x1;
        }
        if (top->BRAM2_wen & top->BRAM3_wen)
        {
            printf("BRAM2, BRAM3 write!!\n");
            way1[top->BRAM2_waddr].word0 = (top->BRAM2_din[0] >> 8) | (top->BRAM2_din[1] << 24);
            way1[top->BRAM2_waddr].word1 = (top->BRAM2_din[1] >> 8) | (top->BRAM2_din[2] << 24);
            way1[top->BRAM3_waddr].word2 = (top->BRAM3_din[0] >> 8) | (top->BRAM3_din[1] << 24);
            way1[top->BRAM3_waddr].word3 = (top->BRAM3_din[1] >> 8) | (top->BRAM3_din[2] << 24);
            way1[top->BRAM3_waddr].tag = ((top->BRAM3_din[0] & 0x7F) << 8) | (top->BRAM2_din[0] & 0xFF);
            way1[top->BRAM3_waddr].valid_bit = (top->BRAM3_din[0] >> 7) & 0x1;
        }
        if (top->cache_hit)
        {
            printf("CACHE HIT!!!\n");
        }

        // 여기에 입력신호 작성.
        top->clk = 0;
        if (cpu_handshake == true)
        {
            top->CPU_valid = 0;
            top->CPU_instr = 0;
        }
        if (should_bram_read == true)
        {
            printf("BRAM0, BRAM1, BRAM2, BRAM3 read!!\n");
            top->BRAM0_dout[0] = ((way0[top->BRAM0_raddr].word0 & 0xFFFFFF) << 8) | (way0[top->BRAM0_raddr].tag & 0xFF);
            top->BRAM0_dout[1] = ((way0[top->BRAM0_raddr].word1 & 0xFFFFFF) << 8) | (way0[top->BRAM0_raddr].word0 >> 24);
            top->BRAM0_dout[2] = (way0[top->BRAM0_raddr].word1 >> 24);
            top->BRAM1_dout[0] = ((way0[top->BRAM0_raddr].word2 & 0xFFFFFF) << 8) | ((way0[top->BRAM0_raddr].tag & 0x7F00) >> 8) | (way0[top->BRAM0_raddr].valid_bit << 7);
            top->BRAM1_dout[1] = ((way0[top->BRAM0_raddr].word3 & 0xFFFFFF) << 8) | (way0[top->BRAM0_raddr].word2 >> 24);
            top->BRAM1_dout[2] = (way0[top->BRAM0_raddr].word3 >> 24);
            top->BRAM2_dout[0] = ((way1[top->BRAM0_raddr].word0 & 0xFFFFFF) << 8) | (way1[top->BRAM0_raddr].tag & 0xFF);
            top->BRAM2_dout[1] = ((way1[top->BRAM0_raddr].word1 & 0xFFFFFF) << 8) | (way1[top->BRAM0_raddr].word0 >> 24);
            top->BRAM2_dout[2] = (way1[top->BRAM0_raddr].word1 >> 24);
            top->BRAM3_dout[0] = ((way1[top->BRAM0_raddr].word2 & 0xFFFFFF) << 8) | ((way1[top->BRAM0_raddr].tag & 0x7F00) >> 8) | (way1[top->BRAM0_raddr].valid_bit << 7);
            top->BRAM3_dout[1] = ((way1[top->BRAM0_raddr].word3 & 0xFFFFFF) << 8) | (way1[top->BRAM0_raddr].word2 >> 24);
            top->BRAM3_dout[2] = (way1[top->BRAM0_raddr].word3 >> 24);
        }
        if (RandomGenerator::get_bool(1) && (cpu_handshake))
        {
            //uint32_t addr = RandomGenerator::get_uint32(0, 0x0FFFFFFF); // 주소의 상위 4비트는 0으로 고정.
            cpu_read(top, address, true);                                  // 주소의 상위 4비트는 0으로 고정한 상태에서 랜덤값 넣었음.
            printf("CPU read attemp! addr: %08X\n", address);
            address = address + 4;
        }
        if(main_time == 7) //처음에 명령어 읽기 시작.
        {
            //uint32_t addr = RandomGenerator::get_uint32(0, 0x0FFFFFFF); // 주소의 상위 4비트는 0으로 고정.
            cpu_read(top, address, true);                                  // 주소의 상위 4비트는 0으로 고정한 상태에서 랜덤값 넣었음.
            printf("CPU read attemp! addr: %08X\n", address);
            address = address + 4;
        }

        if (emem_first == true)
        {
            top->EMEM_ready = 0;
            top->EMEM_rdata = 0;
        }
        if (top->EMEM_valid && emem_first)
        {
            if (top->EMEM_burst_en == 1)
            {
                emem_burst_count = top->EMEM_burst_len + 1;
                emem_read_req(top, top->EMEM_addr, &emem_delay, &emem_burst_count, true);
                printf("EMEM request! burst count: %d\n", emem_burst_count);
            }
            else if (top->EMEM_burst_en == 0)
            {
                emem_burst_count = 1;
                emem_read_req(top, top->EMEM_addr, &emem_delay, &emem_burst_count, true);
                printf("EMEM request! no burst\n");
            }
            emem_first = false; // 이제 다음호출부터는 처음이 아니게 되야 함.
        }
        else if (top->EMEM_valid)
        {
            if (emem_read_req(top, top->EMEM_addr, &emem_delay, &emem_burst_count, false) == true) // 이제 다음클럭에지때 EMEM_ready 내려야 함.
            {
                emem_first = true;
            }
            else
            {
                emem_first = false;
            }
        }
        top->eval();
        trace->dump(main_time++); // 4. 현재 타임스텝의 상태를 VCD 파형 파일에 기록
    }

    // 시뮬레이션 종료 처리 및 파일 닫기
    top->final();
    trace->close();

    std::cout << "Simulation completed successfully. Check waveform.vcd!" << std::endl;
    return 0;
}