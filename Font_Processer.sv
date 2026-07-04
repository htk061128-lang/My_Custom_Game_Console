module Font_Processer( //PPU가 1차 완성한 Pixel line을 받아와서 폰트를 합성해서 최종 Pixel line을 산출해내는 모듈
    input clk,
    input resetn, //negedge reset

    input PPU_start,

    input [17:0] Font_RGB;
    input [7:0] Font_a; //0 ~ 16까지의 값을 가질 수 있음. 이외의 값은 절대 가져서는 안됌.

    input PPU__pixel_valid,
    input [17:0] PPU_pixel_RGB, //PPU가 1차 완성한 Pixel. 6bit * 3 = 18bit

    input [7:0] Line1_visible_number, //0 ~ 40 까지의 값을 가져야 함.
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
    input [7:0] Line15_visible_number,

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

    //BRAM14 (PPU가 1차 완성한 pixel RGB 저장용) - Simple Dual Port
    // Write Port (Port A) - 이 포트를 이용해서 PPU가 1차 완성한 pixel RGB를 저장함. 한 클럭만 PPU_pixel_valid가 나오므로 바로 즉시 저장해야 함.
    output reg      BRAM14_en_a,   // Write Enable
    output reg [8:0]  BRAM14_addr_a,
    output reg [71:0] BRAM14_din_a,
    // Read Port (Port B) 
    output reg       BRAM14_en_b,   // Read Enable
    output reg [8:0]  BRAM14_addr_b,
    input  [71:0] BRAM14_dout_b,

    //BRAM15 (80 * 15 = 1200바이트) 폰트 맵. 320 * 240 화면에서 한줄에 최대 40글자가 들어가고 총 15줄이 존재할 수 있음. 포트 하나는 반드시 CPU에 할당해야 함.
    // BRAM15 Port A (32-bit Interface)
    output reg        BRAM15_en_a,    // Port A Enable
    output reg [3:0]  BRAM15_wstrb_a,    // Port A Write Enable (Byte-wide strobe: 32비트 = 8비트 x 4)
    output reg [9:0]  BRAM15_addr_a,  // Port A Address (10-bit for 1024 depth)
    output reg [31:0] BRAM15_din_a,   // Port A Data Input
    input      [31:0] BRAM15_dout_a,  // Port A Data Output
    // BRAM15 Port B (32-bit Interface) - 이 포트는 CPU에 할당. CPU가 직접 폰트 맵을 수정해야 함. 
    output reg        BRAM15_en_b,    // Port B Enable
    output reg [3:0]  BRAM15_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM15_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [31:0] BRAM15_din_b,   // Port B Data Input
    input      [31:0] BRAM15_dout_b,   // Port B Data Output
);
/*
UTF-16을 사용할 예정이고 한글, 영어, 숫자, 특수문자 다 16비트임.
범위는 ASCII(영어, 숫자, 기호): 16'h0020 ~ 16'h007F, 한글: 16'hAC00 ~ 16'hD7A3. 이외의 범위의 값은 지원하지 않음!!!
16'h0000은 그 위치에 폰트가 없는 것을 의미함!! 그냥 비워두면 8*16 픽셀만큼 공백이라고 생각하면 됨.

base_index = unicode_in - 16'hAC00; 
초성  = base_index / (21 * 28); // 19자
중성 = (base_index / 28) % 21; // 21자
종성 = base_index % 28;        // 28자

초성 19자 인덱스:ㄱ(0)ㄲ(1)ㄴ(2)ㄷ(3)ㄸ(4)ㄹ(5)ㅁ(6)ㅂ(7)ㅃ(8)ㅅ(9)ㅆ(10)ㅇ(11)ㅈ(12)ㅉ(13)ㅊ(14)ㅋ(15)ㅌ(16)ㅍ(17)ㅎ(18)
중성 21자 인덱스:ㅏ(0)ㅐ(1)ㅑ(2)ㅒ(3)ㅓ(4)ㅔ(5)ㅕ(6)ㅖ(7)ㅗ(8)ㅘ(9)ㅙ(10)ㅚ(11)ㅛ(12)ㅜ(13)ㅝ(14)ㅞ(15)ㅟ(16)ㅠ(17)ㅡ(18)ㅢ(19)ㅣ(20)
종성 28자 인덱스: 받침없음(0)ㄱ(1)ㄲ(2)ㄳ(3)ㄴ(4)ㄵ(5)ㄶ(6)ㄷ(7)ㄹ(8)ㄺ(9)ㄻ(10)ㄼ(11)ㄽ(12)ㄾ(13)ㄿ(14)ㅀ(15)ㅁ(16)ㅂ(17)ㅃ(18)ㅅ(19)ㅆ(20)ㅇ(21)ㅈ(22)ㅊ(23)ㅋ(24)ㅌ(25)ㅍ(26)ㅎ(27)

초성 - 총 19 * 8 = 152개의 폰트가 존재함. (한글)
    초성 1벌 : 받침없는 'ㅏㅐㅑㅒㅓㅔㅕㅖㅣ' 와 결합
    초성 2벌 : 받침없는 'ㅗㅛㅡ'
    초성 3벌 : 받침없는 'ㅜㅠ'
    초성 4벌 : 받침없는 'ㅘㅙㅚㅢ'
    초성 5벌 : 받침없는 'ㅝㅞㅟ'
    초성 6벌 : 받침있는 'ㅏㅐㅑㅒㅓㅔㅕㅖㅣ' 와 결합
    초성 7벌 : 받침있는 'ㅗㅛㅜㅠㅡ'
    초성 8벌 : 받침있는 'ㅘㅙㅚㅢㅝㅞㅟ'

중성 - 총 21 * 4 = 84개의 폰트가 존재함. (한글)
    중성 1벌 : 받침없는 'ㄱㅋ' 와 결합
    중성 2벌 : 받침없는 'ㄱㅋ' 이외의 자음
    중성 3벌 : 받침있는 'ㄱㅋ' 와 결합
    중성 4벌 : 받침있는 'ㄱㅋ' 이외의 자음

종성 총 28 * 4 = 112개의 폰트가 존재함. (한글)
    종성 1벌 : 중성 'ㅏㅑㅘ' 와 결합
    종성 2벌 : 중성 'ㅓㅕㅚㅝㅟㅢㅣ'
    종성 3벌 : 중성 'ㅐㅒㅔㅖㅙㅞ'
    종성 4벌 : 중성 'ㅗㅛㅜㅠㅡ'

총 344개의 16*16 폰트를 저장해야 함. 거기에 ASCII의 제어문자와 확장 아스키 코드를 제외한 16'h0020 ~ 16'h007E까지의 95개의 폰트와 한글 344개의 폰트를 합쳐서 총 439개의 폰트를 저장해야 함.
    
PPU로부터 한 줄의 픽셀이 나올때까지 최소 320클럭이 소요됨. 한줄에 20개의 유니코드가 다 채워져 있다고 가정할때 한 글자를 초성, 중성, 종성으로 분리하려면 4클럭
*/
reg [15:0] fontmap_shadow_data; //skid buffer. 파이프라인이 불규칙적으로 정지하므로 BRAM의 출력을 일시 저장하고 다시 전진할때 데이터를 보내줌.
reg fontmap_shadow_valid;

reg [15:0] korea_bitmap_shadow_data;
reg korea_bitmap_shadow_valid;

reg [7:0] ascii_bitmap_shadow_data;
reg ascii_bitmap_shadow_valid;

reg [3:0] fifo_state; //PPU_pixel_RGB를 BRAM으로 구현된 FIFO에 저장하는 FSM
reg [3:0] fifo_state_next;
reg [3:0] font_state;
reg [3:0] font_state_next; 
parameter IDLE = 0, START = 1;

reg [8:0] pixel_counter_x; //FIFO에서 픽셀을 꺼낼 때마다 증가시킴.
reg [8:0] pixel_counter_y; //한 줄인 320 픽셀을 다 꺼내면 1씩 증가시킴.

reg pipe1_valid; //버블을 삽입할때는 pipe1_valid에 0을 저장시키면 됨. pipe3_is_korea에 저장하기 직전의 값에 의해서 +8, +16 씩 카운터를 증가시키고 마지막에 버블 삽입해서 더 읽을지 다음줄로 갈지 결정함.
reg [9:0] pipe1_fontmap_ad;
reg [4:0] pipe1_counter_16; //1~16의 값을 가지고 16*16, 8*16 비트맵에서 몇번째줄을 읽어야 하는지 알려줌. 
reg [5:0] pipe1_font_x; //1~40의 값을 가짐. 기본적으로 1씩 증가시키고, 줄을 바꿔야 한다 판단되면 1으로 초기화시키고 pipe1_counter_16을 1 증가시킴. 이후 pipe1_counter_16이 16이면 y를 1 증가시킴.
reg [5:0] pipe1_font_y; //1~15의 값을 가짐.

reg pipe2_valid; //클럭에지때 BRAM에서 값이 나오면서 pipe2_valid에 값이 저장됨. 이때 
reg [9:0] pipe2_fontmap_ad;
reg [5:0] pipe2_font_x;
reg [5:0] pipe2_font_y;
reg [4:0] pipe2_counter_16;

reg pipe3_valid;
reg [15:0] pipe3_UTF16; //읽은 32비트 중 16비트만 저장함. 이 값이 0을 포함한 정의되지 않은 값이라면 공백이라고 가정.
reg pipe3_is_korea; //1이면 한글이고 0이면 ASCII코드이거나 공백임. 
reg [5:0] pipe3_font_x;
reg [5:0] pipe3_font_y;
reg [4:0] pipe3_counter_16;

reg pipe4_valid;
reg pipe4_is_korea; //1이면 한글이고 0이면 ASCII코드이거나 공백임.
reg [4:0] pipe4_middle_index; //중성 index. mid_quot_28 - (first_index * 21)
reg [4:0] pipe4_end_index; //종성 index. base - (mid_quot_28 * 28)
reg [4:0] pipe4_first_index; //초성 index. mid_quot를 21로 나눈 몫.
reg [9:0] pipe4_ascii_ad; //pipe4_is_korea가 0일때만 유효. pipe3_UTF16이 0을 포함한 정의되지 않은 값이면 비트맵이 8'b0이 들어있는 BRAM 주소가 들어가 있어야 함!!!!
reg [5:0] pipe4_font_x;
reg [5:0] pipe4_font_y;
reg [4:0] pipe4_counter_16;

reg pipe5_valid;
reg pipe5_is_korea;
reg [4:0] pipe5_middle_index; 
reg [4:0] pipe5_end_index; 
reg [4:0] pipe5_first_index;
reg [5:0] pipe5_font_x;
reg [5:0] pipe5_font_y;
reg [4:0] pipe5_counter_16;

reg pipe6_valid; //이 값이 0이면 절대 bitmap을 합성해서는 안됨. 파이프라인을 전진시켜서 valid가 나올때까지 전진시켜야 함. 버블이 들어있을 수 있음.
reg pipe6_is_korea; //이 값이 1이면 pipe6_korea_font_bitmap이 유효하고, 0이면 pipe6_ascii_font_bitmap가 유효함. 
reg [15:0] pipe6_korea_font_bitmap;
reg [7:0] pipe6_ascii_font_bitmap;
reg [5:0] pipe6_font_x; //이 값을 이용해서 LineX_visible_number와 대조해서 합성할지 말지 판단함.
reg [5:0] pipe6_font_y; //이 값을 이용해서 Line1_visible_number ~ Line15_visible_number 중 하나를 선택함.
reg [4:0] pipe6_counter_16; //이 값을 이용해서 x, y에 해당하는 폰트의 몇번째 줄 비트맵인지(1-16) 판단함.

// Pipe3에서 넘어온 UTF-16 값을 조합논리로 한 클럭 안에 통째로 분해
wire [13:0] base_index = pipe3_UTF16 - 16'hAC00;

// 1. 28로 나누고 종성 빼기 (한 클럭 내 진행)
wire [13:0] mid_quot   = (base_index * 32'd2341) >> 16;
wire [4:0]  chong_sung = base_index - ((mid_quot << 4) + (mid_quot << 3) + (mid_quot << 2));

// 2. 이어서 21로 나누고 중성 빼기 (동일 클럭 내 진행)
wire [4:0]  cho_sung   = (mid_quot * 32'd3121) >> 16;
wire [4:0]  jung_sung  = mid_quot - ((cho_sung << 4) + (cho_sung << 2) + cho_sung);

always @(*) begin
    fifo_state_next = fifo_state; //기본적으로 기존 상태 유지.
    case(fifo_state[3:0])
        IDLE: begin
        end
        START: begin
        end
    endcase
end

always @(*) begin
    font_state_next = font_state;
    case(font_state[3:0])
        IDLE: begin
        end
        START: begin
        end
    endcase
end

always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        fifo_state[3:0] <= IDLE;
        pixel_counter_x[8:0] <= 0;
        pixel_counter_y[8:0] <= 0;
    end
    else begin
        fifo_state[3:0] <= fifo_state_next;
        font_state[3:0] <= font_state_next;
        case(fifo_state[3:0])
            IDLE: begin
                if(PPU_start) begin
                    fifo_state[3:0] <= START;
                end
                else begin
                    fifo_state[3:0] <= IDLE;
                end
            end
            START: begin
            end
        endcase

        case(font_state[3:0])
            IDLE: begin
                if(PPU_start) begin
                    fifo_state[3:0] <= START;
                end
                else begin
                    fifo_state[3:0] <= IDLE;
                end
            end
            START: begin
            end
        endcase

    end
end

endmodule