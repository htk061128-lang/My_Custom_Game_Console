#include <iostream>
#include <memory>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VPixel_Processer.h"

// 사용할 때:
// verilator -Wall -Wno-fatal --trace -cc Pixel_Processer.sv --exe Pixel_Processer_tb.cpp --build && ./obj_dir/VPixel_Processer

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    std::unique_ptr<VPixel_Processer> dut = std::make_unique<VPixel_Processer>();
    auto trace = std::make_unique<VerilatedVcdC>();
    dut->trace(trace.get(), 99);
    trace->open("waveform_pixel_processer.vcd");

    vluint64_t main_time = 0;

    // 기본 입력 초기화
    dut->clk = 0;
    dut->resetn = 0;
    dut->PPU_start = 0;

    dut->Background1_a = 8'd16;
    dut->Background1_z = 8'd1;
    dut->Background1_pixel_valid = 0;
    dut->Background1_pixel_RGB = 18'h2AAAA;
    dut->Background1_pixel_is_trans = 0;

    dut->Background2_a = 8'd8;
    dut->Background2_z = 8'd2;
    dut->Background2_pixel_valid = 0;
    dut->Background2_pixel_RGB = 18'h15555;
    dut->Background2_pixel_is_trans = 0;

    dut->Character1_a = 8'd12;
    dut->Character1_z = 8'd3;
    dut->Character1_pixel_valid = 0;
    dut->Character1_pixel_RGB = 18'h3FFFF;
    dut->Character1_pixel_is_trans = 0;

    // 나머지 레이어는 기본값 0으로 유지
    dut->Character2_a = 0;
    dut->Character2_z = 0;
    dut->Character2_pixel_valid = 0;
    dut->Character2_pixel_RGB = 0;
    dut->Character2_pixel_is_trans = 1;

    dut->Character3_a = 0;
    dut->Character3_z = 0;
    dut->Character3_pixel_valid = 0;
    dut->Character3_pixel_RGB = 0;
    dut->Character3_pixel_is_trans = 1;

    dut->Character4_a = 0;
    dut->Character4_z = 0;
    dut->Character4_pixel_valid = 0;
    dut->Character4_pixel_RGB = 0;
    dut->Character4_pixel_is_trans = 1;

    dut->Script_a = 0;
    dut->Script_z = 0;
    dut->Script_pixel_valid = 0;
    dut->Script_pixel_RGB = 0;
    dut->Script_pixel_is_trans = 1;

    dut->Status_a = 0;
    dut->Status_z = 0;
    dut->Status_pixel_valid = 0;
    dut->Status_pixel_RGB = 0;
    dut->Status_pixel_is_trans = 1;

    dut->Universal1_a = 0;
    dut->Universal1_z = 0;
    dut->Universal1_pixel_valid = 0;
    dut->Universal1_pixel_RGB = 0;
    dut->Universal1_pixel_is_trans = 1;

    dut->Universal2_a = 0;
    dut->Universal2_z = 0;
    dut->Universal2_pixel_valid = 0;
    dut->Universal2_pixel_RGB = 0;
    dut->Universal2_pixel_is_trans = 1;

    // 리셋 기간
    for (int i = 0; i < 5; ++i) {
        dut->clk = 0;
        dut->eval();
        trace->dump(main_time++);
        dut->clk = 1;
        dut->eval();
        trace->dump(main_time++);
    }

    dut->resetn = 1;
    dut->PPU_start = 1;
    dut->Background1_pixel_valid = 1;
    dut->Background2_pixel_valid = 1;
    dut->Character1_pixel_valid = 1;

    for (int cycle = 0; cycle < 120; ++cycle) {
        // 클럭 상승 에지
        dut->clk = 1;
        dut->eval();
        trace->dump(main_time++);

        // PPU_start는 첫 펄스만 필요하므로 1 클럭 후 해제
        if (cycle == 1) {
            dut->PPU_start = 0;
        }

        // 클럭 하강 에지
        dut->clk = 0;

        // 간단한 검증 출력
        if ((cycle % 10) == 0) {
            std::cout << "cycle=" << cycle
                      << " valid1=" << dut->Background1_pixel_ready
                      << " valid2=" << dut->Background2_pixel_ready
                      << " valid3=" << dut->Character1_pixel_ready
                      << " out_valid=" << dut->Final_pixel_valid
                      << " out_rgb=0x" << std::hex << dut->Final_pixel_RGB << std::dec
                      << std::endl;
        }

        dut->eval();
        trace->dump(main_time++);
    }

    dut->final();
    trace->close();

    std::cout << "Simulation finished. Waveform file: waveform_pixel_processer.vcd" << std::endl;
    return 0;
}
