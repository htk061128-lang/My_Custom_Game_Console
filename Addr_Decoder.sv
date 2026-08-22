module Addr_Decoder( 
    input clk,
    input resetn,

    //I_Cache_Controller를 거쳐서 온 외부 메모리 인터페이스. axi4로 변환한 뒤 DDR3 IP와 연결해야 함.
    input reg EMEM_valid,
    output EMEM_ready,
    input reg [31:0] EMEM_addr, //상위 4비트는 사용되지 않음. 256MiB만 사용.
    input reg [31:0] EMEM_wdata,
    input reg [3:0] EMEM_wstrb,
    output [31:0] EMEM_rdata,
    input reg [7:0] EMEM_burst_len, //이 값이 0이면 1개읽기, 1이면 2개읽기임, 최대 256개의 word를 연속으로 읽을 수 있음.
    input reg EMEM_burst_en, //이 값이 1이면 burst읽기 임.


    //DDR3 컨트롤러와 상호작용 할 인터페이스
    output wire        DDR3_valid,
    input  wire        DDR3_ready,
    output wire [31:0] DDR3_addr,
    output wire [31:0] DDR3_wdata,
    output wire [3:0]  DDR3_wstrb,
    input  wire [31:0] DDR3_rdata,
    output wire [7:0]  DDR3_burst_len,
    output wire        DDR3_burst_en,


    //RGB Lookup Table(Distributed Memory) 쓰기 인터페이스.
    // [포트 A] 쓰기 전용 포트 (Write Port) //쓰기 포트는 CPU가 사용할 수 있게 해야하고 여기서는 사용하지는 않지만 일단 적어둠.
    output  wire        LUT_we,         // 쓰기 활성화 (Write Enable)
    output  wire [7:0]  LUT_addr_w,     // 쓰기 주소 (256깊이 = 8bit)
    output  wire [17:0] LUT_data_in,    // 쓸 데이터 (18bit 픽셀 데이터)


    //폰트 데이터 읽기, 쓰기 인터페이스. (BRAM 4, 5, 6, 13)
    // BRAM4 Port B (32-bit Interface) - 이 포트는 CPU에 할당. CPU가 폰트를 수정할 수 있게 하려고 함. - True Dual Port //초성 1~6벌 저장.
    output reg        BRAM4_en_b,    // Port B Enable
    output reg [3:0]  BRAM4_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM4_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [31:0] BRAM4_din_b,   // Port B Data Input
    input      [31:0] BRAM4_dout_b,   // Port B Data Output
    // BRAM5 Port B (32-bit Interface) - 이 포트는 CPU에 할당. CPU가 폰트를 수정할 수 있게 하려고 함. - True Dual Port //초성 7~8벌, ASCII 저장. 
    output reg        BRAM5_en_b,    // Port B Enable
    output reg [3:0]  BRAM5_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM5_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [31:0] BRAM5_din_b,   // Port B Data Input
    input      [31:0] BRAM5_dout_b,   // Port B Data Output
    // BRAM6 Port B (32-bit Interface) - 이 포트는 CPU에 할당. CPU가 폰트를 수정할 수 있게 하려고 함.  - True Dual Port //중성 1~4벌 저장.
    output reg        BRAM6_en_b,    // Port B Enable
    output reg [3:0]  BRAM6_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM6_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [31:0] BRAM6_din_b,   // Port B Data Input
    input      [31:0] BRAM6_dout_b,   // Port B Data Output
    // BRAM13 Port B (32-bit Interface) - 이 포트는 CPU에 할당. CPU가 폰트를 수정할 수 있게 하려고 함. - True Dual Port //종성 1~4벌 저장.
    output reg        BRAM13_en_b,    // Port B Enable
    output reg [3:0]  BRAM13_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM13_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [31:0] BRAM13_din_b,   // Port B Data Input
    input      [31:0] BRAM13_dout_b,   // Port B Data Output


    //폰트맵 수정 인터페이스
    // BRAM14 Port B (32-bit Interface) - 이 포트는 CPU에 할당. CPU가 직접 폰트 맵을 수정해야 함. 
    output reg        BRAM14_en_b,    // Port B Enable
    output reg [3:0]  BRAM14_wstrb_b,    // Port B Write Enable
    output reg [9:0]  BRAM14_addr_b,  // Port B Address (10-bit for 1024 depth)
    output reg [31:0] BRAM14_din_b,   // Port B Data Input
    input      [31:0] BRAM14_dout_b,   // Port B Data Output


    //각종 PPU 제어 레지스터들
    output wire [31:0] o_bg1_addr,    output wire [31:0] o_bg2_addr,
    output wire [31:0] o_chr1_addr,   output wire [31:0] o_chr2_addr,
    output wire [31:0] o_chr3_addr,   output wire [31:0] o_chr4_addr,
    output wire [31:0] o_scr_addr,    output wire [31:0] o_stat_addr,
    output wire [31:0] o_uni1_addr,   output wire [31:0] o_uni2_addr,
    output wire [31:0] o_lut_cache,
    output wire [31:0] o_bg1_pos,     output wire [31:0] o_bg1_attr,
    output wire [31:0] o_bg2_pos,     output wire [31:0] o_bg2_attr,
    output wire [31:0] o_chr1_pos,    output wire [31:0] o_chr1_attr,
    output wire [31:0] o_chr2_pos,    output wire [31:0] o_chr2_attr,
    output wire [31:0] o_chr3_pos,    output wire [31:0] o_chr3_attr,
    output wire [31:0] o_chr4_pos,    output wire [31:0] o_chr4_attr,
    output wire [31:0] o_scr_pos,     output wire [31:0] o_scr_attr,
    output wire [31:0] o_stat_pos,    output wire [31:0] o_stat_attr,
    output wire [31:0] o_uni1_pos,    output wire [31:0] o_uni1_attr,
    output wire [31:0] o_uni2_pos,    output wire [31:0] o_uni2_attr,
    output wire [31:0] o_line_cfg_0_1,
    output wire [31:0] o_line_cfg_2_3,
    output wire [31:0] o_line_cfg_4_5,
    output wire [31:0] o_line_cfg_6_7,
    output wire [31:0] o_line_cfg_8_9,
    output wire [31:0] o_line_cfg_10_11,
    output wire [31:0] o_line_cfg_12_13,
    output wire [31:0] o_line_cfg_14,
    output wire [31:0] o_line_alpha_0_7,
    output wire [31:0] o_line_alpha_8_14
);
//CPU가 설정해야 하는 정보들 정리
//Font Map(BRAM 14)
//RGB Lookup Table(Distribute Memory)
//범용 RGB 변환 캐시 4개
//각종 PPU 제어신호들
//폰트 데이터(BRAM 4, 5, 6, 13)

parameter [31:0] CONTROL_REG_BASE;
parameter [31:0] FONT_MAP_BASE;
parameter [31:0] FONT_DATA_BASE;
parameter [31:0] LOOKUP_TABLE_BASE;

wire sel_ddr3     = (EMEM_addr[31:28] == 4'h0) && (EMEM_addr[27:20] != 8'hFF); // 상위 4비트 0x0 확인 및 0x0FF0_xxxx 대역이 아닌 경우만 활성화. (0x0000_0000 ~ 0x0FEF_FFFF, 255 MiB)
wire sel_ppu_reg  = (EMEM_addr[31:16] == 16'h0FF0) && (EMEM_addr[15:10] == 6'b0000_00); // 0x0FF0_0000 ~ 0x0FF0_03FF (1 KiB): [15:10] == 6'b0000_00                     
wire sel_lut      = (EMEM_addr[31:16] == 16'h0FF0) && (EMEM_addr[15:10] == 6'b0000_01); // 0x0FF0_0400 ~ 0x0FF0_07FF (1 KiB): [15:10] == 6'b0000_01                 
wire sel_font_map = (EMEM_addr[31:16] == 16'h0FF0) && (EMEM_addr[15:12] == 4'h1); // 0x0FF0_1000 ~ 0x0FF0_1FFF (4 KiB): [15:12] == 4'h1                 
wire sel_bram4    = (EMEM_addr[31:16] == 16'h0FF0) && (EMEM_addr[15:12] == 4'h2); // 0x0FF0_2000 ~ 0x0FF0_2FFF (4 KiB): [15:12] == 4'h2                   
wire sel_bram5    = (EMEM_addr[31:16] == 16'h0FF0) && (EMEM_addr[15:12] == 4'h3); // 0x0FF0_3000 ~ 0x0FF0_3FFF (4 KiB): [15:12] == 4'h3                     
wire sel_bram6    = (EMEM_addr[31:16] == 16'h0FF0) && (EMEM_addr[15:12] == 4'h4); // 0x0FF0_4000 ~ 0x0FF0_4FFF (4 KiB): [15:12] == 4'h4                    
wire sel_bram13   = (EMEM_addr[31:16] == 16'h0FF0) && (EMEM_addr[15:12] == 4'h5); // 0x0FF0_5000 ~ 0x0FF0_5FFF (4 KiB): [15:12] == 4'h5


reg [3:0] main_state;
reg [3:0] main_state_next;
parameter IDLE = 0;

always @(*) begin
end

always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
    end
    else begin
    end
end

endmodule