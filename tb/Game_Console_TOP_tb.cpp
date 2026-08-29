#include <SDL2/SDL.h>
#include <iostream>
#include <memory>
#include <cstdint>
#include <vector>
#include <fstream>
#include <verilated.h>
// #include <verilated_vcd_c.h> // 디버깅(파형)이 필요하면 주석 해제

// 타겟 모듈을 Game_Console_TOP으로 변경!
#include "VGame_Console_TOP.h" 
#include "font_data.h"
#include "test_firmware.h"

//실행 명령어: verilator -Wall -Wno-fatal --trace -cc --top-module Game_Console_TOP *.sv --exe Game_Console_TOP_tb.cpp -CFLAGS "$(sdl2-config --cflags)" -LDFLAGS "$(sdl2-config --libs)" --build -j $(nproc) && ./obj_dir/VGame_Console_TOP

// DDR3 메모리 컨트롤러를 모사하는 클래스 (CPU 및 PPU 포트 모두 사용 가능)
struct DDR3_Memory {
    std::vector<uint32_t> mem;
    int state = 0;
    uint32_t burst_counter = 0;
    uint32_t current_addr = 0;

    DDR3_Memory(size_t size) : mem(size, 0) {}

    void tick(uint8_t valid, uint32_t addr, uint32_t wdata, uint8_t wstrb, 
              uint8_t burst_en, uint8_t burst_len, 
              uint8_t& ready, uint32_t& rdata) {
        if (state == 0) {
            if (valid) {
                ready = 1;
                current_addr = addr >> 2; // Byte address to Word address
                
                // Write 동작 (wstrb에 따른 마스킹 처리)
                if (wstrb != 0) {
                    uint32_t mask = 0;
                    if (wstrb & 0x1) mask |= 0x000000FF;
                    if (wstrb & 0x2) mask |= 0x0000FF00;
                    if (wstrb & 0x4) mask |= 0x00FF0000;
                    if (wstrb & 0x8) mask |= 0xFF000000;
                    mem[current_addr] = (mem[current_addr] & ~mask) | (wdata & mask);
                }

                // Read 동작
                rdata = mem[current_addr % mem.size()];
                
                burst_counter = burst_en ? burst_len : 0;
                if (burst_en && burst_counter > 0) {
                    state = 1;
                }
            } else {
                ready = 0;
            }
        } else if (state == 1) {
            current_addr++;
            if (burst_counter > 0) burst_counter--;
            
            ready = 1;
            rdata = mem[current_addr % mem.size()];
            
            if (burst_counter == 0) {
                state = 0;
            }
        }
    }
};

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    auto dut = std::make_unique<VGame_Console_TOP>();
    
    // 필요 시 파형 기록 활성화 (오래 켜두면 VCD 파일이 엄청나게 커지므로 주의)
    // auto trace = std::make_unique<VerilatedVcdC>();
    // dut->trace(trace.get(), 1);
    // trace->open("waveform.vcd");

    // ==========================================
    // 1. 메모리 및 BRAM 할당
    // ==========================================
    DDR3_Memory ddr3(262144); // 1MB DDR3
    
    // I-Cache용 72-bit BRAM (Verilator에서는 VlWide<3> 즉 uint32_t 배열로 표현됨)
    uint32_t bram0[512][3] = {0}, bram1[512][3] = {0}, bram2[512][3] = {0}, bram3[512][3] = {0};
    
    uint32_t bram4[1024] = {0};  // 초성1
    uint32_t bram5[1024] = {0};  // 초성2
    uint32_t bram6[1024] = {0};  // 중성
    uint32_t bram13[1024] = {0}; // 종성
    uint32_t bram14[1024] = {0}; // 폰트맵
    
    uint64_t bram7[512] = {0}, bram8[512] = {0}, bram9[512] = {0};
    uint64_t bram10[512] = {0}, bram11[512] = {0}, bram12[512] = {0};
    std::vector<uint32_t> lut(256, 0);

    auto pack_font_16x16 = [](const uint16_t lines[16], uint32_t *target_bram, uint32_t base_addr) {
        for (int i = 0; i < 8; ++i) {
            uint32_t line_even = lines[i * 2];
            uint32_t line_odd  = lines[i * 2 + 1];
            target_bram[base_addr + i] = (line_odd << 16) | line_even;
        }
    };

    auto init_korean_font_bram = [&](uint32_t *bram4_, uint32_t *bram5_, uint32_t *bram6_, uint32_t *bram13_, uint32_t *bram14_) {
        uint32_t cho_base_bram4[6] = {0, 152, 304, 456, 608, 760};
        for (int set = 0; set < 6; ++set) {
            for (int idx = 0; idx < 19; ++idx) {
                pack_font_16x16(CHO_SUNG[set][idx], bram4_, cho_base_bram4[set] + (idx * 8));
            }
        }

        uint32_t cho_base_bram5[2] = {0, 152};
        for (int set = 0; set < 2; ++set) {
            for (int idx = 0; idx < 19; ++idx) {
                pack_font_16x16(CHO_SUNG[set + 6][idx], bram5_, cho_base_bram5[set] + (idx * 8));
            }
        }

        uint32_t jung_base_bram6[4] = {0, 168, 336, 504};
        for (int set = 0; set < 4; ++set) {
            for (int idx = 0; idx < 21; ++idx) {
                pack_font_16x16(JUNG_SUNG[set][idx], bram6_, jung_base_bram6[set] + (idx * 8));
            }
        }

        uint32_t chong_base_bram13[4] = {0, 224, 448, 672};
        for (int set = 0; set < 4; ++set) {
            for (int idx = 0; idx < 28; ++idx) {
                pack_font_16x16(CHONG_SUNG[set][idx], bram13_, chong_base_bram13[set] + (idx * 8));
            }
        }

        for (int i = 0; i < 1024; ++i) {
            bram14_[i] = 0x00200020;
        }

        bram14_[201] = (uint32_t(0xC655) << 16) | uint32_t(0xB9C8);
        bram14_[242] = (uint32_t(0xAE30) << 16) | uint32_t(0xC5EC);
        bram14_[243] = (uint32_t(0xC9C0) << 16) | uint32_t(0xAE4C);
        bram14_[244] = (uint32_t(0xC624) << 16) | uint32_t(0x0020);
        bram14_[245] = (uint32_t(0xB2C8) << 16) | uint32_t(0xB2E4);
        bram14_[246] = (uint32_t(0x0020) << 16) | uint32_t(0x002E);
        bram14_[262] = (uint32_t(0xBC95) << 16) | uint32_t(0xC81C);
        bram14_[263] = (uint32_t(0xAD70) << 16) | uint32_t(0xC774);
        bram14_[264] = (uint32_t(0xC6A9) << 16) | uint32_t(0x0020);
        bram14_[265] = (uint32_t(0xC5EC) << 16) | uint32_t(0xC0AC);
        bram14_[266] = (uint32_t(0x0020) << 16) | uint32_t(0x0021);
        bram14_[298] = (uint32_t(0x0020) << 16) | uint32_t(0x003E);
    };

    init_korean_font_bram(bram4, bram5, bram6, bram13, bram14);

    lut[0] = 0x00000; lut[1] = 0x3F000; lut[2] = 0x00FC0; lut[3] = 0x0003F;
    lut[4] = 0x3FFC0; lut[5] = 0x000FF; lut[6] = 0x3F03F; lut[7] = 0x30600;
    lut[8] = 0x15555; lut[9] = 0x3FFFF; lut[10] = 0x11111; lut[11] = 0x3EDCE;
    lut[12] = 0x1F105; lut[13] = 0x050CE; lut[14] = 0x34145; lut[15] = 0x21084;
    lut[16] = 0x1CEFF; lut[17] = 0x06AFA; lut[18] = 0x0B840; lut[19] = 0x37A20; lut[20] = 0x028A5;

    // 옵션: CPU가 실행할 프로그램(바이너리)을 DDR3에 로드 (cpu 펌웨어가 있다면)
    /*
    std::ifstream fw_file("firmware.bin", std::ios::binary);
    if (fw_file) {
        fw_file.read(reinterpret_cast<char*>(ddr3.mem.data()), ddr3.mem.size() * sizeof(uint32_t));
        std::cout << "Firmware loaded to DDR3.\n";
    }
    */
   // DDR3 메모리 0번지부터 펌웨어 복사
    for (size_t i = 0; i < sizeof(test_firmware) / sizeof(uint32_t); ++i) {
        ddr3.mem[i] = test_firmware[i];
    }

    // ==========================================
    // 2. SDL2 초기화 (루프 진입 전)
    // ==========================================
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        std::cerr << "SDL_Init failed: " << SDL_GetError() << std::endl;
        return -1;
    }
    SDL_Window* win = SDL_CreateWindow("Game Console PPU Render", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
    SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
    SDL_Texture* tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING, 320, 240);

    std::vector<uint32_t> final_pixels;
    final_pixels.reserve(320 * 240);
    uint32_t frame_buffer[320 * 240];

    // ==========================================
    // 3. 리셋 시퀀스
    // ==========================================
    dut->clk = 0; dut->resetn = 0; dut->eval();
    for (int i = 0; i < 10; i++) {
        dut->clk = 1; dut->eval();
        dut->clk = 0; dut->eval();
    }
    dut->resetn = 1;

    // BRAM Read Delay 모사를 위한 버퍼
    uint32_t next_bram0[3] = {0}, next_bram1[3] = {0}, next_bram2[3] = {0}, next_bram3[3] = {0};
    uint32_t next_bram4_a = 0, next_bram4_b = 0;
    uint32_t next_bram5_a = 0, next_bram5_b = 0;
    uint32_t next_bram6_a = 0, next_bram6_b = 0;
    uint32_t next_bram13_a = 0, next_bram13_b = 0;
    uint32_t next_bram14_a = 0, next_bram14_b = 0;
    uint64_t next_bram7_b = 0, next_bram8_b = 0, next_bram9_b = 0;
    uint64_t next_bram10_b = 0, next_bram11_b = 0, next_bram12_b = 0;

    bool running = true;
    uint8_t current_joypad = 0;

    // ==========================================
    // 4. 메인 에뮬레이션 무한 루프
    // ==========================================
    printf(""
           "====================================================\n"
           "Game Console PPU Simulation Started\n"
           "====================================================\n");
    while (running) {
        
        // --- [A] SDL2 이벤트 처리 및 키보드 입력 ---
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) running = false;
            if (e.type == SDL_KEYDOWN || e.type == SDL_KEYUP) {
                bool pressed = (e.type == SDL_KEYDOWN);
                // 예: 방향키 누름 여부에 따라 조이패드 인터럽트 비트 ON/OFF (원하는 키 매핑)
                if (e.key.keysym.sym == SDLK_UP || e.key.keysym.sym == SDLK_DOWN ||
                    e.key.keysym.sym == SDLK_LEFT || e.key.keysym.sym == SDLK_RIGHT ||
                    e.key.keysym.sym == SDLK_z || e.key.keysym.sym == SDLK_x) {
                    current_joypad = pressed ? 1 : 0; 
                }
                if (e.key.keysym.sym == SDLK_ESCAPE) running = false;
            }
        }
        
        // Game_Console_TOP의 실수신호는 joypad_state_in이고, joypad_irq는 출력/상태 신호다.
        dut->joypad_state_in = current_joypad;

        // --- [B] 한 프레임(320x240) 생성될 때까지 클럭 펌핑 ---
        bool frame_done = false;
        while (!frame_done && running) {
            
            // ----------------------------------------------------
            // [B-1] 클럭 하강 에지 (입력 신호 주입 및 메모리 처리)
            // ----------------------------------------------------
            dut->clk = 0;
            
            // 1. DDR3 CPU 포트 처리
            ddr3.tick(dut->DDR3_CPU_valid, dut->DDR3_CPU_addr, dut->DDR3_CPU_wdata, dut->DDR3_CPU_wstrb, 
                      dut->DDR3_CPU_burst_en, dut->DDR3_CPU_burst_len, 
                      dut->DDR3_CPU_ready, dut->DDR3_CPU_rdata);

            // 2. DDR3 PPU 포트 처리
            ddr3.tick(dut->DDR3_PPU_valid, dut->DDR3_PPU_addr, dut->DDR3_PPU_wdata, dut->DDR3_PPU_wstrb, 
                      dut->DDR3_PPU_burst_en, dut->DDR3_PPU_burst_len, 
                      dut->DDR3_PPU_ready, dut->DDR3_PPU_rdata);

            dut->eval(); // 입력값 전파

            // 3. I-Cache BRAM0~3 Write (CPU 측에서 쓸 경우 대비)
            if (dut->BRAM0_wen) { bram0[dut->BRAM0_waddr][0] = dut->BRAM0_din[0]; bram0[dut->BRAM0_waddr][1] = dut->BRAM0_din[1]; bram0[dut->BRAM0_waddr][2] = dut->BRAM0_din[2]; }
            if (dut->BRAM1_wen) { bram1[dut->BRAM1_waddr][0] = dut->BRAM1_din[0]; bram1[dut->BRAM1_waddr][1] = dut->BRAM1_din[1]; bram1[dut->BRAM1_waddr][2] = dut->BRAM1_din[2]; }
            if (dut->BRAM2_wen) { bram2[dut->BRAM2_waddr][0] = dut->BRAM2_din[0]; bram2[dut->BRAM2_waddr][1] = dut->BRAM2_din[1]; bram2[dut->BRAM2_waddr][2] = dut->BRAM2_din[2]; }
            if (dut->BRAM3_wen) { bram3[dut->BRAM3_waddr][0] = dut->BRAM3_din[0]; bram3[dut->BRAM3_waddr][1] = dut->BRAM3_din[1]; bram3[dut->BRAM3_waddr][2] = dut->BRAM3_din[2]; }

            // 4. PPU BRAM Write
            if (dut->BRAM7_en_a && dut->BRAM7_we_a) bram7[dut->BRAM7_addr_a] = dut->BRAM7_din_a;
            if (dut->BRAM8_en_a && dut->BRAM8_we_a) bram8[dut->BRAM8_addr_a] = dut->BRAM8_din_a;
            if (dut->BRAM9_en_a && dut->BRAM9_we_a) bram9[dut->BRAM9_addr_a] = dut->BRAM9_din_a;
            if (dut->BRAM10_en_a && dut->BRAM10_we_a) bram10[dut->BRAM10_addr_a] = dut->BRAM10_din_a;
            if (dut->BRAM11_en_a && dut->BRAM11_we_a) bram11[dut->BRAM11_addr_a] = dut->BRAM11_din_a;
            if (dut->BRAM12_en_a && dut->BRAM12_we_a) bram12[dut->BRAM12_addr_a] = dut->BRAM12_din_a;
            
            // PPU 폰트 BRAM Write (CPU가 쓸 경우)
            if (dut->BRAM4_en_b && dut->BRAM4_wstrb_b) bram4[dut->BRAM4_addr_b] = dut->BRAM4_din_b;
            if (dut->BRAM14_en_b && dut->BRAM14_wstrb_b) bram14[dut->BRAM14_addr_b] = dut->BRAM14_din_b; // 폰트맵 업데이트 등

            // 5. BRAM Read (다음 클럭 상승 시 반환할 데이터 준비)
            if (dut->BRAM0_ren) { next_bram0[0] = bram0[dut->BRAM0_raddr][0]; next_bram0[1] = bram0[dut->BRAM0_raddr][1]; next_bram0[2] = bram0[dut->BRAM0_raddr][2]; }
            if (dut->BRAM1_ren) { next_bram1[0] = bram1[dut->BRAM1_raddr][0]; next_bram1[1] = bram1[dut->BRAM1_raddr][1]; next_bram1[2] = bram1[dut->BRAM1_raddr][2]; }
            if (dut->BRAM2_ren) { next_bram2[0] = bram2[dut->BRAM2_raddr][0]; next_bram2[1] = bram2[dut->BRAM2_raddr][1]; next_bram2[2] = bram2[dut->BRAM2_raddr][2]; }
            if (dut->BRAM3_ren) { next_bram3[0] = bram3[dut->BRAM3_raddr][0]; next_bram3[1] = bram3[dut->BRAM3_raddr][1]; next_bram3[2] = bram3[dut->BRAM3_raddr][2]; }
            
            if (dut->BRAM4_en_a) next_bram4_a = bram4[dut->BRAM4_addr_a];
            if (dut->BRAM4_en_b) next_bram4_b = bram4[dut->BRAM4_addr_b];
            if (dut->BRAM5_en_a) next_bram5_a = bram5[dut->BRAM5_addr_a];
            if (dut->BRAM5_en_b) next_bram5_b = bram5[dut->BRAM5_addr_b];
            if (dut->BRAM6_en_a) next_bram6_a = bram6[dut->BRAM6_addr_a];
            if (dut->BRAM6_en_b) next_bram6_b = bram6[dut->BRAM6_addr_b];
            if (dut->BRAM13_en_a) next_bram13_a = bram13[dut->BRAM13_addr_a];
            if (dut->BRAM13_en_b) next_bram13_b = bram13[dut->BRAM13_addr_b];
            if (dut->BRAM14_en_a) next_bram14_a = bram14[dut->BRAM14_addr_a];
            if (dut->BRAM14_en_b) next_bram14_b = bram14[dut->BRAM14_addr_b];
            
            if (dut->BRAM7_en_b) next_bram7_b = bram7[dut->BRAM7_addr_b];
            if (dut->BRAM8_en_b) next_bram8_b = bram8[dut->BRAM8_addr_b];
            if (dut->BRAM9_en_b) next_bram9_b = bram9[dut->BRAM9_addr_b];
            if (dut->BRAM10_en_b) next_bram10_b = bram10[dut->BRAM10_addr_b];
            if (dut->BRAM11_en_b) next_bram11_b = bram11[dut->BRAM11_addr_b];
            if (dut->BRAM12_en_b) next_bram12_b = bram12[dut->BRAM12_addr_b];


            // ----------------------------------------------------
            // [B-2] 클럭 상승 에지 (로직 평가 및 결과 수집)
            // ----------------------------------------------------
            dut->clk = 1;
            dut->eval();

            // 버퍼에 담아둔 BRAM 읽기 값 인가
            dut->BRAM0_dout[0] = next_bram0[0]; dut->BRAM0_dout[1] = next_bram0[1]; dut->BRAM0_dout[2] = next_bram0[2];
            dut->BRAM1_dout[0] = next_bram1[0]; dut->BRAM1_dout[1] = next_bram1[1]; dut->BRAM1_dout[2] = next_bram1[2];
            dut->BRAM2_dout[0] = next_bram2[0]; dut->BRAM2_dout[1] = next_bram2[1]; dut->BRAM2_dout[2] = next_bram2[2];
            dut->BRAM3_dout[0] = next_bram3[0]; dut->BRAM3_dout[1] = next_bram3[1]; dut->BRAM3_dout[2] = next_bram3[2];
            
            dut->BRAM4_dout_a = next_bram4_a; dut->BRAM4_dout_b = next_bram4_b;
            dut->BRAM5_dout_a = next_bram5_a; dut->BRAM5_dout_b = next_bram5_b;
            dut->BRAM6_dout_a = next_bram6_a; dut->BRAM6_dout_b = next_bram6_b;
            dut->BRAM13_dout_a = next_bram13_a; dut->BRAM13_dout_b = next_bram13_b;
            dut->BRAM14_dout_a = next_bram14_a; dut->BRAM14_dout_b = next_bram14_b;
            
            dut->BRAM7_dout_b = next_bram7_b; dut->BRAM8_dout_b = next_bram8_b;
            dut->BRAM9_dout_b = next_bram9_b; dut->BRAM10_dout_b = next_bram10_b;
            dut->BRAM11_dout_b = next_bram11_b; dut->BRAM12_dout_b = next_bram12_b;

            // LUT Write (CPU가 레지스터를 통해 쓸 때)
            if (dut->LUT_we) {
                lut[dut->LUT_addr_w] = dut->LUT_data_in;
            }
            dut->LUT_data_out1 = lut[dut->LUT_addr_r1];
            dut->LUT_data_out2 = lut[dut->LUT_addr_r2];

            dut->eval(); // 최종 반영

            // --- 픽셀 수집 로직 ---
            if (dut->Final_pixel_valid) {
                final_pixels.push_back(dut->Final_pixel_RGB);
                // 1 프레임 (320x240) 완성 감지
                if (final_pixels.size() >= 320 * 240) {
                    frame_done = true;
                }
            }
            
            // 만약 PPU가 별도의 Font_Frame_End 신호를 보낸다면 
            // if (dut->Font_Frame_End) frame_done = true; 로 사용할 수도 있습니다.
        }

        // --- [C] 한 프레임 렌더링 (SDL2) ---
        if (frame_done && running) {
            for (size_t i = 0; i < 320 * 240; ++i) {
                uint32_t px = final_pixels[i];
                uint8_t r = static_cast<uint8_t>((px >> 12) & 0x3F) << 2;
                uint8_t g = static_cast<uint8_t>((px >> 6)  & 0x3F) << 2;
                uint8_t b = static_cast<uint8_t>(px & 0x3F) << 2;
                frame_buffer[i] = (0xFFu << 24) | (r << 16) | (g << 8) | b;
            }
            SDL_UpdateTexture(tex, NULL, frame_buffer, 320 * sizeof(uint32_t));
            SDL_RenderClear(ren);
            SDL_RenderCopy(ren, tex, NULL, NULL);
            SDL_RenderPresent(ren);
            
            final_pixels.clear(); // 다음 프레임을 위해 버퍼 비우기
            
            // 시뮬레이션 속도 조절 (너무 빠르면 CPU 부하 발생, 약 60fps)
            // Verilator가 느리다면 Delay를 안주는 것이 낫습니다.
            // SDL_Delay(1); 
        }
    }

    // ==========================================
    // 5. 종료 처리
    // ==========================================
    dut->final();
    // trace->close(); // 파형 사용 시
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();

    std::cout << "Simulation finished." << std::endl;
    return 0;
}