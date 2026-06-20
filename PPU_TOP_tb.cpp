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

// =======================================================================
// 2. 배경 레이어 생성 (400 * 320)
//    - 위쪽은 하늘색(16), 중간은 바다(17), 아래쪽은 잔디(18)로 구성된 배경
// =======================================================================
std::vector<uint8_t> generate_background_layer()
{
    const int width = 400;
    const int height = 320;
    std::vector<uint8_t> bg;
    bg.reserve(width * height);

    for (int y = 0; y < height; ++y)
    {
        for (int x = 0; x < width; ++x)
        {
            if (y < 5)
            {
                bg.push_back(6); 
            }
            else if (y < 10)
            {
                bg.push_back(7); 
            }
            else if (y < 15)
            {
                bg.push_back(8);
            }
            if (y < 140)
            {
                bg.push_back(16); // 0 ~ 139 라인은 하늘색
            }
            else if (y < 240)
            {
                bg.push_back(17); // 140 ~ 239 라인은 바다색
            }
            else
            {
                bg.push_back(18); // 240 ~ 319 라인은 잔디색
            }
        }
    }
    return bg;
}

// =======================================================================
// 3. 비주얼 노벨 캐릭터 레이어 생성 (160 * 240)
//    - 0번(투명) 배경 위에 갈색 머리(12)와 교복(13)을 입은 캐릭터 배치
// =======================================================================
std::vector<uint8_t> generate_character_layer()
{
    const int width = 160;
    const int height = 240;
    std::vector<uint8_t> ch;
    ch.reserve(width * height);

    // 미소녀/미소년 형태의 대략적인 실루엣을 수학적 좌표 조건으로 생성합니다.
    for (int y = 0; y < height; ++y)
    {
        for (int x = 0; x < width; ++x)
        {

            // 캐릭터를 화면 중앙(X: 50 ~ 110) 부근에 배치하기 위한 중심점과의 거리
            int dist_from_center = std::abs(x - 80);

            // 1. 머리카락 및 얼굴 영역 (상단)
            if (y >= 40 && y < 100)
            {
                if (dist_from_center < 25)
                {
                    // 얼굴 내부 (피부색)
                    if (y >= 60 && y < 90 && dist_from_center < 20)
                    {
                        // 눈 위치에 눈동자색(15) 찍기
                        if (y >= 70 && y < 75 && (x == 70 || x == 90))
                        {
                            ch.push_back(15);
                        }
                        else
                        {
                            ch.push_back(11); // 피부색
                        }
                    }
                    else
                    {
                        ch.push_back(12); // 머리카락색
                    }
                }
                else if (dist_from_center < 30 && y < 85)
                {
                    ch.push_back(12); // 머리카락 옆부분
                }
                else
                {
                    ch.push_back(0); // 외곽은 투명
                }
            }
            // 2. 목 영역
            else if (y >= 100 && y < 115)
            {
                if (dist_from_center < 10)
                {
                    ch.push_back(11); // 목 (피부색)
                }
                else
                {
                    ch.push_back(0); // 투명
                }
            }
            // 3. 몸통 및 교복 영역 (하단)
            else if (y >= 115 && y < 240)
            {
                // 아래로 갈수록 어깨가 벌어지는 삼각 실루엣
                int shoulder_width = 25 + (y - 115) * 0.35;
                if (dist_from_center < shoulder_width)
                {
                    // 가운뎃줄 깃 부분은 흰색 셔츠(9), 나머지는 네이비 교복(13)
                    if (y < 140 && dist_from_center < 6)
                    {
                        ch.push_back(9); // 셔츠 브이넥
                    }
                    else
                    {
                        ch.push_back(13); // 교복 자켓
                    }
                }
                else
                {
                    ch.push_back(0); // 투명
                }
            }
            // 4. 그 외 상단 허공
            else
            {
                ch.push_back(0); // 완벽한 투명
            }
        }
    }
    return ch;
}

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    std::unique_ptr<VPPU_TOP> dut = std::make_unique<VPPU_TOP>();
    auto trace = std::make_unique<VerilatedVcdC>();
    dut->trace(trace.get(), 1);
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

    auto pack_word = [](uint8_t b0, uint8_t b1, uint8_t b2, uint8_t b3)
    {
        return uint32_t(b0) | (uint32_t(b1) << 8) | (uint32_t(b2) << 16) | (uint32_t(b3) << 24);
    };

    // Append a run-length encoded segment: control byte MSB=1, lower7bits=count (1..127),
    // followed by single pixel byte to repeat 'count' times.
    auto append_rle = [&](std::vector<uint8_t> &out, uint8_t value, int pixels)
    {
        while (pixels > 0)
        {
            uint8_t count = pixels >= 127 ? 127 : uint8_t(pixels);
            out.push_back(0x80 | count);
            out.push_back(value);
            pixels -= count;
        }
    };

    auto write_stream = [&](uint32_t base_byte_addr, const std::vector<uint8_t> &bytes) { // vector<uint8_t> 배열에 있는 값들을 ddr3_memory에 옮기는 함수임.
        for (uint32_t i = 0; i < bytes.size(); i += 4)
        {
            uint32_t word = 0;
            for (uint32_t j = 0; j < 4 && i + j < bytes.size(); ++j)
            {
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
    auto load_layer = [&](uint32_t base_byte_addr, uint8_t pixel_value, int pixel_count)
    {
        std::vector<uint8_t> stream;
        if (pixel_count <= 0)
        {
            // empty layer: write terminator 0x00 (MSB=0, zero count) as valid end marker
            stream.push_back(0x00);
        }
        else if (pixel_value == 0)
        {
            // Transparent value: emit terminator only (no pixels)
            stream.push_back(0x00);
        }
        else
        {
            // For uniform-value layers produce one or more repeat segments
            append_rle(stream, pixel_value, pixel_count);
            // End with terminator 0x80 (MSB=1, zero payload) allowed by format
            stream.push_back(0x80);
        }
        write_stream(base_byte_addr, stream);
    };

    // count 개수만큼 unrepeat pixel들을 제어바이트와 함께 rle_layer에 push_back 해주는 함수.
    auto append_range = [&](int i, int count, const std::vector<uint8_t> &original_layer, std::vector<uint8_t> &rle_layer)
    {
        int base = i;
        while (count > 0)
        {
            uint8_t count_127 = (count >= 127) ? 127 : uint8_t(count);
            rle_layer.push_back(0x00 | count_127);        // 일단 제어 바이트 삽입.
            for (int j = base; j < base + count_127; j++) // original_layer[base] 부터 original_layer[base + count - 1] 까지 삽입.
            {
                rle_layer.push_back(original_layer[j]);
            }
            count = count - count_127;
            base = base + count_127;
        }
    };

    // vector<uint8_t> 배열을 RLE 압축하는 람다함수.
    auto rle_convert = [&](const std::vector<uint8_t> &layer) -> std::vector<uint8_t>
    {
        std::vector<uint8_t> rle_layer;
        if (layer.empty())
        {
            rle_layer.push_back(0x00);
            return rle_layer;
        }

        int n = layer.size();
        int i = 0;

        while (i < n)
        {
            // [수정] 매 루프마다 run_length를 1로 확실하게 초기화해야 합니다.
            int run_length = 1;
            while (i + run_length < n && layer[i] == layer[i + run_length])
            {
                run_length++;
            }

            // 2개 이상 연속되면 Repeat 처리
            if (run_length >= 2)
            {
                append_rle(rle_layer, layer[i], run_length);
                i += run_length;
            }
            // 연속되지 않으면 Non-repeat 구간 처리
            else
            {
                int unrepeat_len = 0;
                int start_base = i;

                while (i < n)
                {
                    if (i + 2 < n && layer[i] == layer[i + 1] && layer[i + 1] == layer[i + 2])
                    {
                        break;
                    }
                    unrepeat_len++;
                    i++;
                }
                append_range(start_base, unrepeat_len, layer, rle_layer);
            }
        }

        // 최종 터미네이터 부착
        rle_layer.push_back(0x00);
        return rle_layer;
    };

    std::vector<uint8_t> background1 = generate_background_layer();
    std::vector<uint8_t> character1 = generate_character_layer();

    constexpr uint32_t BACKGROUND1_ADDR = 0x00000;
    constexpr uint32_t BACKGROUND2_ADDR = 0x02000;
    constexpr uint32_t CHARACTER1_ADDR = 0x04000;
    constexpr uint32_t CHARACTER2_ADDR = 0x06000;
    constexpr uint32_t CHARACTER3_ADDR = 0x08000;
    constexpr uint32_t CHARACTER4_ADDR = 0x0A000;
    constexpr uint32_t SCRIPT_ADDR = 0x0C000;
    constexpr uint32_t STATUS_ADDR = 0x0E000;
    constexpr uint32_t UNIVERSAL1_ADDR = 0x10000;
    constexpr uint32_t UNIVERSAL2_ADDR = 0x12000;

    // RLE 변환 후 저장
    std::vector<uint8_t> bg1_rle = rle_convert(background1);
    //write_stream(BACKGROUND1_ADDR, bg1_rle);

    load_layer(BACKGROUND1_ADDR, 0, 0);
    load_layer(BACKGROUND2_ADDR, 0, 0);
    //write_stream(CHARACTER1_ADDR, rle_convert(character1));
    load_layer(CHARACTER1_ADDR, 0, 0);
    load_layer(CHARACTER2_ADDR, 0, 0);
    load_layer(CHARACTER3_ADDR, 0, 0);
    load_layer(CHARACTER4_ADDR, 0, 0);
    load_layer(SCRIPT_ADDR, 0, 0);
    load_layer(STATUS_ADDR, 0, 0);
    load_layer(UNIVERSAL1_ADDR, 0, 0);
    load_layer(UNIVERSAL2_ADDR, 0, 0);


    for (int i = 0; i < 240; i++) //UNIVERSAL 1 LAYER 사용. d0 = 80번 반복.
    {
        if(i < 20) 
        {
            ddr3_memory[(2*i) + UNIVERSAL1_ADDR] = 0x10d010d0; //하늘색 1줄.
            ddr3_memory[(2*i) + 1 + UNIVERSAL1_ADDR] = 0x10d010d0;

        }
        else if(i < 60)
        {
            ddr3_memory[(2*i) + UNIVERSAL1_ADDR] = 0x11d011d0; //파랑색 1줄.
            ddr3_memory[(2*i) + 1 + UNIVERSAL1_ADDR] = 0x11d011d0;
        }
        else if(i < 120)
        {
            ddr3_memory[(2*i) + UNIVERSAL1_ADDR] = 0x12d012d0; //초록색 1줄.
            ddr3_memory[(2*i) + 1 + UNIVERSAL1_ADDR] = 0x12d012d0;
        }
        else {
            ddr3_memory[(2*i) + UNIVERSAL1_ADDR] = 0x01d001d0; //빨간색 1줄.
            ddr3_memory[(2*i) + 1 + UNIVERSAL1_ADDR] = 0x01d001d0;
            if(i == 319) ddr3_memory[(2*i) + 2 + UNIVERSAL1_ADDR] = 0x00000000; //끝났다는것 표시
        }
    }


    for (int i = 0; i < 320; i++) //BACKGROUND 1 LAYER 사용. 400 * 320 임. e4 = 100번 반복..
    {
        if(i < 10) 
        {
            ddr3_memory[(2*i) + BACKGROUND1_ADDR] = 0x10e410e4; //하늘색 1줄.
            ddr3_memory[(2*i) + 1 + BACKGROUND1_ADDR] = 0x10e410e4;

        }
        else
        {
            ddr3_memory[(2*i) + BACKGROUND1_ADDR] = 0x13e413e4; //노란색 1줄
            ddr3_memory[(2*i) + 1 + BACKGROUND1_ADDR] = 0x13e413e4;
            if(i == 319) ddr3_memory[(2*i) + 2 + BACKGROUND1_ADDR] = 0x00000000; //끝났다는것 표시
        }
    }






    // Dump first few words of BACKGROUND1 to verify RLE packing / endianness
    /*std::cout << "\n=== BACKGROUND1 RLE DATA ===\n";
    std::cout << "RLE 바이트 개수: " << bg1_rle.size() << std::endl;
    std::cout << "첫 20 바이트: ";
    for (int i = 0; i < 20 && i < (int)bg1_rle.size(); ++i)
    {
        printf("%02X ", bg1_rle[i]);
    }
    std::cout << "\n\nDDR3[BACKGROUND1] 워드 (16진수):\n";
    for (int i = 0; i < 1000; ++i)
    {
        uint32_t w = ddr3_memory[(BACKGROUND1_ADDR / 4) + i];
        printf("ddr3_memory[%d] = 0x%08X", i, w);
        printf("  (bytes: %02X %02X %02X %02X)\n",
               (w & 0xFF), (w >> 8) & 0xFF, (w >> 16) & 0xFF, (w >> 24) & 0xFF);
    }
    std::cout << std::endl;*/

    lut[0] = 0x00000;  // 투명 픽셀 (Transparent)
    lut[1] = 0x3F000;  // Red
    lut[2] = 0x00FC0;  // Green
    lut[3] = 0x0003F;  // Blue
    lut[4] = 0x3FFC0;  // Yellow
    lut[5] = 0x000FF;  // Cyan
    lut[6] = 0x3F03F;  // Magenta
    lut[7] = 0x30600;  // Orange
    lut[8] = 0x15555;  // Gray
    lut[9] = 0x3FFFF;  // White
    lut[10] = 0x11111; // Dim Color

    // [추가] 비주얼 노벨 캐릭터 전용 색상 (피부, 머리, 옷)
    lut[11] = 0x3EDCE; // 피부색 (Soft Skin Peach)
    lut[12] = 0x1F105; // 머리카락색 (Warm Brown)
    lut[13] = 0x050CE; // 교복/옷 색상 (Navy Blue)
    lut[14] = 0x34145; // 음영/그림자 피부색 (Shadow Skin)
    lut[15] = 0x21084; // 눈동자색 (Dark Brown)

    // [추가] 배경 전용 색상 (하늘, 바다, 대지)
    lut[16] = 0x1CEFF; // 연한 하늘색 (Sky Blue)
    lut[17] = 0x06AFA; // 깊은 바다/물색 (Deep Blue)
    lut[18] = 0x0B840; // 나무/잔디색 (Soft Green)
    lut[19] = 0x37A20; // 모래/흙색 (Sand Yellow)
    lut[20] = 0x028A5; // 먼 산/배경 음영 (Muted Blue-Green)

    int emem_state = 0;
    uint32_t emem_burst_counter = 0;
    uint32_t emem_current_addr = 0;

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
    dut->Background1_a = 0;
    dut->Background1_z = 0;

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

    for (int idx = 0; idx < 4; ++idx)
    {
        dut->clk = 0;
        dut->eval();
        trace->dump(main_time++);
        dut->clk = 1;
        dut->eval();
        trace->dump(main_time++);
    }

    dut->clk = 0;
    dut->eval();
    trace->dump(main_time++);

    dut->clk = 1;
    dut->resetn = 1;
    dut->eval();
    trace->dump(main_time++);

    for (int idx = 0; idx < 2; ++idx)
    {
        dut->clk = 0;
        dut->eval();
        trace->dump(main_time++);
        dut->clk = 1;
        dut->eval();
        trace->dump(main_time++);
    }

    dut->clk = 0;
    dut->eval();
    trace->dump(main_time++);

    dut->Background_Layer1_Address = BACKGROUND1_ADDR;
    dut->Background_Layer2_Address = BACKGROUND2_ADDR;
    dut->Character_Layer1_Address = CHARACTER1_ADDR;
    dut->Character_Layer2_Address = CHARACTER2_ADDR;
    dut->Character_Layer3_Address = CHARACTER3_ADDR;
    dut->Character_Layer4_Address = CHARACTER4_ADDR;
    dut->Script_Layer_Address = SCRIPT_ADDR;
    dut->Status_Layer_Address = STATUS_ADDR;
    dut->Universal_Layer1_Address = UNIVERSAL1_ADDR;
    dut->Universal_Layer2_Address = UNIVERSAL2_ADDR;

    dut->CPU_LUT_Cache1_pixel = 1;
    dut->CPU_LUT_Cache2_pixel = 2;
    dut->CPU_LUT_Cache3_pixel = 3;
    dut->CPU_LUT_Cache4_pixel = 4;

    dut->Background1_SCX = 0;
    dut->Background1_SCY = 0;
    dut->Background1_a = 16;
    dut->Background1_z = 1;

    dut->Background2_SCX = 0;
    dut->Background2_SCY = 0;
    dut->Background2_a = 0;
    dut->Background2_z = 0; // z가 0이면 사용되지 않는거임.

    dut->Character1_WX = 0;
    dut->Character1_WY = 0;
    dut->Character1_a = 16;
    dut->Character1_z = 0;

    dut->Character2_WX = 0;
    dut->Character2_WY = 0;
    dut->Character2_a = 16;
    dut->Character2_z = 0;

    dut->Character3_WX = 0;
    dut->Character3_WY = 0;
    dut->Character3_a = 16;
    dut->Character3_z = 0;

    dut->Character4_WX = 0;
    dut->Character4_WY = 0;
    dut->Character4_a = 16;
    dut->Character4_z = 0;

    dut->Script_WX = 0;
    dut->Script_WY = 0;
    dut->Script_a = 16;
    dut->Script_z = 0;

    dut->Status_WX = 0;
    dut->Status_WY = 0;
    dut->Status_a = 16;
    dut->Status_z = 0;

    dut->Universal1_WX = 160;
    dut->Universal1_WY = 120;
    dut->Universal1_a = 16;
    dut->Universal1_z = 2;

    dut->Universal2_WX = 0;
    dut->Universal2_WY = 0;
    dut->Universal2_a = 16;
    dut->Universal2_z = 0;

    dut->clk = 1;
    dut->eval();
    trace->dump(main_time++);

    dut->clk = 0;
    dut->PPU_start = 1;
    dut->eval();
    trace->dump(main_time++);

    dut->clk = 1;
    dut->eval();
    trace->dump(main_time++);

    dut->clk = 0;
    dut->PPU_start = 0; //PPU_START는 한클럭만 신호를 주고 바로 내림.
    dut->eval();
    trace->dump(main_time++);

    while (!Verilated::gotFinish() && main_time < 200000)
    {

        // ----------------------------------------------------
        // [1단계] 클럭 상승 에지 (로직 평가)
        // ----------------------------------------------------
        dut->clk = 1;
        dut->eval();
        // (removed real-time pixel streaming from copied project)

        dut->LUT_data_out1 = lut[dut->LUT_addr_r1]; // lut 배열의 하위 18비트만 dut->LUT_data_out1에 들어가게 됨.
        dut->LUT_data_out2 = lut[dut->LUT_addr_r2];
        dut->eval();
        trace->dump(main_time++);

        if (dut->LUT_we)
        {
            lut[dut->LUT_addr_w] = dut->LUT_data_in;
        } // 지금은 LUT에 쓰기는 사용되지 않음.

        // ----------------------------------------------------
        // [2단계] 클럭 하강 에지 (입력 신호 주입)
        // ----------------------------------------------------
        dut->clk = 0;
        // ========================================================
        // 💡 3. 외부 메모리(DDR3) 상태 머신
        // ========================================================
        if (emem_state == 0)
        {
            if (dut->EMEM_valid)
            {
                dut->EMEM_ready = 1;
                emem_current_addr = dut->EMEM_addr >> 2;
                dut->EMEM_rdata = ddr3_memory[emem_current_addr];
                /*
                if(ddr3_memory[emem_current_addr] == 0x10FF10FF)
                {
                    printf("EMEM READ: addr=0x%08X rdata=0x%08X (Transparent Pixel) main_time: %lu\n", emem_current_addr, dut->EMEM_rdata, main_time);
                }
                if(ddr3_memory[emem_current_addr] == 0x11FF11FF)
                {
                    printf("EMEM READ: addr=0x%08X rdata=0x%08X (Transparent Pixel) main_time: %lu\n", emem_current_addr, dut->EMEM_rdata, main_time);
                }*/
               if(dut->EMEM_addr == 0x00000 || dut->EMEM_addr == 0x02000 || dut->EMEM_addr == 0x04000 || dut->EMEM_addr == 0x06000 || dut->EMEM_addr == 0x08000 || dut->EMEM_addr == 0x0A000 || dut->EMEM_addr == 0x0C000 || dut->EMEM_addr == 0x0E000 || dut->EMEM_addr == 0x10000 || dut->EMEM_addr == 0x12000)
                {
                    printf("EMEM READ: addr=0x%08X rdata=0x%08X (Background1 RLE Data) main_time: %lu\n", dut->EMEM_addr, dut->EMEM_rdata, main_time);
                }
                
                emem_burst_counter = dut->EMEM_burst_en ? dut->EMEM_burst_len : 0;
                // std::cout << "EMEM_REQ addr=0x" << std::hex << dut->EMEM_addr << std::dec
                //            << " idx=" << emem_current_addr << " rdata=0x" << std::hex << dut->EMEM_rdata << std::dec << std::endl;
                if (dut->EMEM_burst_en && emem_burst_counter > 0)
                {
                    emem_state = 1;
                }
            }
            else
            {
                dut->EMEM_ready = 0;
            }
        }
        else if (emem_state == 1)
        {
            emem_current_addr++;
            if (emem_burst_counter > 0)
            {
                emem_burst_counter--;
            }
            dut->EMEM_ready = 1;
            dut->EMEM_rdata = ddr3_memory[emem_current_addr];
            /*
            if(ddr3_memory[emem_current_addr] == 0x10FF10FF)
                {
                    printf("EMEM READ: addr=0x%08X rdata=0x%08X (Transparent Pixel) main_time: %lu\n", emem_current_addr, dut->EMEM_rdata, main_time);
                }
            if(ddr3_memory[emem_current_addr] == 0x11FF11FF)
                {
                    printf("EMEM READ: addr=0x%08X rdata=0x%08X (Transparent Pixel) main_time: %lu\n", emem_current_addr, dut->EMEM_rdata, main_time);
                }
            */
            // std::cout << "EMEM_BURST idx=" << emem_current_addr << " rdata=0x" << std::hex << dut->EMEM_rdata << std::dec << std::endl;
            if (emem_burst_counter == 0)
            {
                emem_state = 0;
            }
        }
        // ========================================================
        dut->eval();

        // --- BRAM 쓰기 동작 ---
        if (dut->BRAM7_en_a && dut->BRAM7_we_a)
            bram7[dut->BRAM7_addr_a] = dut->BRAM7_din_a;
        if (dut->BRAM8_en_a && dut->BRAM8_we_a)
            bram8[dut->BRAM8_addr_a] = dut->BRAM8_din_a;
        if (dut->BRAM9_en_a && dut->BRAM9_we_a)
            bram9[dut->BRAM9_addr_a] = dut->BRAM9_din_a;
        if (dut->BRAM10_en_a && dut->BRAM10_we_a)
            bram10[dut->BRAM10_addr_a] = dut->BRAM10_din_a;
        if (dut->BRAM11_en_a && dut->BRAM11_we_a)
            bram11[dut->BRAM11_addr_a] = dut->BRAM11_din_a;
        if (dut->BRAM12_en_a && dut->BRAM12_we_a)
            bram12[dut->BRAM12_addr_a] = dut->BRAM12_din_a;

        // --- BRAM 읽기 동작 (1클럭 셋업) ---
        if (dut->BRAM7_en_b)
            dut->BRAM7_dout_b = bram7[dut->BRAM7_addr_b];
        if (dut->BRAM8_en_b)
            dut->BRAM8_dout_b = bram8[dut->BRAM8_addr_b];
        if (dut->BRAM9_en_b)
            dut->BRAM9_dout_b = bram9[dut->BRAM9_addr_b];
        if (dut->BRAM10_en_b)
            dut->BRAM10_dout_b = bram10[dut->BRAM10_addr_b];
        if (dut->BRAM11_en_b)
            dut->BRAM11_dout_b = bram11[dut->BRAM11_addr_b];
        if (dut->BRAM12_en_b)
            dut->BRAM12_dout_b = bram12[dut->BRAM12_addr_b];

        dut->eval();
        trace->dump(main_time++); // 반 클럭 진행 완료 기록

        if (dut->Final_pixel_valid)
        {
            final_pixels.push_back(dut->Final_pixel_RGB);
            /*if (final_pixels.size() <= 32)
            {
                std::cout << "DEBUG: pix[" << final_pixels.size() - 1 << "]=0x" << std::hex << dut->Final_pixel_RGB
                          << std::dec << std::endl;
            }*/
        }

        /*if (main_time < 100)
        {
            std::cout << "time=" << main_time
                      << " final_count=" << final_pixels.size()
                      << " EMEM_valid=" << (int)(dut->EMEM_valid)
                      << " EMEM_ready=" << (int)(dut->EMEM_ready)
                      << " Final_valid=" << (int)(dut->Final_pixel_valid)
                      << " Final_RGB=0x" << std::hex << (uint32_t)(dut->Final_pixel_RGB) << std::dec
                      << std::endl;
        }*/

        if (final_pixels.size() >= 320 * 240)
        {
            std::cout << "Captured full frame: " << final_pixels.size() << " pixels" << "main_time : " << main_time << std::endl;
            break;
        }

        /*if (main_time > 10000)
        {
            dut->final();
            trace->close();
            std::cerr << "main_time is 1000" << std::endl;
            return 1;
        }*/
    }

    std::cout << "Captured " << final_pixels.size() << " final pixels." << std::endl; // 총 76800개의 픽셀을 캡쳐해야 함. 이것보다 작으면 문제 있는거임.

    // --- SDL2: display captured frame at 2x scale (640x480) ---
    if (final_pixels.size() >= 320 * 240)
    {
        if (SDL_Init(SDL_INIT_VIDEO) == 0)
        {
            SDL_Window *win = SDL_CreateWindow("PPU Final Frame",
                                               SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                               320 * 2, 240 * 2, SDL_WINDOW_SHOWN);
            if (win)
            {
                SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
                if (ren)
                {
                    SDL_Texture *tex = SDL_CreateTexture(ren, SDL_PIXELFORMAT_ARGB8888,
                                                         SDL_TEXTUREACCESS_STATIC, 320, 240);
                    if (tex)
                    {
                        std::vector<uint32_t> pixels32(320 * 240);
                        for (size_t i = 0; i < pixels32.size(); ++i)
                        {
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
                        while (running)
                        {
                            while (SDL_PollEvent(&e))
                            {
                                if (e.type == SDL_QUIT)
                                    running = false;
                                if (e.type == SDL_KEYDOWN)
                                    running = false;
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
        }
        else
        {
            std::cerr << "SDL_Init failed; skipping display." << std::endl;
        }
    }

    dut->final();
    trace->close();

    std::cout << "Simulation finished. waveform_ppu_top.vcd generated." << std::endl;
    return 0;
}
