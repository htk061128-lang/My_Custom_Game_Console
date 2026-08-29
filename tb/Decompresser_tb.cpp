#include <iostream>
#include <memory>
#include <random>
#include <cstdint>
#include <map>
#include <verilated.h> 
#include <verilated_vcd_c.h>
#include "VDecompresser.h"

//verilator -Wall -Wno-fatal --trace -cc Decompresser.sv --exe Decompresser_tb.cpp --build && ./obj_dir/VDecompresser

vluint64_t main_time = 0; // 전체 시뮬레이션 타임스텝 기록용

// Verilator 내부에서 현재 시뮬레이션 시간을 알 수 있도록 함수 오버라이딩 (파형 덤프에 필수)
double sc_time_stamp() { return main_time; }

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true); 

    VDecompresser *dut = new VDecompresser;

    auto trace = std::make_unique<VerilatedVcdC>();
    dut->trace(trace.get(), 99); 
    trace->open("waveform2.vcd"); 

    std::cout << "Simulation start!" << std::endl;

    dut->clk = 0;
    dut->resetn = 0; 
    dut->Clk_Counter = 0; 
    dut->BRAM_base = 0; //background 1 layer라고 가정.
    dut->BRAM_size = 1;
    dut->BRAM_number = 12;
    dut->BRAM_rw_counter_bits = 3; //4'b0011

    dut->PPU_start = 0;
    dut->BRAM12_dout_b = 1; //일단 1로 고정.
    dut->Compressed_FIFO_count = 5;
    dut->Compressed_FIFO_r_master = 0; 
    dut->Compressed_FIFO_data = 0x00AA8AFF8A; //FF 10번 반복 후 AA 10번 반복 후 종료.
    dut->eval();
    trace->dump(main_time++);

    while (!Verilated::gotFinish() && main_time < 1000)
    {
        // 리셋 해제
        if (main_time > 10) {
            dut->resetn = 1;
        }

        // 테스트를 위해 특정 시간에 PPU_start 신호 인가
        if (main_time == 21) dut->PPU_start = 1;
        //if (main_time == 23) dut->PPU_start = 0; // 1클럭 펄스

        dut->clk = 1;
        if(dut->Clk_Counter == 3) dut->Clk_Counter = 0;
        else dut->Clk_Counter = dut->Clk_Counter + 1;
        if(dut->Clk_Counter == 0 || dut->Clk_Counter == 1) dut->Compressed_FIFO_r_master = 1;
        else dut->Compressed_FIFO_r_master = 0;
        dut->eval();
        trace->dump(main_time++);

        dut->clk = 0;
        dut->eval();
        trace->dump(main_time++);
    }
    dut->final();
    trace->close();

    std::cout << "Simulation completed successfully. Check waveform.vcd!" << std::endl;
    delete dut; // 메모리 누수 방지
    return 0;
}