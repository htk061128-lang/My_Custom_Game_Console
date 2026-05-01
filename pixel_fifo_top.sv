module pixel_fifo_top(
    input clk,
    input resetn,
    input PPU_start,

    // 10개 레이어 외부 메모리 주소
    input [31:0] Universal_Layer1_Address,
    input [31:0] Universal_Layer2_Address,
    input [31:0] Script_Layer_Address,
    input [31:0] Status_Layer_Address,
    input [31:0] Character_Layer1_Address,
    input [31:0] Character_Layer2_Address,
    input [31:0] Character_Layer3_Address,
    input [31:0] Character_Layer4_Address,
    input [31:0] Background_Layer1_Address,
    input [31:0] Background_Layer2_Address,

    // 외부 메모리 (DDR3) 인터페이스
    output EMEM_valid,
    input  EMEM_ready,
    output [31:0] EMEM_addr,
    output [31:0] EMEM_wdata,
    output [3:0]  EMEM_wstrb,
    input  [31:0] EMEM_rdata,
    output [7:0]  EMEM_burst_len,
    output EMEM_burst_en,

    // BRAM 7, 8, 9 (압축 데이터 저장용 - Compressed_Data_FIFO 출력)
    output BRAM7_en_a, output [0:0] BRAM7_we_a, output [8:0] BRAM7_addr_a, output [63:0] BRAM7_din_a,
    output BRAM7_en_b, output [8:0] BRAM7_addr_b, input  [63:0] BRAM7_dout_b,
    output BRAM8_en_a, output [0:0] BRAM8_we_a, output [8:0] BRAM8_addr_a, output [63:0] BRAM8_din_a,
    output BRAM8_en_b, output [8:0] BRAM8_addr_b, input  [63:0] BRAM8_dout_b,
    output BRAM9_en_a, output [0:0] BRAM9_we_a, output [8:0] BRAM9_addr_a, output [63:0] BRAM9_din_a,
    output BRAM9_en_b, output [8:0] BRAM9_addr_b, input  [63:0] BRAM9_dout_b,

    // BRAM 10, 11, 12 (압축 해제된 데이터 저장용 - Decompresser TDM 출력 통합)
    output BRAM10_en_a, output [0:0] BRAM10_we_a, output [8:0] BRAM10_addr_a, output [63:0] BRAM10_din_a,
    output BRAM10_en_b, output [8:0] BRAM10_addr_b, input  [63:0] BRAM10_dout_b,
    output BRAM11_en_a, output [0:0] BRAM11_we_a, output [8:0] BRAM11_addr_a, output [63:0] BRAM11_din_a,
    output BRAM11_en_b, output [8:0] BRAM11_addr_b, input  [63:0] BRAM11_dout_b,
    output BRAM12_en_a, output [0:0] BRAM12_we_a, output [8:0] BRAM12_addr_a, output [63:0] BRAM12_din_a,
    output BRAM12_en_b, output [8:0] BRAM12_addr_b, input  [63:0] BRAM12_dout_b,

    // [외부 PPU 출력 인터페이스] 10개 레이어 Decompressed FIFO
    input  uni1_decomp_ena, input  uni1_decomp_dequeue, output uni1_decomp_r_master, output [63:0] uni1_decomp_data, output uni1_decomp_empty,
    input  uni2_decomp_ena, input  uni2_decomp_dequeue, output uni2_decomp_r_master, output [63:0] uni2_decomp_data, output uni2_decomp_empty,
    input  sc_decomp_ena,   input  sc_decomp_dequeue,   output sc_decomp_r_master,   output [63:0] sc_decomp_data,   output sc_decomp_empty,
    input  st_decomp_ena,   input  st_decomp_dequeue,   output st_decomp_r_master,   output [63:0] st_decomp_data,   output st_decomp_empty,
    
    input  ch1_decomp_ena,  input  ch1_decomp_dequeue,  output ch1_decomp_r_master,  output [63:0] ch1_decomp_data,  output ch1_decomp_empty,
    input  ch2_decomp_ena,  input  ch2_decomp_dequeue,  output ch2_decomp_r_master,  output [63:0] ch2_decomp_data,  output ch2_decomp_empty,
    input  ch3_decomp_ena,  input  ch3_decomp_dequeue,  output ch3_decomp_r_master,  output [63:0] ch3_decomp_data,  output ch3_decomp_empty,
    input  ch4_decomp_ena,  input  ch4_decomp_dequeue,  output ch4_decomp_r_master,  output [63:0] ch4_decomp_data,  output ch4_decomp_empty,
    
    input  bg1_decomp_ena,  input  bg1_decomp_dequeue,  output bg1_decomp_r_master,  output [63:0] bg1_decomp_data,  output bg1_decomp_empty,
    input  bg2_decomp_ena,  input  bg2_decomp_dequeue,  output bg2_decomp_r_master,  output [63:0] bg2_decomp_data,  output bg2_decomp_empty
);

    // =========================================================================
    // 내부 연결 와이어 선언 (Compressed FIFO <-> Decompressers)
    // =========================================================================
    wire [1:0] clk_counter;
    
    // Background 1, 2
    wire bg1_comp_ena, bg1_comp_dequeue, bg1_comp_r_master; wire [63:0] bg1_comp_data; wire [8:0] bg1_comp_count;
    wire bg2_comp_ena, bg2_comp_dequeue, bg2_comp_r_master; wire [63:0] bg2_comp_data; wire [8:0] bg2_comp_count;

    // Character 1, 2, 3, 4 (count는 8비트)
    wire ch1_comp_ena, ch1_comp_dequeue, ch1_comp_r_master; wire [63:0] ch1_comp_data; wire [7:0] ch1_comp_count;
    wire ch2_comp_ena, ch2_comp_dequeue, ch2_comp_r_master; wire [63:0] ch2_comp_data; wire [7:0] ch2_comp_count;
    wire ch3_comp_ena, ch3_comp_dequeue, ch3_comp_r_master; wire [63:0] ch3_comp_data; wire [7:0] ch3_comp_count;
    wire ch4_comp_ena, ch4_comp_dequeue, ch4_comp_r_master; wire [63:0] ch4_comp_data; wire [7:0] ch4_comp_count;

    // Universal 1, 2, Script, Status (count는 8비트)
    wire uni1_comp_ena, uni1_comp_dequeue, uni1_comp_r_master; wire [63:0] uni1_comp_data; wire [7:0] uni1_comp_count;
    wire uni2_comp_ena, uni2_comp_dequeue, uni2_comp_r_master; wire [63:0] uni2_comp_data; wire [7:0] uni2_comp_count;
    wire sc_comp_ena,   sc_comp_dequeue,   sc_comp_r_master;   wire [63:0] sc_comp_data;   wire [7:0] sc_comp_count;
    wire st_comp_ena,   st_comp_dequeue,   st_comp_r_master;   wire [63:0] st_comp_data;   wire [7:0] st_comp_count;

    // =========================================================================
    // 모듈 1: Compressed_Data_FIFO 인스턴스화
    // =========================================================================
    Compressed_Data_FIFO u_compressed_fifo (
        .clk(clk), .resetn(resetn), .Clk_Counter(clk_counter), .PPU_start(PPU_start),
        
        .Universal_Layer1_Address(Universal_Layer1_Address), .Universal_Layer2_Address(Universal_Layer2_Address),
        .Script_Layer_Address(Script_Layer_Address),         .Status_Layer_Address(Status_Layer_Address),
        .Character_Layer1_Address(Character_Layer1_Address), .Character_Layer2_Address(Character_Layer2_Address),
        .Character_Layer3_Address(Character_Layer3_Address), .Character_Layer4_Address(Character_Layer4_Address),
        .Background_Layer1_Address(Background_Layer1_Address),.Background_Layer2_Address(Background_Layer2_Address),

        .EMEM_valid(EMEM_valid), .EMEM_ready(EMEM_ready), .EMEM_addr(EMEM_addr),
        .EMEM_wdata(EMEM_wdata), .EMEM_wstrb(EMEM_wstrb), .EMEM_rdata(EMEM_rdata),
        .EMEM_burst_len(EMEM_burst_len), .EMEM_burst_en(EMEM_burst_en),

        .BRAM7_en_a(BRAM7_en_a), .BRAM7_we_a(BRAM7_we_a), .BRAM7_addr_a(BRAM7_addr_a), .BRAM7_din_a(BRAM7_din_a),
        .BRAM7_en_b(BRAM7_en_b), .BRAM7_addr_b(BRAM7_addr_b), .BRAM7_dout_b(BRAM7_dout_b),
        .BRAM8_en_a(BRAM8_en_a), .BRAM8_we_a(BRAM8_we_a), .BRAM8_addr_a(BRAM8_addr_a), .BRAM8_din_a(BRAM8_din_a),
        .BRAM8_en_b(BRAM8_en_b), .BRAM8_addr_b(BRAM8_addr_b), .BRAM8_dout_b(BRAM8_dout_b),
        .BRAM9_en_a(BRAM9_en_a), .BRAM9_we_a(BRAM9_we_a), .BRAM9_addr_a(BRAM9_addr_a), .BRAM9_din_a(BRAM9_din_a),
        .BRAM9_en_b(BRAM9_en_b), .BRAM9_addr_b(BRAM9_addr_b), .BRAM9_dout_b(BRAM9_dout_b),

        .Background_Layer1_ena(bg1_comp_ena), .Background_Layer1_dequeue(bg1_comp_dequeue), .Background_Layer1_r_master(bg1_comp_r_master), .Background_Layer1_data(bg1_comp_data), .Background_Layer1_count(bg1_comp_count),
        .Background_Layer2_ena(bg2_comp_ena), .Background_Layer2_dequeue(bg2_comp_dequeue), .Background_Layer2_r_master(bg2_comp_r_master), .Background_Layer2_data(bg2_comp_data), .Background_Layer2_count(bg2_comp_count),
        
        .Character_Layer1_ena(ch1_comp_ena),  .Character_Layer1_dequeue(ch1_comp_dequeue),  .Character_Layer1_r_master(ch1_comp_r_master),  .Character_Layer1_data(ch1_comp_data),  .Character_Layer1_count(ch1_comp_count),
        .Character_Layer2_ena(ch2_comp_ena),  .Character_Layer2_dequeue(ch2_comp_dequeue),  .Character_Layer2_r_master(ch2_comp_r_master),  .Character_Layer2_data(ch2_comp_data),  .Character_Layer2_count(ch2_comp_count),
        .Character_Layer3_ena(ch3_comp_ena),  .Character_Layer3_dequeue(ch3_comp_dequeue),  .Character_Layer3_r_master(ch3_comp_r_master),  .Character_Layer3_data(ch3_comp_data),  .Character_Layer3_count(ch3_comp_count),
        .Character_Layer4_ena(ch4_comp_ena),  .Character_Layer4_dequeue(ch4_comp_dequeue),  .Character_Layer4_r_master(ch4_comp_r_master),  .Character_Layer4_data(ch4_comp_data),  .Character_Layer4_count(ch4_comp_count),

        .Universal_Layer1_ena(uni1_comp_ena), .Universal_Layer1_dequeue(uni1_comp_dequeue), .Universal_Layer1_r_master(uni1_comp_r_master), .Universal_Layer1_data(uni1_comp_data), .Universal_Layer1_count(uni1_comp_count),
        .Universal_Layer2_ena(uni2_comp_ena), .Universal_Layer2_dequeue(uni2_comp_dequeue), .Universal_Layer2_r_master(uni2_comp_r_master), .Universal_Layer2_data(uni2_comp_data), .Universal_Layer2_count(uni2_comp_count),
        .Script_Layer_ena(sc_comp_ena),       .Script_Layer_dequeue(sc_comp_dequeue),       .Script_Layer_r_master(sc_comp_r_master),       .Script_Layer_data(sc_comp_data),       .Script_Layer_count(sc_comp_count),
        .Status_Layer_ena(st_comp_ena),       .Status_Layer_dequeue(st_comp_dequeue),       .Status_Layer_r_master(st_comp_r_master),       .Status_Layer_data(st_comp_data),       .Status_Layer_count(st_comp_count)
    );

    // =========================================================================
    // 모듈 2: Decompresser 인스턴스화 (총 10개) 및 TDM 신호 추출
    // =========================================================================
    // 각 모듈에서 나오는 BRAM 신호를 임시 저장할 와이어들 선언
    wire un1_b10_en_a, un1_b10_we_a, un1_b10_en_b; wire [8:0] un1_b10_addr_a, un1_b10_addr_b; wire [63:0] un1_b10_din_a;
    wire un2_b10_en_a, un2_b10_we_a, un2_b10_en_b; wire [8:0] un2_b10_addr_a, un2_b10_addr_b; wire [63:0] un2_b10_din_a;
    wire sc_b10_en_a,  sc_b10_we_a,  sc_b10_en_b;  wire [8:0] sc_b10_addr_a,  sc_b10_addr_b;  wire [63:0] sc_b10_din_a;
    wire st_b10_en_a,  st_b10_we_a,  st_b10_en_b;  wire [8:0] st_b10_addr_a,  st_b10_addr_b;  wire [63:0] st_b10_din_a;

    wire ch1_b11_en_a, ch1_b11_we_a, ch1_b11_en_b; wire [8:0] ch1_b11_addr_a, ch1_b11_addr_b; wire [63:0] ch1_b11_din_a;
    wire ch2_b11_en_a, ch2_b11_we_a, ch2_b11_en_b; wire [8:0] ch2_b11_addr_a, ch2_b11_addr_b; wire [63:0] ch2_b11_din_a;
    wire ch3_b11_en_a, ch3_b11_we_a, ch3_b11_en_b; wire [8:0] ch3_b11_addr_a, ch3_b11_addr_b; wire [63:0] ch3_b11_din_a;
    wire ch4_b11_en_a, ch4_b11_we_a, ch4_b11_en_b; wire [8:0] ch4_b11_addr_a, ch4_b11_addr_b; wire [63:0] ch4_b11_din_a;

    wire bg1_b12_en_a, bg1_b12_we_a, bg1_b12_en_b; wire [8:0] bg1_b12_addr_a, bg1_b12_addr_b; wire [63:0] bg1_b12_din_a;
    wire bg2_b12_en_a, bg2_b12_we_a, bg2_b12_en_b; wire [8:0] bg2_b12_addr_a, bg2_b12_addr_b; wire [63:0] bg2_b12_din_a;

    // --- BRAM 10 Group (Universal 1, 2, Script, Status) ---
    Decompresser u_decomp_uni1 (
        .clk(clk), .resetn(resetn), .Clk_Counter(clk_counter), .PPU_start(PPU_start),
        .BRAM_number(4'd10), .BRAM_base(9'd0), .BRAM_size(1'b0), .BRAM_rw_counter_bits(4'b0001),
        .Compressed_FIFO_r_master(uni1_comp_r_master), .Compressed_FIFO_data(uni1_comp_data), .Compressed_FIFO_count({1'b0, uni1_comp_count}), .Compressed_FIFO_ena(uni1_comp_ena), .Compressed_FIFO_dequeue(uni1_comp_dequeue),
        .BRAM10_en_a(un1_b10_en_a), .BRAM10_we_a(un1_b10_we_a), .BRAM10_addr_a(un1_b10_addr_a), .BRAM10_din_a(un1_b10_din_a), .BRAM10_en_b(un1_b10_en_b), .BRAM10_addr_b(un1_b10_addr_b), .BRAM10_dout_b(BRAM10_dout_b),
        .BRAM11_en_a(), .BRAM11_we_a(), .BRAM11_addr_a(), .BRAM11_din_a(), .BRAM11_en_b(), .BRAM11_addr_b(), .BRAM11_dout_b(64'd0), // 미사용
        .BRAM12_en_a(), .BRAM12_we_a(), .BRAM12_addr_a(), .BRAM12_din_a(), .BRAM12_en_b(), .BRAM12_addr_b(), .BRAM12_dout_b(64'd0), // 미사용
        .Decompressed_FIFO_ena(uni1_decomp_ena), .Decompressed_FIFO_dequeue(uni1_decomp_dequeue), .Decompressed_FIFO_r_master(uni1_decomp_r_master), .Decompressed_FIFO_data(uni1_decomp_data), .Decompressed_FIFO_empty(uni1_decomp_empty)
    );

    Decompresser u_decomp_uni2 (
        .clk(clk), .resetn(resetn), .Clk_Counter(clk_counter), .PPU_start(PPU_start),
        .BRAM_number(4'd10), .BRAM_base(9'd128), .BRAM_size(1'b0), .BRAM_rw_counter_bits(4'b0010),
        .Compressed_FIFO_r_master(uni2_comp_r_master), .Compressed_FIFO_data(uni2_comp_data), .Compressed_FIFO_count({1'b0, uni2_comp_count}), .Compressed_FIFO_ena(uni2_comp_ena), .Compressed_FIFO_dequeue(uni2_comp_dequeue),
        .BRAM10_en_a(un2_b10_en_a), .BRAM10_we_a(un2_b10_we_a), .BRAM10_addr_a(un2_b10_addr_a), .BRAM10_din_a(un2_b10_din_a), .BRAM10_en_b(un2_b10_en_b), .BRAM10_addr_b(un2_b10_addr_b), .BRAM10_dout_b(BRAM10_dout_b),
        .BRAM11_en_a(), .BRAM11_we_a(), .BRAM11_addr_a(), .BRAM11_din_a(), .BRAM11_en_b(), .BRAM11_addr_b(), .BRAM11_dout_b(64'd0),
        .BRAM12_en_a(), .BRAM12_we_a(), .BRAM12_addr_a(), .BRAM12_din_a(), .BRAM12_en_b(), .BRAM12_addr_b(), .BRAM12_dout_b(64'd0),
        .Decompressed_FIFO_ena(uni2_decomp_ena), .Decompressed_FIFO_dequeue(uni2_decomp_dequeue), .Decompressed_FIFO_r_master(uni2_decomp_r_master), .Decompressed_FIFO_data(uni2_decomp_data), .Decompressed_FIFO_empty(uni2_decomp_empty)
    );

    Decompresser u_decomp_script (
        .clk(clk), .resetn(resetn), .Clk_Counter(clk_counter), .PPU_start(PPU_start),
        .BRAM_number(4'd10), .BRAM_base(9'd256), .BRAM_size(1'b0), .BRAM_rw_counter_bits(4'b0100),
        .Compressed_FIFO_r_master(sc_comp_r_master), .Compressed_FIFO_data(sc_comp_data), .Compressed_FIFO_count({1'b0, sc_comp_count}), .Compressed_FIFO_ena(sc_comp_ena), .Compressed_FIFO_dequeue(sc_comp_dequeue),
        .BRAM10_en_a(sc_b10_en_a), .BRAM10_we_a(sc_b10_we_a), .BRAM10_addr_a(sc_b10_addr_a), .BRAM10_din_a(sc_b10_din_a), .BRAM10_en_b(sc_b10_en_b), .BRAM10_addr_b(sc_b10_addr_b), .BRAM10_dout_b(BRAM10_dout_b),
        .BRAM11_en_a(), .BRAM11_we_a(), .BRAM11_addr_a(), .BRAM11_din_a(), .BRAM11_en_b(), .BRAM11_addr_b(), .BRAM11_dout_b(64'd0),
        .BRAM12_en_a(), .BRAM12_we_a(), .BRAM12_addr_a(), .BRAM12_din_a(), .BRAM12_en_b(), .BRAM12_addr_b(), .BRAM12_dout_b(64'd0),
        .Decompressed_FIFO_ena(sc_decomp_ena), .Decompressed_FIFO_dequeue(sc_decomp_dequeue), .Decompressed_FIFO_r_master(sc_decomp_r_master), .Decompressed_FIFO_data(sc_decomp_data), .Decompressed_FIFO_empty(sc_decomp_empty)
    );

    Decompresser u_decomp_status (
        .clk(clk), .resetn(resetn), .Clk_Counter(clk_counter), .PPU_start(PPU_start),
        .BRAM_number(4'd10), .BRAM_base(9'd384), .BRAM_size(1'b0), .BRAM_rw_counter_bits(4'b1000),
        .Compressed_FIFO_r_master(st_comp_r_master), .Compressed_FIFO_data(st_comp_data), .Compressed_FIFO_count({1'b0, st_comp_count}), .Compressed_FIFO_ena(st_comp_ena), .Compressed_FIFO_dequeue(st_comp_dequeue),
        .BRAM10_en_a(st_b10_en_a), .BRAM10_we_a(st_b10_we_a), .BRAM10_addr_a(st_b10_addr_a), .BRAM10_din_a(st_b10_din_a), .BRAM10_en_b(st_b10_en_b), .BRAM10_addr_b(st_b10_addr_b), .BRAM10_dout_b(BRAM10_dout_b),
        .BRAM11_en_a(), .BRAM11_we_a(), .BRAM11_addr_a(), .BRAM11_din_a(), .BRAM11_en_b(), .BRAM11_addr_b(), .BRAM11_dout_b(64'd0),
        .BRAM12_en_a(), .BRAM12_we_a(), .BRAM12_addr_a(), .BRAM12_din_a(), .BRAM12_en_b(), .BRAM12_addr_b(), .BRAM12_dout_b(64'd0),
        .Decompressed_FIFO_ena(st_decomp_ena), .Decompressed_FIFO_dequeue(st_decomp_dequeue), .Decompressed_FIFO_r_master(st_decomp_r_master), .Decompressed_FIFO_data(st_decomp_data), .Decompressed_FIFO_empty(st_decomp_empty)
    );

    // --- BRAM 11 Group (Character 1, 2, 3, 4) ---
    Decompresser u_decomp_ch1 (
        .clk(clk), .resetn(resetn), .Clk_Counter(clk_counter), .PPU_start(PPU_start),
        .BRAM_number(4'd11), .BRAM_base(9'd0), .BRAM_size(1'b0), .BRAM_rw_counter_bits(4'b0001),
        .Compressed_FIFO_r_master(ch1_comp_r_master), .Compressed_FIFO_data(ch1_comp_data), .Compressed_FIFO_count({1'b0, ch1_comp_count}), .Compressed_FIFO_ena(ch1_comp_ena), .Compressed_FIFO_dequeue(ch1_comp_dequeue),
        .BRAM10_en_a(), .BRAM10_we_a(), .BRAM10_addr_a(), .BRAM10_din_a(), .BRAM10_en_b(), .BRAM10_addr_b(), .BRAM10_dout_b(64'd0), // 미사용
        .BRAM11_en_a(ch1_b11_en_a), .BRAM11_we_a(ch1_b11_we_a), .BRAM11_addr_a(ch1_b11_addr_a), .BRAM11_din_a(ch1_b11_din_a), .BRAM11_en_b(ch1_b11_en_b), .BRAM11_addr_b(ch1_b11_addr_b), .BRAM11_dout_b(BRAM11_dout_b),
        .BRAM12_en_a(), .BRAM12_we_a(), .BRAM12_addr_a(), .BRAM12_din_a(), .BRAM12_en_b(), .BRAM12_addr_b(), .BRAM12_dout_b(64'd0),
        .Decompressed_FIFO_ena(ch1_decomp_ena), .Decompressed_FIFO_dequeue(ch1_decomp_dequeue), .Decompressed_FIFO_r_master(ch1_decomp_r_master), .Decompressed_FIFO_data(ch1_decomp_data), .Decompressed_FIFO_empty(ch1_decomp_empty)
    );

    Decompresser u_decomp_ch2 (
        .clk(clk), .resetn(resetn), .Clk_Counter(clk_counter), .PPU_start(PPU_start),
        .BRAM_number(4'd11), .BRAM_base(9'd128), .BRAM_size(1'b0), .BRAM_rw_counter_bits(4'b0010),
        .Compressed_FIFO_r_master(ch2_comp_r_master), .Compressed_FIFO_data(ch2_comp_data), .Compressed_FIFO_count({1'b0, ch2_comp_count}), .Compressed_FIFO_ena(ch2_comp_ena), .Compressed_FIFO_dequeue(ch2_comp_dequeue),
        .BRAM10_en_a(), .BRAM10_we_a(), .BRAM10_addr_a(), .BRAM10_din_a(), .BRAM10_en_b(), .BRAM10_addr_b(), .BRAM10_dout_b(64'd0),
        .BRAM11_en_a(ch2_b11_en_a), .BRAM11_we_a(ch2_b11_we_a), .BRAM11_addr_a(ch2_b11_addr_a), .BRAM11_din_a(ch2_b11_din_a), .BRAM11_en_b(ch2_b11_en_b), .BRAM11_addr_b(ch2_b11_addr_b), .BRAM11_dout_b(BRAM11_dout_b),
        .BRAM12_en_a(), .BRAM12_we_a(), .BRAM12_addr_a(), .BRAM12_din_a(), .BRAM12_en_b(), .BRAM12_addr_b(), .BRAM12_dout_b(64'd0),
        .Decompressed_FIFO_ena(ch2_decomp_ena), .Decompressed_FIFO_dequeue(ch2_decomp_dequeue), .Decompressed_FIFO_r_master(ch2_decomp_r_master), .Decompressed_FIFO_data(ch2_decomp_data), .Decompressed_FIFO_empty(ch2_decomp_empty)
    );

    Decompresser u_decomp_ch3 (
        .clk(clk), .resetn(resetn), .Clk_Counter(clk_counter), .PPU_start(PPU_start),
        .BRAM_number(4'd11), .BRAM_base(9'd256), .BRAM_size(1'b0), .BRAM_rw_counter_bits(4'b0100),
        .Compressed_FIFO_r_master(ch3_comp_r_master), .Compressed_FIFO_data(ch3_comp_data), .Compressed_FIFO_count({1'b0, ch3_comp_count}), .Compressed_FIFO_ena(ch3_comp_ena), .Compressed_FIFO_dequeue(ch3_comp_dequeue),
        .BRAM10_en_a(), .BRAM10_we_a(), .BRAM10_addr_a(), .BRAM10_din_a(), .BRAM10_en_b(), .BRAM10_addr_b(), .BRAM10_dout_b(64'd0),
        .BRAM11_en_a(ch3_b11_en_a), .BRAM11_we_a(ch3_b11_we_a), .BRAM11_addr_a(ch3_b11_addr_a), .BRAM11_din_a(ch3_b11_din_a), .BRAM11_en_b(ch3_b11_en_b), .BRAM11_addr_b(ch3_b11_addr_b), .BRAM11_dout_b(BRAM11_dout_b),
        .BRAM12_en_a(), .BRAM12_we_a(), .BRAM12_addr_a(), .BRAM12_din_a(), .BRAM12_en_b(), .BRAM12_addr_b(), .BRAM12_dout_b(64'd0),
        .Decompressed_FIFO_ena(ch3_decomp_ena), .Decompressed_FIFO_dequeue(ch3_decomp_dequeue), .Decompressed_FIFO_r_master(ch3_decomp_r_master), .Decompressed_FIFO_data(ch3_decomp_data), .Decompressed_FIFO_empty(ch3_decomp_empty)
    );

    Decompresser u_decomp_ch4 (
        .clk(clk), .resetn(resetn), .Clk_Counter(clk_counter), .PPU_start(PPU_start),
        .BRAM_number(4'd11), .BRAM_base(9'd384), .BRAM_size(1'b0), .BRAM_rw_counter_bits(4'b1000),
        .Compressed_FIFO_r_master(ch4_comp_r_master), .Compressed_FIFO_data(ch4_comp_data), .Compressed_FIFO_count({1'b0, ch4_comp_count}), .Compressed_FIFO_ena(ch4_comp_ena), .Compressed_FIFO_dequeue(ch4_comp_dequeue),
        .BRAM10_en_a(), .BRAM10_we_a(), .BRAM10_addr_a(), .BRAM10_din_a(), .BRAM10_en_b(), .BRAM10_addr_b(), .BRAM10_dout_b(64'd0),
        .BRAM11_en_a(ch4_b11_en_a), .BRAM11_we_a(ch4_b11_we_a), .BRAM11_addr_a(ch4_b11_addr_a), .BRAM11_din_a(ch4_b11_din_a), .BRAM11_en_b(ch4_b11_en_b), .BRAM11_addr_b(ch4_b11_addr_b), .BRAM11_dout_b(BRAM11_dout_b),
        .BRAM12_en_a(), .BRAM12_we_a(), .BRAM12_addr_a(), .BRAM12_din_a(), .BRAM12_en_b(), .BRAM12_addr_b(), .BRAM12_dout_b(64'd0),
        .Decompressed_FIFO_ena(ch4_decomp_ena), .Decompressed_FIFO_dequeue(ch4_decomp_dequeue), .Decompressed_FIFO_r_master(ch4_decomp_r_master), .Decompressed_FIFO_data(ch4_decomp_data), .Decompressed_FIFO_empty(ch4_decomp_empty)
    );

    // --- BRAM 12 Group (Background 1, 2) ---
    Decompresser u_decomp_bg1 (
        .clk(clk), .resetn(resetn), .Clk_Counter(clk_counter), .PPU_start(PPU_start),
        .BRAM_number(4'd12), .BRAM_base(9'd0), .BRAM_size(1'b1), .BRAM_rw_counter_bits(4'b0011),
        .Compressed_FIFO_r_master(bg1_comp_r_master), .Compressed_FIFO_data(bg1_comp_data), .Compressed_FIFO_count(bg1_comp_count), .Compressed_FIFO_ena(bg1_comp_ena), .Compressed_FIFO_dequeue(bg1_comp_dequeue),
        .BRAM10_en_a(), .BRAM10_we_a(), .BRAM10_addr_a(), .BRAM10_din_a(), .BRAM10_en_b(), .BRAM10_addr_b(), .BRAM10_dout_b(64'd0), // 미사용
        .BRAM11_en_a(), .BRAM11_we_a(), .BRAM11_addr_a(), .BRAM11_din_a(), .BRAM11_en_b(), .BRAM11_addr_b(), .BRAM11_dout_b(64'd0), // 미사용
        .BRAM12_en_a(bg1_b12_en_a), .BRAM12_we_a(bg1_b12_we_a), .BRAM12_addr_a(bg1_b12_addr_a), .BRAM12_din_a(bg1_b12_din_a), .BRAM12_en_b(bg1_b12_en_b), .BRAM12_addr_b(bg1_b12_addr_b), .BRAM12_dout_b(BRAM12_dout_b),
        .Decompressed_FIFO_ena(bg1_decomp_ena), .Decompressed_FIFO_dequeue(bg1_decomp_dequeue), .Decompressed_FIFO_r_master(bg1_decomp_r_master), .Decompressed_FIFO_data(bg1_decomp_data), .Decompressed_FIFO_empty(bg1_decomp_empty)
    );

    Decompresser u_decomp_bg2 (
        .clk(clk), .resetn(resetn), .Clk_Counter(clk_counter), .PPU_start(PPU_start),
        .BRAM_number(4'd12), .BRAM_base(9'd256), .BRAM_size(1'b1), .BRAM_rw_counter_bits(4'b1100),
        .Compressed_FIFO_r_master(bg2_comp_r_master), .Compressed_FIFO_data(bg2_comp_data), .Compressed_FIFO_count(bg2_comp_count), .Compressed_FIFO_ena(bg2_comp_ena), .Compressed_FIFO_dequeue(bg2_comp_dequeue),
        .BRAM10_en_a(), .BRAM10_we_a(), .BRAM10_addr_a(), .BRAM10_din_a(), .BRAM10_en_b(), .BRAM10_addr_b(), .BRAM10_dout_b(64'd0),
        .BRAM11_en_a(), .BRAM11_we_a(), .BRAM11_addr_a(), .BRAM11_din_a(), .BRAM11_en_b(), .BRAM11_addr_b(), .BRAM11_dout_b(64'd0),
        .BRAM12_en_a(bg2_b12_en_a), .BRAM12_we_a(bg2_b12_we_a), .BRAM12_addr_a(bg2_b12_addr_a), .BRAM12_din_a(bg2_b12_din_a), .BRAM12_en_b(bg2_b12_en_b), .BRAM12_addr_b(bg2_b12_addr_b), .BRAM12_dout_b(BRAM12_dout_b),
        .Decompressed_FIFO_ena(bg2_decomp_ena), .Decompressed_FIFO_dequeue(bg2_decomp_dequeue), .Decompressed_FIFO_r_master(bg2_decomp_r_master), .Decompressed_FIFO_data(bg2_decomp_data), .Decompressed_FIFO_empty(bg2_decomp_empty)
    );

    // =========================================================================
    // Decompresser 모듈의 BRAM 신호 TDM Multiplexing (OR 로직)
    // TDM 구조이므로 비활성화된 모듈은 0을 출력하여 OR 연산만으로 완벽히 병합됨.
    // =========================================================================

    // BRAM 10 통합
    assign BRAM10_en_a   = un1_b10_en_a | un2_b10_en_a | sc_b10_en_a | st_b10_en_a;
    assign BRAM10_we_a   = un1_b10_we_a | un2_b10_we_a | sc_b10_we_a | st_b10_we_a;
    assign BRAM10_addr_a = un1_b10_addr_a | un2_b10_addr_a | sc_b10_addr_a | st_b10_addr_a;
    assign BRAM10_din_a  = un1_b10_din_a | un2_b10_din_a | sc_b10_din_a | st_b10_din_a;
    assign BRAM10_en_b   = un1_b10_en_b | un2_b10_en_b | sc_b10_en_b | st_b10_en_b;
    assign BRAM10_addr_b = un1_b10_addr_b | un2_b10_addr_b | sc_b10_addr_b | st_b10_addr_b;

    // BRAM 11 통합
    assign BRAM11_en_a   = ch1_b11_en_a | ch2_b11_en_a | ch3_b11_en_a | ch4_b11_en_a;
    assign BRAM11_we_a   = ch1_b11_we_a | ch2_b11_we_a | ch3_b11_we_a | ch4_b11_we_a;
    assign BRAM11_addr_a = ch1_b11_addr_a | ch2_b11_addr_a | ch3_b11_addr_a | ch4_b11_addr_a;
    assign BRAM11_din_a  = ch1_b11_din_a | ch2_b11_din_a | ch3_b11_din_a | ch4_b11_din_a;
    assign BRAM11_en_b   = ch1_b11_en_b | ch2_b11_en_b | ch3_b11_en_b | ch4_b11_en_b;
    assign BRAM11_addr_b = ch1_b11_addr_b | ch2_b11_addr_b | ch3_b11_addr_b | ch4_b11_addr_b;

    // BRAM 12 통합
    assign BRAM12_en_a   = bg1_b12_en_a | bg2_b12_en_a;
    assign BRAM12_we_a   = bg1_b12_we_a | bg2_b12_we_a;
    assign BRAM12_addr_a = bg1_b12_addr_a | bg2_b12_addr_a;
    assign BRAM12_din_a  = bg1_b12_din_a | bg2_b12_din_a;
    assign BRAM12_en_b   = bg1_b12_en_b | bg2_b12_en_b;
    assign BRAM12_addr_b = bg1_b12_addr_b | bg2_b12_addr_b;

endmodule