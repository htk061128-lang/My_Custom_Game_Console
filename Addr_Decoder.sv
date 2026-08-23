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
parameter IDLE = 0, READ_WRITE = 1, DDR3_ACCESS = 2;

//reg sampling_ddr3_w;
//reg sampling_ddr3_r;
reg sampling_bram4_r;
reg sampling_bram4_w;
reg sampling_bram5_r;
reg sampling_bram5_w;
reg sampling_bram6_r;
reg sampling_bram6_w;
reg sampling_bram13_r;
reg sampling_bram13_w;
reg sampling_font_map_r;
reg sampling_font_map_w;
reg sampling_lut_w;
reg sampling_ppu_reg_r;
reg sampling_ppu_reg_w;


// --- PPU 제어 레지스터들 구현 ---
// 배열 형태로 관리하여 Wire로 할당
reg [31:0] ppu_regs [41:0]; //일단 41개의 레지스터를 선언함.
integer i;

// Output Wire에 매핑 (Word 단위 Offset에 따라 매칭)
assign o_bg1_addr = ppu_regs[0];  assign o_bg2_addr = ppu_regs[1];
assign o_chr1_addr = ppu_regs[2]; assign o_chr2_addr = ppu_regs[3];
assign o_chr3_addr = ppu_regs[4]; assign o_chr4_addr = ppu_regs[5];
assign o_scr_addr = ppu_regs[6];  assign o_stat_addr = ppu_regs[7];
assign o_uni1_addr = ppu_regs[8]; assign o_uni2_addr = ppu_regs[9];
assign o_lut_cache = ppu_regs[10];
assign o_bg1_pos = ppu_regs[11];  assign o_bg1_attr = ppu_regs[12];
assign o_bg2_pos = ppu_regs[13];  assign o_bg2_attr = ppu_regs[14];
assign o_chr1_pos = ppu_regs[15]; assign o_chr1_attr = ppu_regs[16];
assign o_chr2_pos = ppu_regs[17]; assign o_chr2_attr = ppu_regs[18];
assign o_chr3_pos = ppu_regs[19]; assign o_chr3_attr = ppu_regs[20];
assign o_chr4_pos = ppu_regs[21]; assign o_chr4_attr = ppu_regs[22];
assign o_scr_pos = ppu_regs[23];  assign o_scr_attr = ppu_regs[24];
assign o_stat_pos = ppu_regs[25]; assign o_stat_attr = ppu_regs[26];
assign o_uni1_pos = ppu_regs[27]; assign o_uni1_attr = ppu_regs[28];
assign o_uni2_pos = ppu_regs[29]; assign o_uni2_attr = ppu_regs[30];
assign o_line_cfg_0_1 = ppu_regs[31];
assign o_line_cfg_2_3 = ppu_regs[32];
assign o_line_cfg_4_5 = ppu_regs[33];
assign o_line_cfg_6_7 = ppu_regs[34];
assign o_line_cfg_8_9 = ppu_regs[35];
assign o_line_cfg_10_11 = ppu_regs[36];
assign o_line_cfg_12_13 = ppu_regs[37];
assign o_line_cfg_14 = ppu_regs[38];
assign o_line_alpha_0_7 = ppu_regs[39];
assign o_line_alpha_8_14 = ppu_regs[40];

always @(*) begin
    main_state_next = main_state;
    case(main_state)
        IDLE: begin //초기 대기상태.
            if(EMEM_valid && !sel_ddr3) begin
                main_state_next = READ_WRITE;
            end
            /*else if(EMEM_valid && sel_ddr3) begin
                main_state_next = DDR3_ACCESS;
            end*/
            else begin
                main_state_next = IDLE;
            end
        end
        READ_WRITE: begin //BRAM, ppu_reg, LUT에 접근하는 상황.
            main_state_next = IDLE; //EMEM_ready랑 적절한 EMEM_rdata 주고 바로 IDLE로 이동
        end
        /*DDR3_ACCESS: begin //DDR3 읽기, 쓰기하는 상황.
        end*/
    endcase
end

always @(*) begin
// 기본값 초기화
    EMEM_ready = 1'b0;
    EMEM_rdata = 32'd0;
    
    // DDR3 연결
    DDR3_valid     = EMEM_valid & sel_ddr3;
    DDR3_addr      = EMEM_addr;
    DDR3_wdata     = EMEM_wdata;
    DDR3_wstrb     = sel_ddr3 ? EMEM_wstrb : 4'd0;
    DDR3_burst_len = EMEM_burst_len;
    DDR3_burst_en  = EMEM_burst_en;

    // LUT 쓰기 포트 연결 (Word Aligned, 주소는 하위 비트 추출)
    LUT_we      = EMEM_valid & sel_lut & (EMEM_wstrb != 4'd0) & (main_state == IDLE);
    LUT_addr_w  = EMEM_addr[9:2]; //하위 12비트범위가 0100 0000 0000(12'h400) - 0111 1111 1111(12'h7FF) 이고 [9:2]부분만 보면 됨. (워드 단위로 접근하므로 하위 2비트는 어차피 00임)
    LUT_data_in = EMEM_wdata[17:0];

    // BRAM 포트 연결 (Word Aligned Address)
    BRAM4_en_b     = EMEM_valid & sel_bram4 & (main_state == IDLE);
    BRAM4_wstrb_b  = sel_bram4 ? EMEM_wstrb : 4'd0;
    BRAM4_addr_b   = EMEM_addr[11:2]; // 10-bit for 1024 depth
    BRAM4_din_b    = EMEM_wdata;

    BRAM5_en_b     = EMEM_valid & sel_bram5 & (main_state == IDLE);
    BRAM5_wstrb_b  = sel_bram5 ? EMEM_wstrb : 4'd0; 
    BRAM5_addr_b   = EMEM_addr[11:2];
    BRAM5_din_b    = EMEM_wdata;

    BRAM6_en_b     = EMEM_valid & sel_bram6 & (main_state == IDLE);
    BRAM6_wstrb_b  = sel_bram6 ? EMEM_wstrb : 4'd0;
    BRAM6_addr_b   = EMEM_addr[11:2];
    BRAM6_din_b    = EMEM_wdata;

    BRAM13_en_b    = EMEM_valid & sel_bram13 & (main_state == IDLE);
    BRAM13_wstrb_b = sel_bram13 ? EMEM_wstrb : 4'd0;
    BRAM13_addr_b  = EMEM_addr[11:2];
    BRAM13_din_b   = EMEM_wdata;

    BRAM14_en_b    = EMEM_valid & sel_font_map & (main_state == IDLE);
    BRAM14_wstrb_b = sel_font_map ? EMEM_wstrb : 4'd0;
    BRAM14_addr_b  = EMEM_addr[11:2]; //하위 12비트 범위가 12'h000 - 12'hFFF 이고 하위 2비트는 워드단위이므로 버림. 
    BRAM14_din_b   = EMEM_wdata;

    if (sel_ddr3) begin //sel_ddr3가 활성화되면 그냥 DDR3_ready, DDR3_rdata를 연결만 해줌. 
        EMEM_ready = DDR3_ready;
        EMEM_rdata = DDR3_rdata;
    end

    if(main_state == READ_WRITE) begin //sampling_xxxx_r, sampling_xxxx_w가 세팅된 순간. ddr3 제외.
        EMEM_ready = 1'b1; //EMEM_ready 1로 올림.
        if(sampling_bram4_r) EMEM_rdata = BRAM4_dout_b;
        else if(sampling_bram5_r) EMEM_rdata = BRAM5_dout_b;
        else if (sampling_bram6_r)    EMEM_rdata = BRAM6_dout_b;
        else if (sampling_bram13_r)   EMEM_rdata = BRAM13_dout_b;
        else if (sampling_font_map_r) EMEM_rdata = BRAM14_dout_b;
        else if (sampling_ppu_reg_r) EMEM_rdata = (EMEM_addr[9:2] < 41) ? ppu_regs[EMEM_addr[9:2]]: 32'b0; //범위 이외의 값에 접근하면 0을 반환.
    end

end

always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        for (i = 0; i < 41; i = i + 1) begin
            ppu_regs[i] <= 32'd0;
        end
        main_state <= IDLE;
        sampling_bram4_r <= 0;
        sampling_bram4_w <= 0;
        sampling_bram5_r <= 0;
        sampling_bram5_w <= 0;
        sampling_bram6_r <= 0;
        sampling_bram6_w <= 0;
        sampling_bram13_r <= 0;
        sampling_bram13_w <= 0;
        sampling_font_map_r <= 0;
        sampling_font_map_w <= 0;
        //sampling_ddr3_r <= 0;
        //sampling_ddr3_w <= 0;
        sampling_lut_w <= 0;
        sampling_ppu_reg_r <= 0;
        sampling_ppu_reg_w <= 0;
    end
    else begin
        main_state <= main_state_next;

        // PPU Register Write Logic (쓰기 스트로브 확인)
        if (EMEM_valid && sel_ppu_reg && (EMEM_wstrb != 4'b0000) && (main_state == IDLE)) begin
            // 주소의 하위 비트 [7:2]를 사용하여 워드 오프셋 계산
            if(EMEM_addr[9:2] < 41) ppu_regs[EMEM_addr[9:2]] <= EMEM_wdata; //범위 안에 들어갈때만 쓰기가 일어나야 함. 없는 레지스터에 쓸수는 없음.
            else ;
        end

        if (EMEM_valid && (EMEM_wstrb == 4'b0000) && main_state == IDLE) begin //읽기 신호 샘플링
            sampling_bram4_r <= sel_bram4;
            sampling_bram5_r <= sel_bram5;
            sampling_bram6_r <= sel_bram6;
            sampling_bram13_r <= sel_bram13;
            sampling_font_map_r <= sel_font_map;
            sampling_ppu_reg_r <= sel_ppu_reg;
        end
        else begin
            sampling_bram4_r <= 0;
            sampling_bram5_r <= 0;
            sampling_bram6_r <= 0;
            sampling_bram13_r <= 0;
            sampling_font_map_r <= 0;
            sampling_ppu_reg_r <= 0;
        end

        if (EMEM_valid && (EMEM_wstrb != 4'b0000) && main_state == IDLE) begin //쓰기 신호 샘플링
            sampling_bram4_w <= sel_bram4;
            sampling_bram5_w <= sel_bram5;
            sampling_bram6_w <= sel_bram6;
            sampling_bram13_w <= sel_bram13;
            sampling_font_map_w <= sel_font_map;
            sampling_ppu_reg_w <= sel_ppu_reg;
            sampling_lut_w <= sel_lut;
        end
        else begin
            sampling_bram4_w <= 0;
            sampling_bram5_w <= 0;
            sampling_bram6_w <= 0;
            sampling_bram13_w <= 0;
            sampling_font_map_w <= 0;
            sampling_ppu_reg_w <= 0;
        end
    end
end

endmodule