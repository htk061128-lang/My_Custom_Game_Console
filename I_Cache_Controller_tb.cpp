#include <iostream>
#include <memory>
#include <verilated.h>       // Verilator 코어 라이브러리
#include <verilated_vcd_c.h> // 파형 덤프(VCD)를 위한 라이브러리

// Verilator가 생성한 모듈 헤더 파일 (V + 모듈이름.h)
#include "VI_Cache_Controller.h" 

vluint64_t main_time = 0; // 전체 시뮬레이션 타임스텝 기록용

// Verilator 내부에서 현재 시뮬레이션 시간을 알 수 있도록 함수 오버라이딩 (파형 덤프에 필수)
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    // Verilator 내부 변수 초기화
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true); // VCD 트레이싱 활성화

    // 대상 모듈(DUT) 동적 할당 인스턴스화
    auto top = std::make_unique<VI_Cache_Controller>();

    // VCD 파형 덤프 설정
    auto trace = std::make_unique<VerilatedVcdC>();
    top->trace(trace.get(), 99); // 트레이스 깊이 설정
    trace->open("waveform.vcd"); // 출력될 파형 파일 이름

    // 1. 초기 신호 셋업
    top->clk = 0;
    top->resetn = 0; // Active Low 리셋이므로 0으로 시작

    // 2. 시뮬레이션 메인 루프 (원하는 타임스텝만큼 실행)
    while (!Verilated::gotFinish() && main_time < 1000) {
        
        // 클럭 생성: 5 타임스텝마다 클럭 반전 (1주기 = 10 타임스텝)
        if ((main_time % 5) == 0) {
            top->clk = !top->clk;
        }

        // 리셋 해제: 타임스텝 20 이후에 resetn을 1로 올려 정상 동작 시작
        if (main_time > 20) {
            top->resetn = 1;
        }

        // -----------------------------------------------------------
        // 여기에 테스트 시나리오 작성 (예시)
        // 주의: 클럭의 하강 에지(negedge) 타이밍에 입력을 바꿔주는 것이 
        //       실제 하드웨어 동작과 가장 비슷하고 안전합니다.
        // -----------------------------------------------------------
        /*
        if (main_time == 35) { // 클럭 하강 에지 부근
            top->CPU_valid = 1;
            top->CPU_addr = 0x12345678;
            top->CPU_wstrb = 4'b0000; // 읽기 요청
            top->CPU_instr = 1;
        }
        if (main_time == 45) {
            top->CPU_valid = 0; // 요청 내리기
        }
        */

        // 3. 모델 평가 (설정한 입력값을 바탕으로 Verilog 로직 업데이트)
        top->eval();

        // 4. 현재 타임스텝의 상태를 VCD 파형 파일에 기록
        trace->dump(main_time);

        main_time++;
    }

    // 시뮬레이션 종료 처리 및 파일 닫기
    top->final();
    trace->close();

    std::cout << "Simulation completed successfully. Check waveform.vcd!" << std::endl;
    return 0;
}