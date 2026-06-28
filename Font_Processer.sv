module Font_Processer( //PPU가 1차 완성한 Pixel line을 받아와서 폰트를 합성해서 최종 Pixel line을 산출해내는 모듈
    input clk, //50MHz
    input resetn, //negedge reset

    input PPU_start,

    input PPU__pixel_valid,
    input [17:0] PPU_pixel_RGB, //PPU가 1차 완성한 Pixel. 6bit * 3 = 18bit

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
범위는 ASCII(영어, 숫자, 기호): 16'h0000 ~ 16'h007F, 한글: 16'hAC00 ~ 16'hD7A3. 이외의 범위의 값은 지원하지 않음!!!

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

총 344개의 16*16 폰트를 저장해야 함. 거기에 ASCII의 제어문자와 확장 아스크 코드를 제외한 16'h0020 ~ 16'h007E까지의 95개의 폰트와 한글 344개의 폰트를 합쳐서 총 439개의 폰트를 저장해야 함.
    
PPU로부터 한 줄의 픽셀이 나올때까지 최소 320클럭이 소요됨. 한줄에 20개의 유니코드가 다 채워져 있다고 가정할때 한 글자를 초성, 중성, 종성으로 분리하려면 4클럭
*/
endmodule