module Font_Processer( //PPU가 1차 완성한 Pixel line을 받아와서 폰트를 합성해서 최종 Pixel line을 산출해내는 모듈
    input clk, //50MHz
    input resetn, //negedge reset

    // BRAM4 (폰트 저장용) 인터페이스 - True Dual Port
    // BRAM4 Port A (36-bit Interface)
    output reg        BRAM4_en_a,    // Port A Enable
    output reg [3:0]  BRAM4_wstrb_a,    // Port A Write Enable (Byte-wide strobe: 36비트 = 9비트 x 4)
    output reg [9:0]  BRAM4_addr_a,  // Port A Address (10-bit for 1024 depth)
    output reg [35:0] BRAM4_din_a,   // Port A Data Input
    input      [35:0] BRAM4_dout_a,  // Port A Data Output

    // BRAM4 Port B (36-bit Interface)
    output reg        BRAM4_en_b,    // Port B Enable
    output reg [3:0]  BRAM4_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM4_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [35:0] BRAM4_din_b,   // Port B Data Input
    input      [35:0] BRAM4_dout_b,   // Port B Data Output


    // BRAM5 (폰트 저장용) 인터페이스 - True Dual Port
    // BRAM5 Port A (36-bit Interface)
    output reg        BRAM5_en_a,    // Port A Enable
    output reg [3:0]  BRAM5_wstrb_a,    // Port A Write Enable (Byte-wide strobe: 36비트 = 9비트 x 4)
    output reg [9:0]  BRAM5_addr_a,  // Port A Address (10-bit for 1024 depth)
    output reg [35:0] BRAM5_din_a,   // Port A Data Input
    input      [35:0] BRAM5_dout_a,  // Port A Data Output
    // BRAM5 Port B (36-bit Interface)
    output reg        BRAM5_en_b,    // Port B Enable
    output reg [3:0]  BRAM5_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM5_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [35:0] BRAM5_din_b,   // Port B Data Input
    input      [35:0] BRAM5_dout_b,   // Port B Data Output


    // BRAM6 (폰트 저장용) 인터페이스 - True Dual Port
    // BRAM6 Port A (36-bit Interface)
    output reg        BRAM6_en_a,    // Port A Enable
    output reg [3:0]  BRAM6_wstrb_a,    // Port A Write Enable (Byte-wide strobe: 36비트 = 9비트 x 4)
    output reg [9:0]  BRAM6_addr_a,  // Port A Address (10-bit for 1024 depth)
    output reg [35:0] BRAM6_din_a,   // Port A Data Input
    input      [35:0] BRAM6_dout_a,  // Port A Data Output
    // BRAM6 Port B (36-bit Interface)
    output reg        BRAM6_en_b,    // Port B Enable
    output reg [3:0]  BRAM6_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM6_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [35:0] BRAM6_din_b,   // Port B Data Input
    input      [35:0] BRAM6_dout_b,   // Port B Data Output

    //BRAM7 (PPU가 1차 완성한 pixel line 저장용)
);
endmodule