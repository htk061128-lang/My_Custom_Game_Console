module Font_Processer( //PPU가 1차 완성한 Pixel line을 받아와서 폰트를 합성해서 최종 Pixel line을 산출해내는 모듈
    input clk,
    input resetn, //negedge reset

    input PPU_start,

    input [17:0] Font_RGB;
    input [7:0] Font_a; //0 ~ 16까지의 값을 가질 수 있음. 이외의 값은 절대 가져서는 안됌.

    input PPU_pixel_valid,
    input [17:0] PPU_pixel_RGB, //PPU가 1차 완성한 Pixel. 6bit * 3 = 18bit

    input [7:0] Line0_visible_number, //0 ~ 40 까지의 값을 가져야 함.
    input [7:0] Line1_visible_number, 
    input [7:0] Line2_visible_number,
    input [7:0] Line3_visible_number,
    input [7:0] Line4_visible_number,
    input [7:0] Line5_visible_number,
    input [7:0] Line6_visible_number,
    input [7:0] Line7_visible_number,
    input [7:0] Line8_visible_number,
    input [7:0] Line9_visible_number,
    input [7:0] Line10_visible_number,
    input [7:0] Line11_visible_number,
    input [7:0] Line12_visible_number,
    input [7:0] Line13_visible_number,
    input [7:0] Line14_visible_number,

    //BRAM들은 미리 초기화 되어 있어야 함. 
    // BRAM4 (폰트 저장용) 인터페이스 - True Dual Port //초성 1~6벌 저장.
    // BRAM4 Port A (32-bit Interface)
    output reg        BRAM4_en_a,    // Port A Enable
    output reg [3:0]  BRAM4_wstrb_a,    // Port A Write Enable (Byte-wide strobe: 36비트 = 8비트 x 4)
    output reg [9:0]  BRAM4_addr_a,  // Port A Address (10-bit for 1024 depth)
    output reg [31:0] BRAM4_din_a,   // Port A Data Input
    input      [31:0] BRAM4_dout_a,  // Port A Data Output

    // BRAM4 Port B (32-bit Interface) - 이 포트는 CPU에 할당. CPU가 폰트를 수정할 수 있게 하려고 함.
    output reg        BRAM4_en_b,    // Port B Enable
    output reg [3:0]  BRAM4_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM4_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [31:0] BRAM4_din_b,   // Port B Data Input
    input      [31:0] BRAM4_dout_b,   // Port B Data Output


    // BRAM5 (폰트 저장용) 인터페이스 - True Dual Port //초성 7~8벌, ASCII 저장. 
    // BRAM5 Port A (32-bit Interface)
    output reg        BRAM5_en_a,    // Port A Enable
    output reg [3:0]  BRAM5_wstrb_a,    // Port A Write Enable (Byte-wide strobe: 32비트 = 8비트 x 4)
    output reg [9:0]  BRAM5_addr_a,  // Port A Address (10-bit for 1024 depth)
    output reg [31:0] BRAM5_din_a,   // Port A Data Input
    input      [31:0] BRAM5_dout_a,  // Port A Data Output
    // BRAM5 Port B (32-bit Interface) - 이 포트는 CPU에 할당. CPU가 폰트를 수정할 수 있게 하려고 함.
    output reg        BRAM5_en_b,    // Port B Enable
    output reg [3:0]  BRAM5_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM5_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [31:0] BRAM5_din_b,   // Port B Data Input
    input      [31:0] BRAM5_dout_b,   // Port B Data Output


    // BRAM6 (폰트 저장용) 인터페이스 - True Dual Port //중성 1~4벌 저장.
    // BRAM6 Port A (32-bit Interface)
    output reg        BRAM6_en_a,    // Port A Enable
    output reg [3:0]  BRAM6_wstrb_a,    // Port A Write Enable (Byte-wide strobe: 32비트 = 8비트 x 4)
    output reg [9:0]  BRAM6_addr_a,  // Port A Address (10-bit for 1024 depth)
    output reg [31:0] BRAM6_din_a,   // Port A Data Input
    input      [31:0] BRAM6_dout_a,  // Port A Data Output
    // BRAM6 Port B (32-bit Interface) - 이 포트는 CPU에 할당. CPU가 폰트를 수정할 수 있게 하려고 함.
    output reg        BRAM6_en_b,    // Port B Enable
    output reg [3:0]  BRAM6_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM6_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [31:0] BRAM6_din_b,   // Port B Data Input
    input      [31:0] BRAM6_dout_b,   // Port B Data Output

    //BRAM13 (폰트 저장용) - True Dual Port //종성 1~4벌 저장.
    // BRAM13 Port A (32-bit Interface)
    output reg        BRAM13_en_a,    // Port A Enable
    output reg [3:0]  BRAM13_wstrb_a,    // Port A Write Enable (Byte-wide strobe: 32비트 = 8비트 x 4)
    output reg [9:0]  BRAM13_addr_a,  // Port A Address (10-bit for 1024 depth)
    output reg [31:0] BRAM13_din_a,   // Port A Data Input
    input      [31:0] BRAM13_dout_a,  // Port A Data Output
    // BRAM13 Port B (32-bit Interface) - 이 포트는 CPU에 할당. CPU가 폰트를 수정할 수 있게 하려고 함.
    output reg        BRAM13_en_b,    // Port B Enable
    output reg [3:0]  BRAM13_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM13_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [31:0] BRAM13_din_b,   // Port B Data Input
    input      [31:0] BRAM13_dout_b,   // Port B Data Output

    //BRAM14 (80 * 15 = 1200바이트) 폰트 맵. 320 * 240 화면에서 한줄에 최대 40글자가 들어가고 총 15줄이 존재할 수 있음. 포트 하나는 반드시 CPU에 할당해야 함.
    // BRAM14 Port A (32-bit Interface)
    output reg        BRAM14_en_a,    // Port A Enable
    output reg [3:0]  BRAM14_wstrb_a,    // Port A Write Enable (Byte-wide strobe: 32비트 = 8비트 x 4)
    output reg [9:0]  BRAM14_addr_a,  // Port A Address (10-bit for 1024 depth)
    output reg [31:0] BRAM14_din_a,   // Port A Data Input
    input      [31:0] BRAM14_dout_a,  // Port A Data Output
    // BRAM14 Port B (32-bit Interface) - 이 포트는 CPU에 할당. CPU가 직접 폰트 맵을 수정해야 함. 
    output reg        BRAM14_en_b,    // Port B Enable
    output reg [3:0]  BRAM14_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM14_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [31:0] BRAM14_din_b,   // Port B Data Input
    input      [31:0] BRAM14_dout_b,   // Port B Data Output
);
/*
UTF-16을 사용할 예정이고 한글, 영어, 숫자, 특수문자 다 16비트임.
범위는 ASCII(영어, 숫자, 기호): 16'h0020 ~ 16'h007F, 한글: 16'hAC00 ~ 16'hD7A3. 커스텀 8 * 16 타일: (총 172개) 16'hE000 ~ 16'hE0AB. 이외의 영역은 사용되지 않음!
16'h0000은 그 위치에 폰트가 없는 것을 의미함!! 그냥 비워두면 8*16 픽셀만큼 공백이라고 생각하면 됨. ASCII 16'h0020(공백)이라고 자동으로 가정함. 

base_index = unicode_in - 16'hAC00; 
초성  = base_index / (21 * 28); // 19자
중성 = (base_index / 28) % 21; // 21자
종성 = base_index % 28;        // 28자

초성 19자 인덱스:ㄱ(0)ㄲ(1)ㄴ(2)ㄷ(3)ㄸ(4)ㄹ(5)ㅁ(6)ㅂ(7)ㅃ(8)ㅅ(9)ㅆ(10)ㅇ(11)ㅈ(12)ㅉ(13)ㅊ(14)ㅋ(15)ㅌ(16)ㅍ(17)ㅎ(18)
중성 21자 인덱스:ㅏ(0)ㅐ(1)ㅑ(2)ㅒ(3)ㅓ(4)ㅔ(5)ㅕ(6)ㅖ(7)ㅗ(8)ㅘ(9)ㅙ(10)ㅚ(11)ㅛ(12)ㅜ(13)ㅝ(14)ㅞ(15)ㅟ(16)ㅠ(17)ㅡ(18)ㅢ(19)ㅣ(20)
종성 28자 인덱스: 받침없음(0)ㄱ(1)ㄲ(2)ㄳ(3)ㄴ(4)ㄵ(5)ㄶ(6)ㄷ(7)ㄹ(8)ㄺ(9)ㄻ(10)ㄼ(11)ㄽ(12)ㄾ(13)ㄿ(14)ㅀ(15)ㅁ(16)ㅂ(17)ㅃ(18)ㅅ(19)ㅆ(20)ㅇ(21)ㅈ(22)ㅊ(23)ㅋ(24)ㅌ(25)ㅍ(26)ㅎ(27)

초성 - 총 19 * 8 = 152개의 폰트가 존재함. (한글)
    초성 1벌 : 받침없는 'ㅏㅐㅑㅒㅓㅔㅕㅖㅣ' 와 결합 (중성 0, 1, 2, 3, 4, 5, 6, 7, 20)
    초성 2벌 : 받침없는 'ㅗㅛㅡ' (중성 8, 12, 18)
    초성 3벌 : 받침없는 'ㅜㅠ' (중성 13, 17)
    초성 4벌 : 받침없는 'ㅘㅙㅚㅢ' (중성 9, 10, 11, 19)
    초성 5벌 : 받침없는 'ㅝㅞㅟ' (중성 14, 15, 16)
    초성 6벌 : 받침있는 'ㅏㅐㅑㅒㅓㅔㅕㅖㅣ' 와 결합 (중성 0, 1, 2, 3, 4, 5, 6, 7, 20)
    초성 7벌 : 받침있는 'ㅗㅛㅜㅠㅡ' (중성 8, 12, 13, 17, 18)
    초성 8벌 : 받침있는 'ㅘㅙㅚㅢㅝㅞㅟ' (중성 9, 10, 11, 19, 14, 15, 16)

중성 - 총 21 * 4 = 84개의 폰트가 존재함. (한글)
    중성 1벌 : 받침없는 'ㄱㅋ' 와 결합
    중성 2벌 : 받침없는 'ㄱㅋ' 이외의 자음
    중성 3벌 : 받침있는 'ㄱㅋ' 와 결합
    중성 4벌 : 받침있는 'ㄱㅋ' 이외의 자음

종성 총 28 * 4 = 112개의 폰트가 존재함. (한글)
    종성 1벌 : 중성 'ㅏㅑㅘ' 와 결합 (중성 0, 2, 9)
    종성 2벌 : 중성 'ㅓㅕㅚㅝㅟㅢㅣ(중성 4, 6, 11, 14, 16, 19, 20)
    종성 3벌 : 중성 'ㅐㅒㅔㅖㅙㅞ'(중성 1, 3, 5, 7, 10, 15)
    종성 4벌 : 중성 'ㅗㅛㅜㅠㅡ'(중성 8, 12, 13, 17, 18)

총 344개의 16*16 폰트를 저장해야 함. 거기에 ASCII의 제어문자와 확장 아스키 코드를 제외한 16'h0020 ~ 16'h007E까지의 95개의 폰트와 한글 344개의 폰트를 합쳐서 총 439개의 폰트를 저장해야 함.
    
16 * 16 픽셀은 BRAM에 이런식으로 저장되어 있음.
address 0: {line1[15:0], line0[15:0]}
address 1: {line3[15:0], line2[15:0]}
address 2: {line5[15:0], line4[15:0]}
address 3: {line7[15:0], line6[15:0]}
address 4: {line9[15:0], line8[15:0]}
address 5: {line11[15:0], line10[15:0]}
address 6: {line13[15:0], line12[15:0]}
address 7: {line15[15:0], line14[15:0]}

line0[15:0] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1}; (픽셀이 o,o,o,o,o,o,o,o,o,x,x,x,x,o,o,o 일때, o = 1, x = 0)

8 * 16 ASCII 코드도 비슷함.
address 0: {line3[7:0], line2[7:0], line1[7:0], line0[7:0]}
address 1: {line7[7:0], line6[7:0], line5[7:0], line4[7:0]}
address 2: {line11[7:0], line10[7:0], line9[7:0], line8[7:0]}
address 3: {line15[7:0], line14[7:0], line13[7:0], line12[7:0]}

line0[7:0] = {1, 1, 1, 1, 1, 1, 0, 0}; (픽셀이 o,o,o,o,o,o,x,x 일때, o = 1, x = 0)

<BRAM 4 주소정리>
초성 1벌 base: 0 (십진수)
초성 2벌 base: 152
초성 3벌 base: 304
초성 4벌 base: 456
초성 5벌 base: 608
초성 6벌 base: 760
BRAM4 초성 주소 = (벌에 해당하는 base) + (초성 인덱스 * 8) + (offset(0 ~ 15) / 2), offset이 홀수이면 r_data[31:16], 짝수이면 r_data[15:0]

<BRAM 5 주소정리>
초성 7벌 base: 0
초성 8벌 base: 152
ASCII base: 304
커스텀 타일 base: 688(총 336개의 구간. 총 84개의 8*16 타일 저장. 16'hE000 ~ 16'hE053 범위)
BRAM5 ASCII 주소 = (ASCII base) + (ASCII index * 4) + (offset(0 ~ 15) / 4)

<BRAM 6 주소정리>
중성 1벌 base: 0
중성 2벌 base: 168
중성 3벌 base: 336
중성 4벌 base: 504
커스텀 타일 base: 672(총 352개의 구간. 총 88개의 8*16 타일 저장. 16'hE054 ~ 16'hE0AB 범위)

<BRAM 13 주소정리>
종성 1벌 base: 0
종성 2벌 base: 224
종성 3벌 base: 448
종성 4벌 base: 672

<BRAM 14 주소정리> -폰트맵, 각 라인당 40개의 UTF-16 코드가 순서대로 배열됨.
Line0 base: 0
Line1 base: 20
Line2 base: 40
Line3 base: 60 
Line4 base: 80
Line5 base: 100
Line6 base: 120
Line7 base: 140
Line8 base: 160
Line9 base: 180
Line10 base: 200
Line11 base: 220
Line12 base: 240
Line13 base: 260
Line14 base: 280

address 0: {UTF-16_1[15:0], UTF-16_0[15:0]}
address 1: {UTF-16_3[15:0], UTF-16_2[15:0]}
....

*/
reg [15:0] fontmap_skid_data; //skid buffer. 파이프라인이 불규칙적으로 정지하므로 BRAM의 출력을 일시 저장하고 다시 전진할때 데이터를 보내줌.
reg fontmap_skid_valid;

reg [15:0] korea_bitmap_skid_data;
reg korea_bitmap_skid_valid;

reg [7:0] ascii_bitmap_skid_data;
reg ascii_bitmap_skid_valid;

reg [7:0] custom_tile_bitmap_skid_data;
reg custom_tile_bitmap_skid_valid;

reg [3:0] pixel_state; 
reg [3:0] pixel_state_next;
reg [3:0] font_state; //pipe1에 값을 넣어주고, pipeline_move를 제어하는 FSM
reg [3:0] font_state_next; 
parameter IDLE = 0, START = 1, BUBBLE_1 = 2, BUBBLE_2 = 3, BUBBLE_3 = 4, FIRST_CASE_1 = 5, FIRST_CASE_2 = 6, SECOND_CASE = 7, THIRD_CASE = 8;

reg [8:0] pixel_counter_x; //FIFO에서 픽셀을 꺼낼 때마다 증가시킴.
reg [8:0] pixel_counter_y; //한 줄인 320 픽셀을 다 꺼내면 1씩 증가시킴.

reg [5:0] counter_0_39; //0에서 39까지 증가하는 카운터. pipeline_move가 1일때마다 혹은 counter_0_39_reset이 1일때 1씩 증가함. 38 -> 39 -> 0 -> 1.... 혹은 18 -> 19(reset 신호) -> 0 -> 1
reg [3:0] counter_0_15; //0에서 15까지 증가하는 카운터. counter_0_39가 0으로 갈 때 1씩 증가함. 14 -> 15 -> 0 -> 1.... 
reg [5:0] counter_0_14; //0에서 14까지 증가하는 카운터. counter_0_15가 15 -> 0로 갈때 1씩 증가함.
reg [5:0] counter_font_x; //pipe3 값 보고 pipeline_move가 1일때 한글폰트면 2증가, ASCII나 커스텀이면 1증가. 

reg counter_0_39_reset; //한글 폰트 20개를 읽었다면 40개 다 읽지말고 바로 다음줄로 내려가야 함. 이때 이 신호를 사용.

reg counter_font_x_reset;
reg counter_font_x_reset_reg; //1클럭 지연용. 
reg counter_font_x_reset_reg_reg; //이것까지 해서 총 2클럭 지연후 counter_font_x가 초기화 됨. 

reg [17:0] RGB_1_reg; //input으로 들어오는 PPU_pixel_RGB를 파이프라인처럼 오른쪽으로 쉬프트 하며 저장하는 레지스터들.
reg RGB_1_reg_valid;
reg [17:0] RGB_2_reg; 
reg RGB_2_reg_valid; 
reg [17:0] RGB_3_reg; 
reg RGB_3_reg_valid;
reg [17:0] RGB_4_reg; 
reg RGB_4_reg_valid;
reg [17:0] RGB_5_reg; 
reg RGB_5_reg_valid;
reg [17:0] RGB_6_reg; 
reg RGB_6_reg_valid;
reg [17:0] RGB_7_reg;
reg RGB_7_reg_valid;
reg [17:0] RGB_8_reg;
reg RGB_8_reg_valid;

reg [17:0] mixed_RGB_1;
reg mixed_RGB_1_valid;
reg [17:0] mixed_RGB_2;
reg mixed_RGB_2_valid;
reg [17:0] mixed_RGB_3;
reg mixed_RGB_3_valid;
reg [17:0] mixed_RGB_4;
reg mixed_RGB_4_valid;
reg [17:0] mixed_RGB_5;
reg mixed_RGB_5_valid;
reg [17:0] mixed_RGB_6;
reg mixed_RGB_6_valid;
reg [17:0] mixed_RGB_7;
reg mixed_RGB_7_valid;
reg [17:0] mixed_RGB_8;
reg mixed_RGB_8_valid;

reg RGB_reg_shift; //이 신호가 1이면 클럭에지때 RGB_x_reg 들이 오른쪽으로 값이 옮겨짐.
reg RGB_reg_all_full;

reg font_mix_end; //이 신호를 pixel_state가 font_state에게 주면 클럭에지때 pipe6 레지스터를 다음값으로 설정하는것을 시작함.(파이프라인 전진) 

reg pipeline_move; //이 신호로 파이프라인을 제어함. 

reg pipe1_valid_next; //font_state의 출력들. pipeline_move가 1이면 클럭에지때 이 값들이 대입됨.
reg [3:0] pipe1_counter_16_next;
reg [5:0] pipe1_font_x_next;
reg [5:0] pipe1_font_y_next;

wire bram_font_read_ena = pipe4_valid && pipeline_move; //이 신호가 1이면 즉시 해당하는 BRAM 인터페이스에 읽기 제어신호, 주소를 보냄.
reg bram_font_read_ena_reg; //1 클럭전 bram_font_read_ena 신호를 나타내는 레지스터.
wire bram_map_read_ena = pipe1_valid && pipeline_move; //이 신호가 1이면 즉시 pipe1_font_x, pipe1_font_y값을 토대로 BARAM주소 계산해서 제어신호를 보냄.
reg bram_map_read_ena_reg; ////1 클럭전 bram_map_read_ena 신호를 나타내는 레지스터

reg pipe1_valid; //버블을 삽입할때는 pipe1_valid에 0을 저장시키면 됨. pipe3_is_korea에 저장하기 직전의 값에 의해서 +8, +16 씩 카운터를 증가시키고 마지막에 버블 삽입해서 더 읽을지 다음줄로 갈지 결정함.
reg [3:0] pipe1_counter_16; //0~15의 값을 가지고 16*16, 8*16 비트맵에서 몇번째줄을 읽어야 하는지 알려줌. 
reg [5:0] pipe1_font_x; //0~39의 값을 가짐. 기본적으로 1씩 증가시키고, 줄을 바꿔야 한다 판단되면 0으로 초기화시키고 pipe1_counter_16을 1 증가시킴. 이후 pipe1_counter_16이 15이면 y를 1 증가시킴.
reg [5:0] pipe1_font_y; //0~14의 값을 가짐.

reg pipe2_valid; //클럭에지때 BRAM에서 값이 나오면서 pipe2_valid에 값이 저장됨. 이때 
reg [3:0] pipe2_mask; //8비트 단위로 어디 위치의 값을 pipe3에 저장해야 할지 지정함. 4'b1100(상위 16비트 저장), 4'b0011(하위 16비트 저장) 둘 중 하나여야 함. 
reg [5:0] pipe2_font_x;
reg [5:0] pipe2_font_y;
reg [3:0] pipe2_counter_16;

reg pipe3_valid;
reg [15:0] pipe3_UTF16; //읽은 32비트 중 16비트만 저장함. 이 값이 0을 포함한 정의되지 않은 값이라면 공백이라고 가정.
reg [5:0] pipe3_font_x;
reg [5:0] pipe3_font_y;
reg [3:0] pipe3_counter_16;

reg pipe4_valid;
reg [15:0] pipe4_UTF16;
reg pipe4_is_korea; //3개의 is 신호들중에 반드시 한개만 1이 되어야 함!!!!
reg pipe4_is_ascii; //UTF16값이 정의되지 않은 값이면 ASCII 16'h0020(공백) 이라고 가정하고 이 값이 1로 설정할 예정.
reg pipe4_is_custom;
reg [4:0] pipe4_jung_sung_index; //중성 index. mid_quot_28 - (first_index * 21)
reg [4:0] pipe4_chong_sung_index; //종성 index. base - (mid_quot_28 * 28)
reg [4:0] pipe4_cho_sung_index; //초성 index. mid_quot를 21로 나눈 몫.
reg [5:0] pipe4_font_x;
reg [5:0] pipe4_font_y;
reg [3:0] pipe4_counter_16;

reg pipe5_valid;
reg [3:0] pipe5_mask; //8비트 단위로 어디 위치의 값을 pipe6에 저장해야 할지 지정함. 한글폰트라면 4'b1100(상위 16비트 저장), 4'b0011(하위 16비트 저장)둘중 하나여야 함.
reg pipe5_cho_sung_what_bram; //0이면 BRAM4, 1이면 BRAM5 
reg pipe5_custom_what_bram; //0이면 BRAM5, 1이면 BRAM6
reg pipe5_is_korea;
reg pipe5_is_ascii;
reg pipe5_is_custom;
reg [5:0] pipe5_font_x;
reg [5:0] pipe5_font_y;
reg [3:0] pipe5_counter_16;

reg pipe6_valid; //이 값이 0이면 절대 bitmap을 합성해서는 안됨. 파이프라인을 전진시켜서 valid가 나올때까지 전진시켜야 함. 버블이 들어있을 수 있음.
reg pipe6_is_korea; //이 값이 1이면 pipe6_korea_font_bitmap이 유효함.
reg pipe6_is_ascii; //이 값이 1이면 pipe6_ascii_font_bitmap가 유효함. 
reg pipe6_is_custom; //이 값이 1이면 pipe6_custom_tile_bitmap이 유효함.
reg [15:0] pipe6_korea_font_bitmap;
reg [7:0] pipe6_ascii_font_bitmap;
reg [7:0] pipe6_custom_tile_bitmap;
reg [5:0] pipe6_font_x; //이 값을 이용해서 LineX_visible_number와 대조해서 합성할지 말지 판단함.
reg [5:0] pipe6_font_y; //이 값을 이용해서 Line1_visible_number ~ Line15_visible_number 중 하나를 선택함.
reg [3:0] pipe6_counter_16; //이 값을 이용해서 x, y에 해당하는 폰트의 몇번째 줄 비트맵인지(0-15) 판단함.

reg [3:0] cho_sung_set; //초성 벌 수. 조합논리로 계산.
reg [3:0] jung_sung_set; //중성 벌 수
reg [3:0] chong_sung_set; //종성 벌 수. 

reg [9:0] cho_sung_bram_ad; //index, set값을 토대로 BRAM의 주소를 계산함. 조합논리로 값이 정해짐.
reg [9:0] jung_sung_bram_ad;
reg [9:0] chong_sung_bram_ad;
reg [9:0] ascii_bram_ad; //
reg [9:0] custom_tile_bram_ad;

// Pipe3에서 넘어온 UTF-16 값을 조합논리로 한 클럭 안에 통째로 분해
wire [13:0] base_index = pipe3_UTF16 - 16'hAC00;

// 1. 28로 나누고 종성 빼기 (한 클럭 내 진행)
wire [13:0] mid_quot   = (base_index * 32'd2341) >> 16;
wire [4:0]  chong_sung_index = base_index - ((mid_quot << 4) + (mid_quot << 3) + (mid_quot << 2)); //종성 인덱스

// 2. 이어서 21로 나누고 중성 빼기 (동일 클럭 내 진행)
wire [4:0]  cho_sung_index   = (mid_quot * 32'd3121) >> 16; //초성 인덱스
wire [4:0]  jung_sung_index  = mid_quot - ((cho_sung_index << 4) + (cho_sung_index << 2) + cho_sung_index); //중성 인덱스

wire is_korea_wire = (pipe3_UTF16 >= 16'hAC00) && (pipe3_UTF16 <= 16'hD7A3);
wire is_ascii_wire = (pipe3_UTF16 >= 16'h0020) && (pipe3_UTF16 <= 16'h007E);
wire is_custom_wire = (pipe3_UTF16 >= 16'hE000) && (pipe3_UTF16 <= 16'hE0AB);

always @(*) begin
    pixel_state_next = pixel_state; //기본적으로 기존 상태 유지.
    font_mix_end = 0; //한글폰트는 2번, ASCII나 커스텀은 1번 pipe6 비트맵 레지스터를 사용한뒤 1로 설정해서 font_state에게 파이프라인을 전진시키라고 알려줌.
    case(pixel_state[3:0])
        IDLE: begin
        end
        START: begin
        end
    endcase
end

always @(*) begin //counter_font_x_reset 주의해야 함!!!! 버블 삽입후 몇개 더 넣고 다음줄 값을 넣은 후 다음줄 값이 Pipe2에 저장되었을때 reset을 줘야 함!!!!!
    font_state_next = font_state;
    pipeline_move = 0; //font_state가 pipeline_move 제어.
    counter_0_39_reset = 0; //font_state가 counter_0_39_reset 제어. 
    counter_font_x_reset = 0; //counter_0_39_reset이랑 같이 올려주면 됨. 두 파이프라인 state후에 반영됨. pipe1에 새 값을 넣을때 같이 1로 설정해주면 pipe3에 저장될때 counter_font_x가 리셋됨.
    //counter_font_x는 pipe3의 값이 유효하고 한글이면 2 증가, ASCII나 커스텀이면 1 증가.

    pipe1_valid_next = 0;
    pipe1_counter_16_next[3:0] = 0; // 0 ~ 15
    pipe1_font_x_next[5:0] = 0; //0 ~ 39
    pipe1_font_y_next[5:0] = 0; //0 ~ 14

    case(font_state[3:0])
        IDLE: begin
        end
        START: begin 
            if() begin //모든 작업이 완료되었을때 다시 IDLE로 바꿔줄 예정.
                font_state_next = IDLE;
            end
            else if((font_mix_end == 0) && pipe6_valid) begin //파이프라인 정지.
                font_state_next = START;
                pipeline_move = 0;
            end
            else if(((font_mix_end == 1) && pipe6_valid) || (pipe6_valid == 0)) begin //파이프라인 전진. 사실 그냥 else로 해도 될 듯.
                if((counter_font_x == 33) || (counter_font_x == 34)) begin
                    font_state_next = BUBBLE_1;
                    pipeline_move = 1;
                    pipe1_valid_next = 0; //버블 삽입.
                end
                else begin
                    font_state_next = START;
                    pipeline_move = 1;
                    pipe1_valid_next = 1;
                    pipe1_counter_16_next[3:0] = counter_0_15[3:0];
                    pipe1_font_x_next[5:0] = counter_0_39[5:0];
                    pipe1_font_y_next[5:0] = counter_0_14[5:0];
                end
            end
        end
        BUBBLE_1: begin
            if() begin //모든 작업이 완료되었을때 다시 IDLE로 바꿔줄 예정.
            end
            else if((font_mix_end == 0) && pipe6_valid) begin //파이프라인 정지.
                font_state_next = BUBBLE_1;
                pipeline_move = 0;
            end
            else begin //파이프라인 전진. 버블 삽입.
                font_state_next = BUBBLE_2;
                pipeline_move = 1;
                pipe1_valid_next = 0; //버블 삽입.
            end
        end
        BUBBLE_2: begin
            if() begin //모든 작업이 완료되었을때 다시 IDLE로 바꿔줄 예정.
            end
            else if((font_mix_end == 0) && pipe6_valid) begin //파이프라인 정지.
                font_state_next = BUBBLE_2;
                pipeline_move = 0;
            end
            else begin //파이프라인 전진. 버블 삽입.
                font_state_next = BUBBLE_3;
                pipeline_move = 1;
                pipe1_valid_next = 0; //버블 삽입.
            end
        end
        BUBBLE_3: begin
            if() begin //모든 작업이 완료되었을때 다시 IDLE로 바꿔줄 예정.
            end
            else if((font_mix_end == 0) && pipe6_valid) begin //파이프라인 정지.
                font_state_next = BUBBLE_3;
                pipeline_move = 0;
            end
            else begin //파이프라인 전진.
                case(counter_font_x[5:0])
                    6'd36: begin //값 2개 더 넣고 버블 3개 넣고 counter_font_x가 38이면 한개 더 넣고 다음줄, 39, 40이면 바로 다음줄.
                        font_state_next = FIRST_CASE_1; //FIRST_CASE_1로 이동
                        pipeline_move = 1;
                        pipe1_valid_next = 1;
                        pipe1_counter_16_next[3:0] = counter_0_15[3:0];
                        pipe1_font_x_next[5:0] = counter_0_39[5:0];
                        pipe1_font_y_next[5:0] = counter_0_14[5:0];
                    end
                    6'd37: begin //값 1개 더 넣고 버블 3개 넣고 counter_font_x가 38이면 한개 더 넣고 다음줄, 39면 바로 다음줄.
                        font_state_next = SECOND_CASE; //SECOND_CASE로 이동
                        pipeline_move = 1;
                        pipe1_valid_next = 1;
                        pipe1_counter_16_next[3:0] = counter_0_15[3:0];
                        pipe1_font_x_next[5:0] = counter_0_39[5:0];
                        pipe1_font_y_next[5:0] = counter_0_14[5:0];
                    end
                    6'd38: begin //값 1개 더 넣고 다음줄.
                        font_state_next = THIRD_CASE; //THIRD_CASE로 이동
                        pipeline_move = 1;
                        pipe1_valid_next = 1;
                        pipe1_counter_16_next[3:0] = counter_0_15[3:0];
                        pipe1_font_x_next[5:0] = counter_0_39[5:0];
                        pipe1_font_y_next[5:0] = counter_0_14[5:0];
                    end
                    6'd39: begin //바로 다음줄 값 넣기.
                        font_state_next = START;
                        pipeline_move = 1;
                        counter_0_39_reset = 1; //이거 1로 초기화 됨. pipe3에 값이 써질때 0으로 초기화 됨.
                        counter_font_x_reset = 1;
                        pipe1_valid_next = 1;
                        pipe1_counter_16_next[3:0] = (counter_0_15[3:0] == 4'd15) ? 4'd0 : counter_0_15[3:0] + 1;
                        pipe1_font_x_next[5:0] = 0;
                        pipe1_font_y_next[5:0] = (counter_0_15[3:0] == 4'd15) ? counter_0_14[5:0] + 1 : counter_0_14[5:0];
                    end
                    6'd40: begin //바로 다음줄 값 넣기.
                        font_state_next = START;
                        pipeline_move = 1;
                        counter_0_39_reset = 1; //이거 1로 초기화 됨.
                        counter_font_x_reset = 1; //2 stage 후에 반영됨. pipe3에 값이 써질때 0으로 초기화 됨.
                        pipe1_valid_next = 1;
                        pipe1_counter_16_next[3:0] = (counter_0_15[3:0] == 4'd15) ? 4'd0 : counter_0_15[3:0] + 1;
                        pipe1_font_x_next[5:0] = 0;
                        pipe1_font_y_next[5:0] = (counter_0_15[3:0] == 4'd15) ? counter_0_14[5:0] + 1 : counter_0_14[5:0];
                    end
                    default: begin //그냥 다음줄 값 넣기.
                        font_state_next = START;
                        pipeline_move = 1;
                        counter_0_39_reset = 1; //이거 1로 초기화 됨. 
                        counter_font_x_reset = 1; //2 stage 후에 반영됨. pipe3에 값이 써질때 0으로 초기화 됨.
                        pipe1_valid_next = 1;
                        pipe1_counter_16_next[3:0] = (counter_0_15[3:0] == 4'd15) ? 4'd0 : counter_0_15[3:0] + 1;
                        pipe1_font_x_next[5:0] = 0;
                        pipe1_font_y_next[5:0] = (counter_0_15[3:0] == 4'd15) ? counter_0_14[5:0] + 1 : counter_0_14[5:0];
                    end
                endcase
            end
        end
        FIRST_CASE_1: begin //counter_font_x가 36일떄(1)
            if() begin //모든 작업이 완료되었을때 다시 IDLE로 바꿔줄 예정.
            end
            else if((font_mix_end == 0) && pipe6_valid) begin //파이프라인 정지.
                font_state_next = FIRST_CASE_1;
                pipeline_move = 0;
            end
            else begin //파이프라인 전진. 값 1개 더 넣기.
                font_state_next = FIRST_CASE_2;
                pipeline_move = 1;
                pipe1_valid_next = 1;
                pipe1_counter_16_next[3:0] = counter_0_15[3:0];
                pipe1_font_x_next[5:0] = counter_0_39[5:0];
                pipe1_font_y_next[5:0] = counter_0_14[5:0];
            end
        end
        FIRST_CASE_2: begin //counter_font_x가 36일떄(2)
            if() begin //모든 작업이 완료되었을때 다시 IDLE로 바꿔줄 예정.
            end
            else if((font_mix_end == 0) && pipe6_valid) begin //파이프라인 정지.
                font_state_next = FIRST_CASE_2;
                pipeline_move = 0;
            end
            else begin //파이프라인 전진. 버블 삽입.
                font_state_next = BUBBLE_1; //BUBBLE_1으로 가서 BUBBLE_3까지 가면 counter_font_x가 38이거나 39이므로 결과적으로 잘 처리됨. 
                pipeline_move = 1;
                pipe1_valid_next = 0; //버블 삽입.
            end
        end
        SECOND_CASE: begin //counter_font_x가 37인 경우. 
            if() begin //모든 작업이 완료되었을때 다시 IDLE로 바꿔줄 예정.
            end
            else if((font_mix_end == 0) && pipe6_valid) begin //파이프라인 정지.
                font_state_next = SECOND_CASE;
                pipeline_move = 0;
            end
            else begin //파이프라인 전진. 버블 삽입.
                font_state_next = BUBBLE_1; //BUBBLE_1으로 가서 BUBBLE_3까지 가면 counter_font_x가 38이거나 39이므로 결과적으로 잘 처리됨. 
                pipeline_move = 1;
                pipe1_valid_next = 0; //버블 삽입.
            end
        end
        THIRD_CASE: begin //counter_font_x가 38인 경우.
            if() begin //모든 작업이 완료되었을때 다시 IDLE로 바꿔줄 예정.
            end
            else if((font_mix_end == 0) && pipe6_valid) begin //파이프라인 정지.
                font_state_next = THIRD_CASE;
                pipeline_move = 0;
            end
            else begin //파이프라인 전진. 다음줄 값 넣기.
                font_state_next = START;
                pipeline_move = 1;
                counter_0_39_reset = 1; //1로 리셋됨.
                counter_font_x_reset = 1; //두 stage 후에 반영되서 타이밍 맞음.
                pipe1_valid_next = 1;
                pipe1_counter_16_next[3:0] = (counter_0_15[3:0] == 4'd15) ? 4'd0 : counter_0_15[3:0] + 1;
                pipe1_font_x_next[5:0] = 0;
                pipe1_font_y_next[5:0] = (counter_0_15[3:0] == 4'd15) ? counter_0_14[5:0] + 1 : counter_0_14[5:0];
            end
        end
    endcase
end

wire [4:0] cho_sung = pipe4_cho_sung_index[4:0];
wire [4:0] jung_sung = pipe4_jung_sung_index[4:0];
wire [4:0] chong_sung = pipe4_chong_sung_index[4:0];

always @(*) begin //pipe4 레지스터 값에 의해서 조합회로로 cho_sung_set, jung_sung_set, chong_sung_set이 결정됨.
    cho_sung_set[3:0] = 0;
    jung_sung_set[3:0] = 0;
    chong_sung_set[3:0] = 0;
    case(1'b1)
        (chong_sung == 0): begin //받침없음.
            if(cho_sung == 0 || cho_sung == 15) begin //초성이 ㄱ(0), ㅋ(15)일때 
                jung_sung_set = 1; //중성 1벌
            end
            else begin //초성이 ㄱ(0), ㅋ(15)이외의 값일때
                jung_sung_set = 2; //중성 2벌
            end
            case(1'b1) 
                ((jung_sung <= 7) || (jung_sung == 20)): begin //초성 1벌
                    cho_sung_set = 1;
                end
                ((jung_sung == 8) || (jung_sung == 12) || (jung_sung == 18)): begin //초성 2벌
                    cho_sung_set = 2;
                end
                ((jung_sung == 13) || (jung_sung == 17)): begin //초성 3벌
                    cho_sung_set = 3;
                end
                ((jung_sung == 9) || (jung_sung == 10) || (jung_sung == 11) || (jung_sung == 19)): begin //초성 4벌
                    cho_sung_set = 4;
                end
                ((jung_sung == 14) || (jung_sung == 15) || (jung_sung == 16)): begin //초성 5벌
                    cho_sung_set = 5;
                end
            endcase
        end
        (chong_sung != 0): begin //받침있음.
            if(cho_sung == 0 || cho_sung == 15) begin //초성이 ㄱ(0), ㅋ(15)일때 
                jung_sung_set = 3; //중성 3벌
            end
            else begin //초성이 ㄱ(0), ㅋ(15)이외의 값일때
                jung_sung_set = 4; //중성 4벌
            end
            case(1'b1)
                ((jung_sung <= 7) || (jung_sung == 20)): begin //초성 6벌
                    cho_sung_set = 6;
                end
                ((jung_sung == 8) || (jung_sung == 12) || (jung_sung == 13) || (jung_sung == 17) || (jung_sung == 18)): begin //초성 7벌
                    cho_sung_set = 7;
                end
                ((jung_sung == 9) || (jung_sung == 10) || (jung_sung == 11) || (jung_sung == 14) || (jung_sung == 15) || (jung_sung == 16) || (jung_sung == 19)): begin //초성 8벌
                    cho_sung_set = 8;
                end
            endcase
        end
    endcase
    
    case(1'b1)
        ((chong_sung == 0) || (chong_sung == 2) || (chong_sung == 9)): begin //종성 1벌
            chong_sung_set = 1;
        end
        ((chong_sung == 4) || (chong_sung == 6) || (chong_sung == 11) || (chong_sung == 14) || (chong_sung == 16) || (chong_sung == 19 || (chong_sung == 20))): begin //종성 2벌
            chong_sung_set = 2;
        end
        ((chong_sung == 1) || (chong_sung == 3) || (chong_sung == 5) || (chong_sung == 7) || (chong_sung == 10) || (chong_sung == 15)): begin //종성 3벌
            chong_sung_set = 3;
        end
        ((chong_sung == 8) || (chong_sung == 12) || (chong_sung == 13) || (chong_sung == 17) || (chong_sung == 18)): begin //종성 4벌
            chong_sung_set = 4;
        end
    endcase
end

always@(*) begin //나중에 pipe4_UTF16 범위에 따라서(한글인지, ASCII인지 커스텀 타일인지) 실제 BRAM 인터페이스의 BRAMX_addr_a에 적절한 bram_ad를 연결해 줘야함.
    cho_sung_bram_ad[9:0] = 0;
    jung_sung_bram_ad[9:0] = 0;
    chong_sung_bram_ad[9:0] = 0;
    ascii_bram_ad[9:0] = 0;
    custom_tile_bram_ad[9:0] = 0;

    //ASCII 코드 BRAM 주소. BRAM 5
    if((pipe4_UTF16[15:0] >= 16'h0020) && (pipe4_UTF16[15:0] <= 16'h007E)) begin //pipe4_UTF16이 ASCII범위안에 있을때
        ascii_bram_ad[9:0] = 10'd304 + {(pipe4_UTF16[7:0] - 8'h20), 2'b00} + {8'b0, pipe4_counter_16[3:2]};
    end
    else begin //그 외 16'h0000같은 범위 이외의 값일때.
        ascii_bram_ad[9:0] = 10'd304 + 10'b0 + {8'b0, pipe4_counter_16[3:2]}; //16'h0020인 공백으로 고정
    end

    //커스텀 타일 BRAM 주소. 
    if((pipe4_UTF16[15:0] >= 16'hE000) &&(pipe4_UTF16[15:0] <= 16'hE053)) begin //BRAM 5
        custom_tile_bram_ad[9:0] = 10'd688 + {pipe4_UTF16[7:0], 2'b00} + {8'b0, pipe4_counter_16[3:2]}; //어차피 상위 8비트는 E0으로 고정이고 16'hE000에서 시작하므로 문제없음.
    end
    else if((pipe4_UTF16[15:0] >= 16'hE054) &&(pipe4_UTF16[15:0] <= 16'hE0AB)) begin //BRAM 6
        custom_tile_bram_ad[9:0] = 10'd672 + {(pipe4_UTF16[7:0] - 8'h54), 2'b00} + {8'b0, pipe4_counter_16[3:2]};
    end

    case(cho_sung_set)
        1: begin //BRAM 4
            cho_sung_bram_ad[9:0] = 10'd0 + {2'b00, cho_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]}; 
        end
        2: begin //BRAM 4
            cho_sung_bram_ad[9:0] = 10'd152 + {2'b00, cho_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        3: begin //BRAM 4
            cho_sung_bram_ad[9:0] = 10'd304 + {2'b00, cho_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        4: begin //BRAM 4
            cho_sung_bram_ad[9:0] = 10'd456 + {2'b00, cho_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        5: begin //BRAM 4
            cho_sung_bram_ad[9:0] = 10'd608 + {2'b00, cho_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        6: begin //BRAM 4
            cho_sung_bram_ad[9:0] = 10'd760 + {2'b00, cho_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        7: begin //BRAM 5
            cho_sung_bram_ad[9:0] = 10'd0 + {2'b00, cho_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        8: begin //BRAM 5
            cho_sung_bram_ad[9:0] = 10'd152 + {2'b00, cho_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        default: begin
        end
    endcase

    case(jung_sung_set)
        1: begin //BRAM 6
            jung_sung_bram_ad[9:0] = 10'd0 + {2'b00, jung_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        2: begin //BRAM 6
            jung_sung_bram_ad[9:0] = 10'd168 + {2'b00, jung_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        3: begin //BRAM 6
            jung_sung_bram_ad[9:0] = 10'd336 + {2'b00, jung_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        4: begin //BRAM 6
            jung_sung_bram_ad[9:0] = 10'd504 + {2'b00, jung_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        default: begin
        end
    endcase

    case(chong_sung_set)
        1: begin //BRAM 13
            chong_sung_bram_ad[9:0] = 10'd0 + {2'b00, chong_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        2: begin //BRAM 13
            chong_sung_bram_ad[9:0] = 10'd224 + {2'b00, chong_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        3: begin //BRAM 13
            chong_sung_bram_ad[9:0] = 10'd448 + {2'b00, chong_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        4: begin //BRAM 13
            chong_sung_bram_ad[9:0] = 10'd672 + {2'b00, chong_sung[4:0], 3'b000} + {7'b0, pipe4_counter_16[3:1]};
        end
        default: begin
        end
    endcase
end

always @(*) begin
    BRAM4_en_a = 0; //초성 1~6벌
    BRAM4_wstrb_a[3:0] = 4'b0; //4'b0000이면 읽기임. 기본으로 읽기모드로 설정.
    BRAM4_addr_a[9:0] = 0;
    BRAM4_din_a[31:0] = 0;

    BRAM5_en_a = 0; //초성 7~8벌, ASCII, 커스텀 타일
    BRAM5_wstrb_a[3:0] = 4'b0; //4'b0000이면 읽기임. 기본으로 읽기모드로 설정.
    BRAM5_addr_a[9:0] = 0;
    BRAM5_din_a[31:0] = 0;

    BRAM6_en_a = 0; //중성 1~4벌, 커스텀 타일
    BRAM6_wstrb_a[3:0] = 4'b0; //4'b0000이면 읽기임. 기본으로 읽기모드로 설정.
    BRAM6_addr_a[9:0] = 0;
    BRAM6_din_a[31:0] = 0;

    BRAM13_en_a = 0; //종성 1~4벌
    BRAM13_wstrb_a[3:0] = 4'b0; //4'b0000이면 읽기임. 기본으로 읽기모드로 설정.
    BRAM13_addr_a[9:0] = 0;
    BRAM13_din_a[31:0] = 0;

    BRAM14_en_a = 0; //BRAM14는 폰트맵 저장.
    BRAM14_wstrb_a[3:0] = 4'b0; //4'b0000이면 읽기임. 기본으로 읽기모드로 설정.
    BRAM14_addr_a[9:0] = 0;
    BRAM14_din_a[31:0] = 0;

    if(bram_font_read_ena) begin //이 신호가 1이면 즉시 BRAM 인터페이스에 제어신호를 보냄. pipe4_valid && pipeline_move이 1이면 bram_font_read_ena 인가됨.
        case(1'b1)
            (pipe4_is_ascii): begin //ASCII 읽기.
                BRAM5_en_a = 1;
                BRAM5_wstrb_a[3:0] = 4'b0;
                BRAM5_addr_a[9:0] = ascii_bram_ad[9:0];
                BRAM5_din_a[31:0] = 0;
            end
            (pipe4_is_custom): begin //커스텀 타일 읽기.
                if(pipe4_UTF16[15:0] <= 16'hE053) begin //BRAM 5
                    BRAM5_en_a = 1;
                    BRAM5_wstrb_a[3:0] = 4'b0;
                    BRAM5_addr_a[9:0] = custom_tile_bram_ad[9:0];;
                    BRAM5_din_a[31:0] = 0;
                end
                else begin //BRAM 6
                    BRAM6_en_a = 1;
                    BRAM6_wstrb_a[3:0] = 4'b0;
                    BRAM6_addr_a[9:0] = custom_tile_bram_ad[9:0];;
                    BRAM6_din_a[31:0] = 0;
                end
            end
            (pipe4_is_korea): begin //한글 읽기.
                if(cho_sung_set < 7) begin //BRAM 4
                    BRAM4_en_a = 1; 
                    BRAM4_wstrb_a[3:0] = 4'b0;
                    BRAM4_addr_a[9:0] = cho_sung_bram_ad[9:0];
                    BRAM4_din_a[31:0] = 0;
                end
                else begin //BRAM 5.
                    BRAM5_en_a = 1; 
                    BRAM5_wstrb_a[3:0] = 4'b0;
                    BRAM5_addr_a[9:0] = cho_sung_bram_ad[9:0];
                    BRAM5_din_a[31:0] = 0;
                end
                BRAM6_en_a = 1; 
                BRAM6_wstrb_a[3:0] = 4'b0;
                BRAM6_addr_a[9:0] = jung_sung_bram_ad[9:0];
                BRAM6_din_a[31:0] = 0;

                BRAM13_en_a = 1; 
                BRAM13_wstrb_a[3:0] = 4'b0;
                BRAM13_addr_a[9:0] = chong_sung_bram_ad[9:0];
                BRAM13_din_a[31:0] = 0;
            end
            default: begin //16'h0020인 ASCII 코드 공백이라고 가정.
                BRAM5_en_a = 1;
                BRAM5_wstrb_a[3:0] = 4'b0;
                BRAM5_addr_a[9:0] = ascii_bram_ad[9:0]; //ascii_bram_ad는 알아서 공백을 가리키고 있어야 함. 
                BRAM5_din_a[31:0] = 0;
            end
        endcase
    end

    if(bram_map_read_ena) begin //pipe1_valid && pipeline_move이 1이면 bram_map_read_ena가 1이 됨.
        BRAM14_en_a = 1; //BRAM14는 폰트맵 저장.
        BRAM14_wstrb_a[3:0] = 4'b0;
        BRAM14_addr_a[9:0] = ((pipe1_font_y[5:0] << 4) + (pipe1_font_y[5:0] << 2)) + {5'b0, pipe1_font_x[5:1]}; //font_y * 20 + font_x/2 계산.
        BRAM14_din_a[31:0] = 0;
    end
end

always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        pixel_state[3:0] <= IDLE;
        font_state[3:0] <= IDLE;
        pixel_counter_x[8:0] <= 0;
        pixel_counter_y[8:0] <= 0;

        counter_0_39[5:0] <= 0;
        counter_0_14[5:0] <= 0;
        counter_0_15[3:0] <= 0;
        counter_font_x[5:0] <= 0;
        counter_font_x_reset_reg <= 0;
        counter_font_x_reset_reg_reg <= 0;

        bram_font_read_ena_reg <= 0;
        bram_map_read_ena_reg <= 0;

        fontmap_skid_data[15:0] <= 0;
        fontmap_skid_valid <= 0;
        ascii_bitmap_skid_data[7:0] <= 0;
        ascii_bitmap_skid_valid <= 0;
        korea_bitmap_skid_data[15:0] <= 0;
        korea_bitmap_skid_valid <= 0;
        custom_tile_bitmap_skid_data[7:0] <= 0;
        custom_tile_bitmap_skid_valid <= 0;

        RGB_1_reg[17:0] <= 0;
        RGB_1_reg_valid <= 0;
        RGB_2_reg[17:0] <= 0;
        RGB_2_reg_valid <= 0;
        RGB_3_reg[17:0] <= 0;
        RGB_3_reg_valid <= 0;
        RGB_4_reg[17:0] <= 0;
        RGB_4_reg_valid <= 0;
        RGB_5_reg[17:0] <= 0;
        RGB_5_reg_valid <= 0;
        RGB_6_reg[17:0] <= 0;
        RGB_6_reg_valid <= 0;
        RGB_7_reg[17:0] <= 0;
        RGB_7_reg_valid <= 0;
        RGB_8_reg[17:0] <= 0;
        RGB_8_reg_valid <= 0;

        mixed_RGB_1[17:0] <= 0;
        mixed_RGB_1_valid <= 0;
        mixed_RGB_2[17:0] <= 0;
        mixed_RGB_2_valid <= 0;
        mixed_RGB_3[17:0] <= 0;
        mixed_RGB_3_valid <= 0;
        mixed_RGB_4[17:0] <= 0;
        mixed_RGB_4_valid <= 0;
        mixed_RGB_5[17:0] <= 0;
        mixed_RGB_5_valid <= 0;
        mixed_RGB_6[17:0] <= 0;
        mixed_RGB_6_valid <= 0;
        mixed_RGB_7[17:0] <= 0;
        mixed_RGB_7_valid <= 0;
        mixed_RGB_8[17:0] <= 0;
        mixed_RGB_8_valid <= 0;

        pipe1_valid <= 0;
        pipe1_counter_16[3:0] <= 0;
        pipe1_font_x[5:0] <= 0;
        pipe1_font_y[5:0] <= 0;
        pipe2_valid <= 0;
        pipe2_mask[3:0] <= 0;
        pipe2_font_x[5:0] <= 0;
        pipe2_font_y[5:0] <= 0;
        pipe2_counter_16[3:0] <= 0;
        pipe3_valid <= 0;
        pipe3_UTF16[15:0] <= 0;
        pipe3_font_x[5:0] <= 0;
        pipe3_font_y[5:0] <= 0;
        pipe3_counter_16[3:0] <= 0;
        pipe4_valid <= 0;   
        pipe4_UTF16[15:0] <= 0;
        pipe4_is_korea <= 0;
        pipe4_is_ascii <= 0;
        pipe4_is_custom <= 0;
        pipe4_jung_sung_index[4:0] <= 0;
        pipe4_chong_sung_index[4:0] <= 0;
        pipe4_cho_sung_index[4:0] <= 0;
        pipe4_font_x[5:0] <= 0;
        pipe4_font_y[5:0] <= 0;
        pipe4_counter_16[3:0] <= 0;
        pipe5_valid <= 0;
        pipe5_mask[3:0] <= 0;
        pipe5_cho_sung_what_bram <= 0;
        pipe5_custom_what_bram <= 0;
        pipe5_is_korea <= 0;
        pipe5_is_ascii <= 0;
        pipe5_is_custom <= 0;
        pipe5_font_x[5:0] <= 0;
        pipe5_font_y[5:0] <= 0;
        pipe5_counter_16[3:0] <= 0;
        pipe6_valid <= 0;
        pipe6_is_korea <= 0;
        pipe6_is_ascii <= 0;
        pipe6_is_custom <= 0;
        pipe6_korea_font_bitmap[15:0] <= 0;
        pipe6_ascii_font_bitmap[7:0] <= 0;
        pipe6_custom_tile_bitmap[7:0] <= 0;
        pipe6_font_x[5:0] <= 0;
        pipe6_font_y[5:0] <= 0;
        pipe6_counter_16[3:0] <= 0;

    end
    else begin
        pixel_state[3:0] <= pixel_state_next;
        font_state[3:0] <= font_state_next;

        bram_font_read_ena_reg <= bram_font_read_ena; //1클럭전 값을 저장함.
        bram_map_read_ena_reg <= bram_map_read_ena; //1클럭전 값을 저장함.

        if(bram_map_read_ena_reg == 1 && pipeline_move == 0) begin //이때 skid buffer에 값을 임시로 저장함.
            fontmap_skid_data[15:0] <= (pipe2_mask[3:0] == 4'b1100) ? BRAM14_dout_a[31:16] : BRAM14_dout_a[15:0];
            fontmap_skid_valid <= 1; //valid를 1로 설정.
        end
        else if(fontmap_skid_valid == 1 && pipeline_move == 1)begin //이때는 정상적으로 pipe3 레지스터에 데이터가 잘 들어갈 예정임.
            fontmap_skid_data[15:0] <= 0;
            fontmap_skid_valid <= 0; //valid를 0으로 설정.
        end
        else begin //기존값 유지.
            fontmap_skid_data[15:0] <= fontmap_skid_data[15:0];
            fontmap_skid_valid <= fontmap_skid_valid; 
        end

        if(bram_font_read_ena_reg == 1 && pipeline_move == 0) begin
            case(1'b1)
                (pipe5_is_korea): begin
                    if(pipe5_mask[3:0] == 4'b1100) begin
                        korea_bitmap_skid_data[15:0] <= (pipe5_cho_sung_what_bram == 0) ? (BRAM4_dout_a[31:16] | BRAM6_dout_a[31:16] | BRAM13_dout_a[31:16]) : (BRAM5_dout_a[31:16] | BRAM6_dout_a[31:16] | BRAM13_dout_a[31:16]);
                        korea_bitmap_skid_valid <= 1;
                    end
                    else if(pipe5_mask[3:0] == 4'b0011) begin
                        korea_bitmap_skid_data[15:0] <= (pipe5_cho_sung_what_bram == 0) ? (BRAM4_dout_a[15:0] | BRAM6_dout_a[15:0] | BRAM13_dout_a[15:0]) : (BRAM5_dout_a[15:0] | BRAM6_dout_a[15:0] | BRAM13_dout_a[15:0]);
                        korea_bitmap_skid_valid <= 1;
                    end
                    else begin //오류. 무엇가 잘못된 상황임.
                    end
                end
                (pipe5_is_ascii): begin
                    ascii_bitmap_skid_valid <= 1;
                    if(pipe5_mask[0]) ascii_bitmap_skid_data[7:0] <= BRAM5_dout_a[7:0];
                    if(pipe5_mask[1]) ascii_bitmap_skid_data[7:0] <= BRAM5_dout_a[15:8];
                    if(pipe5_mask[2]) ascii_bitmap_skid_data[7:0] <= BRAM5_dout_a[23:16];
                    if(pipe5_mask[3]) ascii_bitmap_skid_data[7:0] <= BRAM5_dout_a[31:24];
                end
                (pipe5_is_custom): begin
                    custom_tile_bitmap_skid_valid <= 1;
                    if(pipe5_custom_what_bram == 0) begin //BRAM5
                        if(pipe5_mask[0]) custom_tile_bitmap_skid_data[7:0] <= BRAM5_dout_a[7:0];
                        if(pipe5_mask[1]) custom_tile_bitmap_skid_data[7:0] <= BRAM5_dout_a[15:8];
                        if(pipe5_mask[2]) custom_tile_bitmap_skid_data[7:0] <= BRAM5_dout_a[23:16];
                        if(pipe5_mask[3]) custom_tile_bitmap_skid_data[7:0] <= BRAM5_dout_a[31:24];
                    end
                    else begin //BRAM6
                        if(pipe5_mask[0]) custom_tile_bitmap_skid_data[7:0] <= BRAM6_dout_a[7:0];
                        if(pipe5_mask[1]) custom_tile_bitmap_skid_data[7:0] <= BRAM6_dout_a[15:8];
                        if(pipe5_mask[2]) custom_tile_bitmap_skid_data[7:0] <= BRAM6_dout_a[23:16];
                        if(pipe5_mask[3]) custom_tile_bitmap_skid_data[7:0] <= BRAM6_dout_a[31:24];
                    end
                end
                default: begin //오류. 무엇가 잘못된 상황임.
                end
            endcase
        end
        else if(fontmap_skid_valid == 1 && pipeline_move == 1) begin //이때는 정상적으로 pipe6 레지스터에 데이터가 잘 들어갈 예정임.
            ascii_bitmap_skid_data[7:0] <= 0;
            ascii_bitmap_skid_valid <= 0;
            korea_bitmap_skid_data[15:0] <= 0;
            korea_bitmap_skid_valid <= 0;
            custom_tile_bitmap_skid_data[7:0] <= 0;
            custom_tile_bitmap_skid_valid <= 0;
        end
        else begin //기존값 유지.
            ascii_bitmap_skid_data[7:0] <= ascii_bitmap_skid_data[7:0];
            ascii_bitmap_skid_valid <= ascii_bitmap_skid_valid;
            korea_bitmap_skid_data[15:0] <= korea_bitmap_skid_data[15:0];
            korea_bitmap_skid_valid <= korea_bitmap_skid_valid;
            custom_tile_bitmap_skid_data[7:0] <= custom_tile_bitmap_skid_data[7:0];
            custom_tile_bitmap_skid_valid <= custom_tile_bitmap_skid_valid;
        end

        if(pipeline_move && (pipe1_valid_next == 1)) begin //pipeline_move가 1일때마다 counter_0_39가 증가. counter_0_39가 0이되는 순간(reset신호 혹은 값이 39일때) counter_0_15가 1 증가하고, counter_0_15가 0이되는 순간 counter_0_14가 1 증가함.
            if(counter_0_39[5:0] == 6'd39) begin
                counter_0_39[5:0] <= 0;
            end
            else if(counter_0_39_reset) begin //reset 신호가 오면 1로 설정해야 타이밍이 맞음. 다음줄 값을 pipe1_xxx_next에 넣을때 reset도 같이 주기 때문임.
                counter_0_39[5:0] <= 1;
            end
            else begin
                counter_0_39[5:0] <= counter_0_39[5:0] + 1;
            end

            if(counter_0_39[5:0] == 6'd39 | counter_0_39_reset) begin
                if(counter_0_15[3:0] == 4'd15) begin
                    counter_0_15[3:0] <= 0;
                end
                else begin
                    counter_0_15[3:0] <= counter_0_15[3:0] + 1;
                end
            end

            if((counter_0_39[5:0] == 6'd39 | counter_0_39_reset) && counter_0_15[3:0] == 4'd15) begin
                if(counter_0_14[5:0] == 6'd14) begin
                    counter_0_14[5:0] <= 0;
                end
                else begin
                    counter_0_14[5:0] <= counter_0_14[5:0] + 1;
                end
            end
        end


        if(pipeline_move) begin
            counter_font_x_reset_reg <= counter_font_x_reset;
            counter_font_x_reset_reg_reg <= counter_font_x_reset_reg;
        end

        if(counter_font_x_reset_reg_reg && pipeline_move) begin //2 stage 지연된 reset_reg_reg 신호를 받음. 따라서 다음줄 값이 pipe2에 있을때 신호가 인가되어 pipe3에 갔을때 초기화 됨.
            counter_font_x[5:0] <= 0;
        end
        else if(pipeline_move && pipe3_valid && is_korea_wire) begin
            counter_font_x[5:0] <= counter_font_x[5:0] + 2;
        end
        else if(pipeline_move && pipe3_valid) begin
            counter_font_x[5:0] <= counter_font_x[5:0] + 1;
        end

        if(pipeline_move) begin
            pipe1_valid <= pipe1_valid_next;
            pipe1_counter_16[3:0] <= pipe1_counter_16_next; //0~15의 값을 가지고 16*16, 8*16 비트맵에서 몇번째줄을 읽어야 하는지 알려줌. 
            pipe1_font_x[5:0] <= pipe1_font_x_next; //0~39의 값을 가짐. 
            pipe1_font_y[5:0] <= pipe1_font_y_next; //0~14의 값을 가짐.

            pipe2_valid <= pipe1_valid;
            pipe2_mask[3:0] <= (pipe1_font_x[0] == 1'b1) ? 4'b1100 : 4'b0011; //4'b1100(상위 16비트 pipe3에 저장), 4'b0011(하위 16비트 pipe3에 저장)
            pipe2_font_x[5:0] <= pipe1_font_x[5:0];
            pipe2_font_y[5:0] <= pipe1_font_y[5:0];
            pipe2_counter_16[3:0] <= pipe1_counter_16[3:0];

            pipe3_valid <= pipe2_valid;
            pipe3_UTF16[15:0] <= (fontmap_skid_valid == 1) ? fontmap_skid_data[15:0] : (pipe2_mask[3:0] == 4'b1100) ? BRAM14_dout_a[31:16] : BRAM14_dout_a[15:0];
            pipe3_font_x[5:0] <= pipe2_font_x[5:0];
            pipe3_font_y[5:0] <= pipe2_font_y[5:0];
            pipe3_counter_16[3:0] <= pipe2_counter_16[3:0];

            pipe4_valid <= pipe3_valid;
            pipe4_UTF16[15:0] <= pipe3_UTF16[15:0];
            if(is_korea_wire) begin //한글 범위
                pipe4_is_korea <= 1;
                pipe4_is_ascii <= 0;
                pipe4_is_custom <= 0;
            end
            else if(is_ascii_wire) begin //ASCII 범위
                pipe4_is_korea <= 0;
                pipe4_is_ascii <= 1;
                pipe4_is_custom <= 0;
            end
            else if(is_custom_wire) begin //커스텀 타일 범위
                pipe4_is_korea <= 0;
                pipe4_is_ascii <= 0;
                pipe4_is_custom <= 1;
            end
            else begin //그 외의 값은 ASCII 공백으로 처리.
                pipe4_is_korea <= 0;
                pipe4_is_ascii <= 1;
                pipe4_is_custom <= 0;
            end
            pipe4_jung_sung_index[4:0] <= jung_sung_index[4:0];
            pipe4_chong_sung_index[4:0] <= chong_sung_index[4:0]; 
            pipe4_cho_sung_index[4:0] <= cho_sung_index[4:0];  
            pipe4_font_x[5:0] <= pipe3_font_x[5:0];
            pipe4_font_y[5:0] <= pipe3_font_y[5:0];
            pipe4_counter_16[3:0] <= pipe3_counter_16[3:0];

            pipe5_valid <= pipe4_valid;
            if(pipe4_is_korea) begin
                if(pipe4_cho_sung_index[4:0] < 5'd7) begin //초성 1~6벌
                    pipe5_cho_sung_what_bram <= 0; //BRAM4
                end
                else begin //초성 7~8벌
                    pipe5_cho_sung_what_bram <= 1; //BRAM5
                end
                pipe5_mask[3:0] <= (pipe4_counter_16[0] == 1'b1) ? 4'b1100 : 4'b0011; //4'b1100(상위 16비트 pipe6에 저장), 4'b0011(하위 16비트 pipe6에 저장)
            end
            if(pipe4_is_ascii) begin
                case(pipe4_counter_16[1:0])
                    2'b00: pipe5_mask[3:0] <= 4'b0001;
                    2'b01: pipe5_mask[3:0] <= 4'b0010;
                    2'b10: pipe5_mask[3:0] <= 4'b0100;
                    2'b11: pipe5_mask[3:0] <= 4'b1000;
                endcase
            end
            if(pipe4_is_custom) begin
                if(pipe4_UTF16[15:0] <= 16'hE053) begin //BRAM5
                    pipe5_custom_what_bram <= 0; //BRAM5
                end
                else begin //BRAM6
                    pipe5_custom_what_bram <= 1; //BRAM6
                end

                case(pipe4_counter_16[1:0])
                    2'b00: pipe5_mask[3:0] <= 4'b0001;
                    2'b01: pipe5_mask[3:0] <= 4'b0010;
                    2'b10: pipe5_mask[3:0] <= 4'b0100;
                    2'b11: pipe5_mask[3:0] <= 4'b1000;
                endcase
            end
            pipe5_is_korea <= pipe4_is_korea;
            pipe5_is_ascii <= pipe4_is_ascii;
            pipe5_is_custom <= pipe4_is_custom;
            pipe5_font_x[5:0] <= pipe4_font_x[5:0];
            pipe5_font_y[5:0] <= pipe4_font_y[5:0];
            pipe5_counter_16[3:0] <= pipe4_counter_16[3:0];

            pipe6_valid <= pipe5_valid; 
            pipe6_is_korea <= pipe5_is_korea; 
            pipe6_is_ascii <= pipe5_is_ascii; 
            pipe6_is_custom <= pipe5_is_custom; 
            if(pipe5_is_korea) begin
                if(korea_bitmap_skid_valid == 1) begin
                    pipe6_korea_font_bitmap[15:0] <= korea_bitmap_skid_data[15:0];
                end
                else begin
                    if(pipe5_cho_sung_what_bram == 0) begin //BRAM4
                        pipe6_korea_font_bitmap[15:0] <= (pipe5_mask[3:0] == 4'b1100) ? (BRAM4_dout_a[31:16] | BRAM6_dout_a[31:16] | BRAM13_dout_a[31:16]) : (BRAM4_dout_a[15:0] | BRAM6_dout_a[15:0] | BRAM13_dout_a[15:0]);
                    end
                    else begin //BRAM5
                        pipe6_korea_font_bitmap[15:0] <= (pipe5_mask[3:0] == 4'b1100) ? (BRAM5_dout_a[31:16] | BRAM6_dout_a[31:16] | BRAM13_dout_a[31:16]) : (BRAM5_dout_a[15:0] | BRAM6_dout_a[15:0] | BRAM13_dout_a[15:0]);
                    end
                end
            end
            if(pipe5_is_ascii) begin
                if(ascii_bitmap_skid_valid == 1) begin
                    pipe6_ascii_font_bitmap[7:0] <= ascii_bitmap_skid_data[7:0];
                end
                else begin
                    if(pipe5_mask[0]) pipe6_ascii_font_bitmap[7:0] <= BRAM5_dout_a[7:0];
                    if(pipe5_mask[1]) pipe6_ascii_font_bitmap[7:0] <= BRAM5_dout_a[15:8];
                    if(pipe5_mask[2]) pipe6_ascii_font_bitmap[7:0] <= BRAM5_dout_a[23:16];
                    if(pipe5_mask[3]) pipe6_ascii_font_bitmap[7:0] <= BRAM5_dout_a[31:24];
                end
            end
            if(pipe5_is_custom) begin
                if(custom_tile_bitmap_skid_valid == 1) begin
                    pipe6_custom_tile_bitmap[7:0] <= custom_tile_bitmap_skid_data[7:0];
                end
                else begin
                    if(pipe5_custom_what_bram == 0) begin //BRAM5
                        if(pipe5_mask[0]) pipe6_custom_tile_bitmap[7:0] <= BRAM5_dout_a[7:0];
                        if(pipe5_mask[1]) pipe6_custom_tile_bitmap[7:0] <= BRAM5_dout_a[15:8];
                        if(pipe5_mask[2]) pipe6_custom_tile_bitmap[7:0] <= BRAM5_dout_a[23:16];
                        if(pipe5_mask[3]) pipe6_custom_tile_bitmap[7:0] <= BRAM5_dout_a[31:24];
                    end
                    else begin //BRAM6
                        if(pipe5_mask[0]) pipe6_custom_tile_bitmap[7:0] <= BRAM6_dout_a[7:0];
                        if(pipe5_mask[1]) pipe6_custom_tile_bitmap[7:0] <= BRAM6_dout_a[15:8];
                        if(pipe5_mask[2]) pipe6_custom_tile_bitmap[7:0] <= BRAM6_dout_a[23:16];
                        if(pipe5_mask[3]) pipe6_custom_tile_bitmap[7:0] <= BRAM6_dout_a[31:24];
                    end
                end
            end
            pipe6_font_x[5:0] <= pipe5_font_x[5:0]; 
            pipe6_font_y[5:0] <= pipe5_font_y[5:0];
            pipe6_counter_16[3:0] <= pipe5_counter_16[3:0];
        end


        case(pixel_state[3:0])
            IDLE: begin
                if(PPU_start) begin
                    pixel_state[3:0] <= START;

                    RGB_1_reg[17:0] <= 0;
                    RGB_1_reg_valid <= 0;
                    RGB_2_reg[17:0] <= 0;
                    RGB_2_reg_valid <= 0;
                    RGB_3_reg[17:0] <= 0;
                    RGB_3_reg_valid <= 0;
                    RGB_4_reg[17:0] <= 0;
                    RGB_4_reg_valid <= 0;
                    RGB_5_reg[17:0] <= 0;
                    RGB_5_reg_valid <= 0;
                    RGB_6_reg[17:0] <= 0;
                    RGB_6_reg_valid <= 0;
                    RGB_7_reg[17:0] <= 0;
                    RGB_7_reg_valid <= 0;
                    RGB_8_reg[17:0] <= 0;
                    RGB_8_reg_valid <= 0;
                    mixed_RGB_1[17:0] <= 0;
                    mixed_RGB_1_valid <= 0;
                    mixed_RGB_2[17:0] <= 0;
                    mixed_RGB_2_valid <= 0;
                    mixed_RGB_3[17:0] <= 0;
                    mixed_RGB_3_valid <= 0;
                    mixed_RGB_4[17:0] <= 0;
                    mixed_RGB_4_valid <= 0;
                    mixed_RGB_5[17:0] <= 0;
                    mixed_RGB_5_valid <= 0;
                    mixed_RGB_6[17:0] <= 0;
                    mixed_RGB_6_valid <= 0;
                    mixed_RGB_7[17:0] <= 0;
                    mixed_RGB_7_valid <= 0;
                    mixed_RGB_8[17:0] <= 0;
                    mixed_RGB_8_valid <= 0;
                end
                else begin
                    pixel_state[3:0] <= IDLE;
                end
            end
            START: begin
            end
        endcase

        case(font_state[3:0])
            IDLE: begin
                if(PPU_start) begin
                    font_state[3:0] <= START;

                    counter_font_x[5:0] <= 0;
                    counter_0_39[5:0] <= 0;
                    counter_0_14[5:0] <= 0;
                    counter_0_15[3:0] <= 0;

                    fontmap_skid_data[15:0] <= 0;
                    fontmap_skid_valid <= 0;
                    ascii_bitmap_skid_data[7:0] <= 0;
                    ascii_bitmap_skid_valid <= 0;
                    korea_bitmap_skid_data[15:0] <= 0;
                    korea_bitmap_skid_valid <= 0;
                    custom_tile_bitmap_skid_data[7:0] <= 0;
                    custom_tile_bitmap_skid_valid <= 0;

                    pipe1_valid <= 0;
                    pipe1_counter_16[3:0] <= 0;
                    pipe1_font_x[5:0] <= 0;
                    pipe1_font_y[5:0] <= 0;
                    pipe2_valid <= 0;
                    pipe2_mask[3:0] <= 0;
                    pipe2_font_x[5:0] <= 0;
                    pipe2_font_y[5:0] <= 0;
                    pipe2_counter_16[3:0] <= 0;
                    pipe3_valid <= 0;
                    pipe3_UTF16[15:0] <= 0;
                    pipe3_font_x[5:0] <= 0;
                    pipe3_font_y[5:0] <= 0;
                    pipe3_counter_16[3:0] <= 0;
                    pipe4_valid <= 0;
                    pipe4_UTF16[15:0] <= 0;
                    pipe4_is_korea <= 0;
                    pipe4_is_ascii <= 0;
                    pipe4_is_custom <= 0;
                    pipe4_jung_sung_index[4:0] <= 0;
                    pipe4_chong_sung_index[4:0] <= 0;
                    pipe4_cho_sung_index[4:0] <= 0;
                    pipe4_font_x[5:0] <= 0;
                    pipe4_font_y[5:0] <= 0;
                    pipe4_counter_16[3:0] <= 0;
                    pipe5_valid <= 0;
                    pipe5_mask[3:0] <= 0;
                    pipe5_cho_sung_what_bram <= 0;
                    pipe5_custom_what_bram <= 0;
                    pipe5_is_korea <= 0;
                    pipe5_is_ascii <= 0;
                    pipe5_is_custom <= 0;
                    pipe5_font_x[5:0] <= 0;
                    pipe5_font_y[5:0] <= 0;
                    pipe5_counter_16[3:0] <= 0;
                    pipe6_valid <= 0;
                    pipe6_is_korea <= 0;
                    pipe6_is_ascii <= 0;
                    pipe6_is_custom <= 0;
                    pipe6_korea_font_bitmap[15:0] <= 0;
                    pipe6_ascii_font_bitmap[7:0] <= 0;
                    pipe6_custom_tile_bitmap[7:0] <= 0;
                    pipe6_font_x[5:0] <= 0;
                    pipe6_font_y[5:0] <= 0;
                    pipe6_counter_16[3:0] <= 0;
                end
                else begin
                    font_state[3:0] <= IDLE;
                end
            end
            START: begin
            end
        endcase
    end
end

endmodule