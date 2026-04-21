#include <iostream>
#include <memory>
#include <random>
#include <cstdint>
#include <verilated.h>       // Verilator 코어 라이브러리
#include <verilated_vcd_c.h> // 파형 덤프(VCD)를 위한 라이브러리

// Verilator가 생성한 모듈 헤더 파일 (V + 모듈이름.h)
#include "VCompressed_Data_FIFO.h"

// verilator -Wall --trace -cc Compressed_Data_FIFO.sv --exe Compressed_Data_FIFO_tb.cpp --build && ./obj_dir/VCompressed_Data_FIFO

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
    // Verilator 내부 변수 초기화
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true); // VCD 트레이싱 활성화

    // 대상 모듈(DUT) 동적 할당 인스턴스화
    VCompressed_Data_FIFO *top = new VCompressed_Data_FIFO;

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
    while (!Verilated::gotFinish() && main_time < 500)
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


        // 여기에 입력신호 작성.
        top->clk = 0;
        top->eval();
        trace->dump(main_time++); // 4. 현재 타임스텝의 상태를 VCD 파형 파일에 기록
    }

    // 시뮬레이션 종료 처리 및 파일 닫기
    top->final();
    trace->close();

    std::cout << "Simulation completed successfully. Check waveform.vcd!" << std::endl;
    return 0;
}