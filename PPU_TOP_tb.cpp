#include <SDL2/SDL.h>
#include <iostream>
#include <memory>
#include <cstdint>
#include <vector>
#include <fstream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VPPU_TOP.h"

// Build with:
// verilator -Wall -Wno-fatal --trace -cc PPU_TOP.sv --exe PPU_TOP_tb.cpp --build && ./obj_dir/VPPU_TOP
// 이걸로 실행: verilator -Wall -Wno-fatal --trace -cc --top-module PPU_TOP PPU_TOP.sv --exe PPU_TOP_tb.cpp -CFLAGS "$(sdl2-config --cflags)" -LDFLAGS "$(sdl2-config --libs)" --build -j $(nproc) && ./obj_dir/VPPU_TOP

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    std::unique_ptr<VPPU_TOP> dut = std::make_unique<VPPU_TOP>();
    auto trace = std::make_unique<VerilatedVcdC>();
    dut->trace(trace.get(), 99);
    trace->open("waveform_ppu_top.vcd");

    vluint64_t main_time = 0;

    uint64_t bram7[512] = {0};
    uint64_t bram8[512] = {0};
    uint64_t bram9[512] = {0};
    uint64_t bram10[512] = {0};
    uint64_t bram11[512] = {0};
    uint64_t bram12[512] = {0};

    std::vector<uint32_t> ddr3_memory(262144, 0);
    std::vector<uint32_t> lut(256, 0);
    std::vector<uint32_t> final_pixels;
    final_pixels.reserve(320 * 240);

    auto pack_word = [](uint8_t b0, uint8_t b1, uint8_t b2, uint8_t b3) {
        return uint32_t(b0) | (uint32_t(b1) << 8) | (uint32_t(b2) << 16) | (uint32_t(b3) << 24);
    };

    // Append a run-length encoded segment: control byte MSB=1, lower7bits=count (1..127),
    // followed by single pixel byte to repeat 'count' times.
    auto append_rle = [&](std::vector<uint8_t> &out, uint8_t value, int pixels) {
        while (pixels > 0) {
            uint8_t count = pixels >= 127 ? 127 : uint8_t(pixels);
            out.push_back(0x80 | count);
            out.push_back(value);
            pixels -= count;
        }
    };

    auto write_stream = [&](uint32_t base_byte_addr, const std::vector<uint8_t> &bytes) {
        for (uint32_t i = 0; i < bytes.size(); i += 4) {
            uint32_t word = 0;
            for (uint32_t j = 0; j < 4 && i + j < bytes.size(); ++j) {
                word |= uint32_t(bytes[i + j]) << (8 * j);
            }
            ddr3_memory[(base_byte_addr + i) / 4] = word;
        }
    };

    // Create a byte-stream for a layer using the RLE format described:
    // - Start with a control byte.
    // - Control MSB=1: repeat next pixel byte 'count' times (count in 1..127)
    // - Control MSB=0: next 'count' bytes are raw (non-repeating) pixels (count in 1..127)
    // - Terminate stream with 0x80 or 0x00.
    auto load_layer = [&](uint32_t base_byte_addr, uint8_t pixel_value, int pixel_count) {
        std::vector<uint8_t> stream;
        if (pixel_count <= 0) {
            // empty layer: write terminator 0x00 (MSB=0, zero count) as valid end marker
            stream.push_back(0x00);
        } else if (pixel_value == 0) {
            // Transparent value: emit terminator only (no pixels)
            stream.push_back(0x00);
        } else {
            // For uniform-value layers produce one or more repeat segments
            append_rle(stream, pixel_value, pixel_count);
            // End with terminator 0x80 (MSB=1, zero payload) allowed by format
            stream.push_back(0x80);
        }
        write_stream(base_byte_addr, stream);
    };

    constexpr uint32_t BACKGROUND1_ADDR   = 0x00000;
    constexpr uint32_t BACKGROUND2_ADDR   = 0x02000;
    constexpr uint32_t CHARACTER1_ADDR    = 0x04000;
    constexpr uint32_t CHARACTER2_ADDR    = 0x06000;
    constexpr uint32_t CHARACTER3_ADDR    = 0x08000;
    constexpr uint32_t CHARACTER4_ADDR    = 0x0A000;
    constexpr uint32_t SCRIPT_ADDR        = 0x0C000;
    constexpr uint32_t STATUS_ADDR        = 0x0E000;
    constexpr uint32_t UNIVERSAL1_ADDR    = 0x10000;
    constexpr uint32_t UNIVERSAL2_ADDR    = 0x12000;

    load_layer(BACKGROUND1_ADDR, 1, 320 * 240);
    load_layer(BACKGROUND2_ADDR, 0, 0);
    load_layer(CHARACTER1_ADDR, 3, 160 * 240);
    load_layer(CHARACTER2_ADDR, 4, 160 * 240);
    load_layer(CHARACTER3_ADDR, 0, 0);
    load_layer(CHARACTER4_ADDR, 0, 0);
    load_layer(SCRIPT_ADDR, 7, 320 * 120);
    load_layer(STATUS_ADDR, 8, 160 * 240);
    load_layer(UNIVERSAL1_ADDR, 0, 0);
    load_layer(UNIVERSAL2_ADDR, 0, 0);

    // Dump first few words of BACKGROUND1 to verify RLE packing / endianness
    std::cout << "DDRR3[BACKGROUND1] words:";
    for (int i = 0; i < 8; ++i) {
        uint32_t w = ddr3_memory[(BACKGROUND1_ADDR / 4) + i];
        std::cout << " 0x" << std::hex << w << std::dec;
    }
    std::cout << std::endl;

    lut[0] = 0;
    lut[1] = 0x3F000; // red
    lut[2] = 0x00FC0; // green
    lut[3] = 0x0003F; // blue
    lut[4] = 0x3FFC0; // yellow
    lut[5] = 0x000FF; // cyan
    lut[6] = 0x3F03F; // magenta
    lut[7] = 0x30600; // orange
    lut[8] = 0x15555; // gray
    lut[9] = 0x3FFFF; // white
    lut[10] = 0x11111; // dim color

    int emem_state = 0;
    uint32_t emem_burst_counter = 0;
    uint32_t emem_current_addr = 0;

    dut->clk = 0;
    dut->resetn = 0;
    dut->PPU_start = 0;

    dut->CPU_LUT_Cache1_pixel = 0;
    dut->CPU_LUT_Cache2_pixel = 0;
    dut->CPU_LUT_Cache3_pixel = 0;
    dut->CPU_LUT_Cache4_pixel = 0;

    dut->EMEM_ready = 0;
    dut->EMEM_rdata = 0;

    dut->LUT_data_out1 = 0;
    dut->LUT_data_out2 = 0;

    dut->Background1_WX = 0;
    dut->Background1_WY = 0;
    dut->Background1_SCX = 0;
    dut->Background1_SCY = 0;
    dut->Background1_a = 16;
    dut->Background1_z = 1;

    dut->Background2_WX = 0;
    dut->Background2_WY = 0;
    dut->Background2_SCX = 0;
    dut->Background2_SCY = 0;
    dut->Background2_a = 0;
    dut->Background2_z = 0;

    dut->Character1_WX = 0;
    dut->Character1_WY = 0;
    dut->Character1_SCX = 0;
    dut->Character1_SCY = 0;
    dut->Character1_a = 0;
    dut->Character1_z = 0;

    dut->Character2_WX = 0;
    dut->Character2_WY = 0;
    dut->Character2_SCX = 0;
    dut->Character2_SCY = 0;
    dut->Character2_a = 0;
    dut->Character2_z = 0;

    dut->Character3_WX = 0;
    dut->Character3_WY = 0;
    dut->Character3_SCX = 0;
    dut->Character3_SCY = 0;
    dut->Character3_a = 0;
    dut->Character3_z = 0;

    dut->Character4_WX = 0;
    dut->Character4_WY = 0;
    dut->Character4_SCX = 0;
    dut->Character4_SCY = 0;
    dut->Character4_a = 0;
    dut->Character4_z = 0;

    dut->Script_WX = 0;
    dut->Script_WY = 0;
    dut->Script_SCX = 0;
    dut->Script_SCY = 0;
    dut->Script_a = 0;
    dut->Script_z = 0;

    dut->Status_WX = 0;
    dut->Status_WY = 0;
    dut->Status_SCX = 0;
    dut->Status_SCY = 0;
    dut->Status_a = 0;
    dut->Status_z = 0;

    dut->Universal1_WX = 0;
    dut->Universal1_WY = 0;
    dut->Universal1_SCX = 0;
    dut->Universal1_SCY = 0;
    dut->Universal1_a = 0;
    dut->Universal1_z = 0;

    dut->Universal2_WX = 0;
    dut->Universal2_WY = 0;
    dut->Universal2_SCX = 0;
    dut->Universal2_SCY = 0;
    dut->Universal2_a = 0;
    dut->Universal2_z = 0;

    for (int idx = 0; idx < 4; ++idx) {
        dut->clk = 0;
        dut->eval();
        trace->dump(main_time++);
        dut->clk = 1;
        dut->eval();
        trace->dump(main_time++);
    }

    dut->resetn = 1;
    //dut->PPU_start = 1;

    for (int idx = 0; idx < 2; ++idx) {
        dut->clk = 0;
        dut->eval();
        trace->dump(main_time++);
        dut->clk = 1;
        dut->eval();
        trace->dump(main_time++);
    }

    //dut->PPU_start = 0;
    dut->PPU_start = 1;

    dut->Background_Layer1_Address = BACKGROUND1_ADDR;
    dut->Background_Layer2_Address = BACKGROUND2_ADDR;
    dut->Character_Layer1_Address = CHARACTER1_ADDR;
    dut->Character_Layer2_Address = CHARACTER2_ADDR;
    dut->Character_Layer3_Address = CHARACTER3_ADDR;
    dut->Character_Layer4_Address = CHARACTER4_ADDR;
    dut->Script_Layer_Address     = SCRIPT_ADDR;
    dut->Status_Layer_Address     = STATUS_ADDR;
    dut->Universal_Layer1_Address = UNIVERSAL1_ADDR;
    dut->Universal_Layer2_Address = UNIVERSAL2_ADDR;

    dut->CPU_LUT_Cache1_pixel = 1;
    dut->CPU_LUT_Cache2_pixel = 2;
    dut->CPU_LUT_Cache3_pixel = 3;
    dut->CPU_LUT_Cache4_pixel = 4;

    dut->Background1_WX = 0;
    dut->Background1_WY = 0;
    dut->Background1_SCX = 0;
    dut->Background1_SCY = 0;
    dut->Background1_a = 16;
    dut->Background1_z = 1;

    dut->Background2_WX = 0;
    dut->Background2_WY = 0;
    dut->Background2_SCX = 0;
    dut->Background2_SCY = 0;
    dut->Background2_a = 0;
    dut->Background2_z = 0;

    dut->Character1_WX = 0;
    dut->Character1_WY = 0;
    dut->Character1_SCX = 0;
    dut->Character1_SCY = 0;
    dut->Character1_a = 16;
    dut->Character1_z = 3;

    dut->Character2_WX = 160;
    dut->Character2_WY = 0;
    dut->Character2_SCX = 0;
    dut->Character2_SCY = 0;
    dut->Character2_a = 16;
    dut->Character2_z = 4;

    dut->Character3_WX = 0;
    dut->Character3_WY = 0;
    dut->Character3_SCX = 0;
    dut->Character3_SCY = 0;
    dut->Character3_a = 0;
    dut->Character3_z = 0;

    dut->Character4_WX = 0;
    dut->Character4_WY = 0;
    dut->Character4_SCX = 0;
    dut->Character4_SCY = 0;
    dut->Character4_a = 0;
    dut->Character4_z = 0;

    dut->Script_WX = 0;
    dut->Script_WY = 0;
    dut->Script_SCX = 0;
    dut->Script_SCY = 0;
    dut->Script_a = 16;
    dut->Script_z = 7;

    dut->Status_WX = 160;
    dut->Status_WY = 0;
    dut->Status_SCX = 0;
    dut->Status_SCY = 0;
    dut->Status_a = 16;
    dut->Status_z = 6;

    dut->Universal1_WX = 0;
    dut->Universal1_WY = 0;
    dut->Universal1_SCX = 0;
    dut->Universal1_SCY = 0;
    dut->Universal1_a = 0;
    dut->Universal1_z = 0;

    dut->Universal2_WX = 0;
    dut->Universal2_WY = 0;
    dut->Universal2_SCX = 0;
    dut->Universal2_SCY = 0;
    dut->Universal2_a = 0;
    dut->Universal2_z = 0;

    while (!Verilated::gotFinish() && main_time < 2000000) {
        dut->LUT_data_out1 = lut[dut->LUT_addr_r1];
        dut->LUT_data_out2 = lut[dut->LUT_addr_r2];

        // ----------------------------------------------------
        // [1단계] 클럭 상승 에지 (로직 평가)
        // ----------------------------------------------------
        dut->clk = 1;
        dut->eval();
        trace->dump(main_time++);
        // (removed real-time pixel streaming from copied project)

        if (dut->LUT_we) {
            lut[dut->LUT_addr_w] = dut->LUT_data_in;
        }

        // ----------------------------------------------------
        // [2단계] 클럭 하강 에지 (입력 신호 주입)
        // ----------------------------------------------------
        dut->clk = 0;
        // ========================================================
        // 💡 3. 외부 메모리(DDR3) 상태 머신
        // ========================================================
        if (emem_state == 0) {
            if (dut->EMEM_valid) {
                dut->EMEM_ready = 1;
                emem_current_addr = dut->EMEM_addr >> 2;
                dut->EMEM_rdata = ddr3_memory[emem_current_addr];
                emem_burst_counter = dut->EMEM_burst_en ? dut->EMEM_burst_len : 0;
                //std::cout << "EMEM_REQ addr=0x" << std::hex << dut->EMEM_addr << std::dec
              //            << " idx=" << emem_current_addr << " rdata=0x" << std::hex << dut->EMEM_rdata << std::dec << std::endl;
                if (dut->EMEM_burst_en && emem_burst_counter > 0) {
                    emem_state = 1;
                }
            } else {
                dut->EMEM_ready = 0;
            }
        } else if (emem_state == 1) {
            emem_current_addr++;
            if (emem_burst_counter > 0) {
                emem_burst_counter--;
            }
            dut->EMEM_ready = 1;
            dut->EMEM_rdata = ddr3_memory[emem_current_addr];
            //std::cout << "EMEM_BURST idx=" << emem_current_addr << " rdata=0x" << std::hex << dut->EMEM_rdata << std::dec << std::endl;
            if (emem_burst_counter == 0) {
                emem_state = 0;
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

        dut->eval();
        trace->dump(main_time++); // 반 클럭 진행 완료 기록

        if (dut->Final_pixel_valid) {
            final_pixels.push_back(dut->Final_pixel_RGB);
            if (final_pixels.size() <= 32) {
                std::cout << "DEBUG: pix[" << final_pixels.size()-1 << "]=0x" << std::hex << dut->Final_pixel_RGB
                          << std::dec << std::endl;
            }
        }

        if (main_time < 100) {
            std::cout << "time=" << main_time
                      << " final_count=" << final_pixels.size()
                      << " EMEM_valid=" << (int)(dut->EMEM_valid)
                      << " EMEM_ready=" << (int)(dut->EMEM_ready)
                      << " Final_valid=" << (int)(dut->Final_pixel_valid)
                      << " Final_RGB=0x" << std::hex << (uint32_t)(dut->Final_pixel_RGB) << std::dec
                      << std::endl;
        }

        if (final_pixels.size() >= 320 * 240) {
            std::cout << "Captured full frame: " << final_pixels.size() << " pixels" << std::endl;
            break;
        }
    }

    std::ofstream frame_file("final_frame.bin", std::ios::binary);
    for (uint32_t pixel : final_pixels) {
        frame_file.write(reinterpret_cast<const char *>(&pixel), sizeof(pixel));
    }
    frame_file.close();

    std::cout << "Captured " << final_pixels.size() << " final pixels." << std::endl;
    std::cout << "Wrote final_frame.bin" << std::endl;

    // --- SDL2: display captured frame at 2x scale (640x480) ---
    if (final_pixels.size() >= 320 * 240) {
        if (SDL_Init(SDL_INIT_VIDEO) == 0) {
            SDL_Window *win = SDL_CreateWindow("PPU Final Frame",
                                               SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                               320 * 2, 240 * 2, SDL_WINDOW_SHOWN);
            if (win) {
                SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
                if (ren) {
                    SDL_Texture *tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888,
                                                          SDL_TEXTUREACCESS_STATIC, 320, 240);
                    if (tex) {
                        std::vector<uint32_t> pixels32(320 * 240);
                        for (size_t i = 0; i < pixels32.size(); ++i) {
                            uint32_t px = final_pixels[i];
                            uint8_t r = static_cast<uint8_t>((px >> 12) & 0x3F) << 2;
                            uint8_t g = static_cast<uint8_t>((px >> 6) & 0x3F) << 2;
                            uint8_t b = static_cast<uint8_t>(px & 0x3F) << 2;
                            pixels32[i] = (0xFFu << 24) | (uint32_t(r) << 16) | (uint32_t(g) << 8) | uint32_t(b);
                        }
                        SDL_UpdateTexture(tex, NULL, pixels32.data(), 320 * sizeof(uint32_t));
                        SDL_Event e;
                        bool running = true;
                        SDL_Rect dest = {0, 0, 320 * 2, 240 * 2};
                        while (running) {
                            while (SDL_PollEvent(&e)) {
                                if (e.type == SDL_QUIT) running = false;
                                if (e.type == SDL_KEYDOWN) running = false;
                            }
                            SDL_RenderClear(ren);
                            SDL_RenderCopy(ren, tex, NULL, &dest);
                            SDL_RenderPresent(ren);
                            SDL_Delay(16);
                        }
                        SDL_DestroyTexture(tex);
                    }
                    SDL_DestroyRenderer(ren);
                }
                SDL_DestroyWindow(win);
            }
            SDL_Quit();
        } else {
            std::cerr << "SDL_Init failed; skipping display." << std::endl;
        }
    }

    dut->final();
    trace->close();

    std::cout << "Simulation finished. waveform_ppu_top.vcd generated." << std::endl;
    return 0;
}
