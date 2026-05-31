module PPU_TOP(
    input clk,
    input resetn,
    input PPU_start,

    // External memory (EMEM) passthrough from pixel_fifo_top
    output EMEM_valid,
    input  EMEM_ready,
    output [31:0] EMEM_addr,
    output [31:0] EMEM_wdata,
    output [3:0]  EMEM_wstrb,
    input  [31:0] EMEM_rdata,
    output [7:0]  EMEM_burst_len,
    output EMEM_burst_en,

    // BRAM 7/8/9 (compressed FIFOs) - passthrough to external BRAM
    output BRAM7_en_a, output [0:0] BRAM7_we_a, output [8:0] BRAM7_addr_a, output [63:0] BRAM7_din_a,
    output BRAM7_en_b, output [8:0] BRAM7_addr_b, input  [63:0] BRAM7_dout_b,
    output BRAM8_en_a, output [0:0] BRAM8_we_a, output [8:0] BRAM8_addr_a, output [63:0] BRAM8_din_a,
    output BRAM8_en_b, output [8:0] BRAM8_addr_b, input  [63:0] BRAM8_dout_b,
    output BRAM9_en_a, output [0:0] BRAM9_we_a, output [8:0] BRAM9_addr_a, output [63:0] BRAM9_din_a,
    output BRAM9_en_b, output [8:0] BRAM9_addr_b, input  [63:0] BRAM9_dout_b,

    // BRAM 10/11/12 (decompressed data) - passthrough
    output BRAM10_en_a, output [0:0] BRAM10_we_a, output [8:0] BRAM10_addr_a, output [63:0] BRAM10_din_a,
    output BRAM10_en_b, output [8:0] BRAM10_addr_b, input  [63:0] BRAM10_dout_b,
    output BRAM11_en_a, output [0:0] BRAM11_we_a, output [8:0] BRAM11_addr_a, output [63:0] BRAM11_din_a,
    output BRAM11_en_b, output [8:0] BRAM11_addr_b, input  [63:0] BRAM11_dout_b,
    output BRAM12_en_a, output [0:0] BRAM12_we_a, output [8:0] BRAM12_addr_a, output [63:0] BRAM12_din_a,
    output BRAM12_en_b, output [8:0] BRAM12_addr_b, input  [63:0] BRAM12_dout_b,

    // Distribute RAM (LUT) interface (exposed)
    output wire LUT_we,
    output wire [7:0] LUT_addr_w,
    output wire [17:0] LUT_data_in,
    output wire [7:0] LUT_addr_r1,
    input  wire [17:0] LUT_data_out1,
    output wire [7:0] LUT_addr_r2,
    input  wire [17:0] LUT_data_out2,

    // Final pixel output
    output Final_pixel_valid,
    output [17:0] Final_pixel_RGB
);

// -----------------------------------------------------------------------------
// Internal Clk_Counter generation (2-bit) — shared by Decompressers/Readers/Converter
// -----------------------------------------------------------------------------
reg [1:0] Clk_Counter;
always @(posedge clk or negedge resetn) begin
    if(!resetn) Clk_Counter <= 2'b00;
    else Clk_Counter <= Clk_Counter + 1'b1;
end

// -----------------------------------------------------------------------------
// Instantiate pixel_fifo_top
// -----------------------------------------------------------------------------
// Some signals (decompressed FIFO side) are connected between pixel_fifo_top and Pixel_Reader instances below.

// Decompressed FIFO wires (from pixel_fifo_top outputs -> to Pixel_Reader inputs)
wire uni1_decomp_r_master; wire [63:0] uni1_decomp_data; wire uni1_decomp_empty; wire uni1_decomp_dequeue;
wire uni2_decomp_r_master; wire [63:0] uni2_decomp_data; wire uni2_decomp_empty; wire uni2_decomp_dequeue;
wire sc_decomp_r_master;   wire [63:0] sc_decomp_data;   wire sc_decomp_empty;   wire sc_decomp_dequeue;
wire st_decomp_r_master;   wire [63:0] st_decomp_data;   wire st_decomp_empty;   wire st_decomp_dequeue;
wire ch1_decomp_r_master;  wire [63:0] ch1_decomp_data;  wire ch1_decomp_empty;  wire ch1_decomp_dequeue;
wire ch2_decomp_r_master;  wire [63:0] ch2_decomp_data;  wire ch2_decomp_empty;  wire ch2_decomp_dequeue;
wire ch3_decomp_r_master;  wire [63:0] ch3_decomp_data;  wire ch3_decomp_empty;  wire ch3_decomp_dequeue;
wire ch4_decomp_r_master;  wire [63:0] ch4_decomp_data;  wire ch4_decomp_empty;  wire ch4_decomp_dequeue;
wire bg1_decomp_r_master;  wire [63:0] bg1_decomp_data;  wire bg1_decomp_empty;  wire bg1_decomp_dequeue;
wire bg2_decomp_r_master;  wire [63:0] bg2_decomp_data;  wire bg2_decomp_empty;  wire bg2_decomp_dequeue;

// We'll expose decompressed FIFO enable inputs as tied-high so decomp modules always enable their FIFO output.
wire uni1_decomp_ena = 1'b1;
wire uni2_decomp_ena = 1'b1;
wire sc_decomp_ena   = 1'b1;
wire st_decomp_ena   = 1'b1;
wire ch1_decomp_ena  = 1'b1;
wire ch2_decomp_ena  = 1'b1;
wire ch3_decomp_ena  = 1'b1;
wire ch4_decomp_ena  = 1'b1;
wire bg1_decomp_ena  = 1'b1;
wire bg2_decomp_ena  = 1'b1;

pixel_fifo_top u_pixel_fifo (
    .clk(clk), .resetn(resetn), .PPU_start(PPU_start), .Clk_Counter(Clk_Counter),

    .Universal_Layer1_Address(32'd0), // address inputs are left 0 (external memory setup done via BRAM writes in tests)
    .Universal_Layer2_Address(32'd0),
    .Script_Layer_Address(32'd0),
    .Status_Layer_Address(32'd0),
    .Character_Layer1_Address(32'd0),
    .Character_Layer2_Address(32'd0),
    .Character_Layer3_Address(32'd0),
    .Character_Layer4_Address(32'd0),
    .Background_Layer1_Address(32'd0),
    .Background_Layer2_Address(32'd0),

    .EMEM_valid(EMEM_valid), .EMEM_ready(EMEM_ready), .EMEM_addr(EMEM_addr),
    .EMEM_wdata(EMEM_wdata), .EMEM_wstrb(EMEM_wstrb), .EMEM_rdata(EMEM_rdata),
    .EMEM_burst_len(EMEM_burst_len), .EMEM_burst_en(EMEM_burst_en),

    .BRAM7_en_a(BRAM7_en_a), .BRAM7_we_a(BRAM7_we_a), .BRAM7_addr_a(BRAM7_addr_a), .BRAM7_din_a(BRAM7_din_a),
    .BRAM7_en_b(BRAM7_en_b), .BRAM7_addr_b(BRAM7_addr_b), .BRAM7_dout_b(BRAM7_dout_b),
    .BRAM8_en_a(BRAM8_en_a), .BRAM8_we_a(BRAM8_we_a), .BRAM8_addr_a(BRAM8_addr_a), .BRAM8_din_a(BRAM8_din_a),
    .BRAM8_en_b(BRAM8_en_b), .BRAM8_addr_b(BRAM8_addr_b), .BRAM8_dout_b(BRAM8_dout_b),
    .BRAM9_en_a(BRAM9_en_a), .BRAM9_we_a(BRAM9_we_a), .BRAM9_addr_a(BRAM9_addr_a), .BRAM9_din_a(BRAM9_din_a),
    .BRAM9_en_b(BRAM9_en_b), .BRAM9_addr_b(BRAM9_addr_b), .BRAM9_dout_b(BRAM9_dout_b),

    .BRAM10_en_a(BRAM10_en_a), .BRAM10_we_a(BRAM10_we_a), .BRAM10_addr_a(BRAM10_addr_a), .BRAM10_din_a(BRAM10_din_a),
    .BRAM10_en_b(BRAM10_en_b), .BRAM10_addr_b(BRAM10_addr_b), .BRAM10_dout_b(BRAM10_dout_b),
    .BRAM11_en_a(BRAM11_en_a), .BRAM11_we_a(BRAM11_we_a), .BRAM11_addr_a(BRAM11_addr_a), .BRAM11_din_a(BRAM11_din_a),
    .BRAM11_en_b(BRAM11_en_b), .BRAM11_addr_b(BRAM11_addr_b), .BRAM11_dout_b(BRAM11_dout_b),
    .BRAM12_en_a(BRAM12_en_a), .BRAM12_we_a(BRAM12_we_a), .BRAM12_addr_a(BRAM12_addr_a), .BRAM12_din_a(BRAM12_din_a),
    .BRAM12_en_b(BRAM12_en_b), .BRAM12_addr_b(BRAM12_addr_b), .BRAM12_dout_b(BRAM12_dout_b),

    // Decompressed FIFO external interface (we connect these outputs to Pixel_Reader instances below)
    .uni1_decomp_ena(uni1_decomp_ena), .uni1_decomp_dequeue(uni1_decomp_dequeue), .uni1_decomp_r_master(uni1_decomp_r_master), .uni1_decomp_data(uni1_decomp_data), .uni1_decomp_empty(uni1_decomp_empty),
    .uni2_decomp_ena(uni2_decomp_ena), .uni2_decomp_dequeue(uni2_decomp_dequeue), .uni2_decomp_r_master(uni2_decomp_r_master), .uni2_decomp_data(uni2_decomp_data), .uni2_decomp_empty(uni2_decomp_empty),
    .sc_decomp_ena(sc_decomp_ena),   .sc_decomp_dequeue(sc_decomp_dequeue),   .sc_decomp_r_master(sc_decomp_r_master),   .sc_decomp_data(sc_decomp_data),   .sc_decomp_empty(sc_decomp_empty),
    .st_decomp_ena(st_decomp_ena),   .st_decomp_dequeue(st_decomp_dequeue),   .st_decomp_r_master(st_decomp_r_master),   .st_decomp_data(st_decomp_data),   .st_decomp_empty(st_decomp_empty),
    .ch1_decomp_ena(ch1_decomp_ena), .ch1_decomp_dequeue(ch1_decomp_dequeue), .ch1_decomp_r_master(ch1_decomp_r_master), .ch1_decomp_data(ch1_decomp_data), .ch1_decomp_empty(ch1_decomp_empty),
    .ch2_decomp_ena(ch2_decomp_ena), .ch2_decomp_dequeue(ch2_decomp_dequeue), .ch2_decomp_r_master(ch2_decomp_r_master), .ch2_decomp_data(ch2_decomp_data), .ch2_decomp_empty(ch2_decomp_empty),
    .ch3_decomp_ena(ch3_decomp_ena), .ch3_decomp_dequeue(ch3_decomp_dequeue), .ch3_decomp_r_master(ch3_decomp_r_master), .ch3_decomp_data(ch3_decomp_data), .ch3_decomp_empty(ch3_decomp_empty),
    .ch4_decomp_ena(ch4_decomp_ena), .ch4_decomp_dequeue(ch4_decomp_dequeue), .ch4_decomp_r_master(ch4_decomp_r_master), .ch4_decomp_data(ch4_decomp_data), .ch4_decomp_empty(ch4_decomp_empty),
    .bg1_decomp_ena(bg1_decomp_ena), .bg1_decomp_dequeue(bg1_decomp_dequeue), .bg1_decomp_r_master(bg1_decomp_r_master), .bg1_decomp_data(bg1_decomp_data), .bg1_decomp_empty(bg1_decomp_empty),
    .bg2_decomp_ena(bg2_decomp_ena), .bg2_decomp_dequeue(bg2_decomp_dequeue), .bg2_decomp_r_master(bg2_decomp_r_master), .bg2_decomp_data(bg2_decomp_data), .bg2_decomp_empty(bg2_decomp_empty)
);

// -----------------------------------------------------------------------------
// Instantiate RGB_Converter
// -----------------------------------------------------------------------------
// We map up to 12 request channels; Pixel_Reader instances below will use Req1..Req10.
wire [17:0] Req_RGB [12:1];
wire Req_trans [12:1];
wire Req_end [12:1];

RGB_Converter u_rgb (
    .clk(clk), .resetn(resetn), .Clk_Counter(Clk_Counter), .PPU_start(PPU_start),

    // small LUT write inputs (exposed)
    .LUT_we(LUT_we), .LUT_addr_w(LUT_addr_w), .LUT_data_in(LUT_data_in),
    .LUT_addr_r1(LUT_addr_r1), .LUT_data_out1(LUT_data_out1), .LUT_addr_r2(LUT_addr_r2), .LUT_data_out2(LUT_data_out2),

    // Requests (connect below)
    .Req1_ena(Req1_ena), .Req1_pixel(Req1_pixel), .Req1_RGB(Req_RGB[1]), .Req1_trans(Req_trans[1]), .Req1_end(Req_end[1]),
    .Req2_ena(Req2_ena), .Req2_pixel(Req2_pixel), .Req2_RGB(Req_RGB[2]), .Req2_trans(Req_trans[2]), .Req2_end(Req_end[2]),
    .Req3_ena(Req3_ena), .Req3_pixel(Req3_pixel), .Req3_RGB(Req_RGB[3]), .Req3_trans(Req_trans[3]), .Req3_end(Req_end[3]),
    .Req4_ena(Req4_ena), .Req4_pixel(Req4_pixel), .Req4_RGB(Req_RGB[4]), .Req4_trans(Req_trans[4]), .Req4_end(Req_end[4]),
    .Req5_ena(Req5_ena), .Req5_pixel(Req5_pixel), .Req5_RGB(Req_RGB[5]), .Req5_trans(Req_trans[5]), .Req5_end(Req_end[5]),
    .Req6_ena(Req6_ena), .Req6_pixel(Req6_pixel), .Req6_RGB(Req_RGB[6]), .Req6_trans(Req_trans[6]), .Req6_end(Req_end[6]),
    .Req7_ena(Req7_ena), .Req7_pixel(Req7_pixel), .Req7_RGB(Req_RGB[7]), .Req7_trans(Req_trans[7]), .Req7_end(Req_end[7]),
    .Req8_ena(Req8_ena), .Req8_pixel(Req8_pixel), .Req8_RGB(Req_RGB[8]), .Req8_trans(Req_trans[8]), .Req8_end(Req_end[8]),
    .Req9_ena(Req9_ena), .Req9_pixel(Req9_pixel), .Req9_RGB(Req_RGB[9]), .Req9_trans(Req_trans[9]), .Req9_end(Req_end[9]),
    .Req10_ena(Req10_ena), .Req10_pixel(Req10_pixel), .Req10_RGB(Req_RGB[10]), .Req10_trans(Req_trans[10]), .Req10_end(Req_end[10]),
    .Req11_ena(1'b0), .Req11_pixel(8'd0), .Req11_RGB(Req_RGB[11]), .Req11_trans(Req_trans[11]), .Req11_end(Req_end[11]),
    .Req12_ena(1'b0), .Req12_pixel(8'd0), .Req12_RGB(Req_RGB[12]), .Req12_trans(Req_trans[12]), .Req12_end(Req_end[12])
);

// Wires to connect RGB_Converter request ports; declared as regs/wires below for each reader
wire Req1_ena; wire [7:0] Req1_pixel;
wire Req2_ena; wire [7:0] Req2_pixel;
wire Req3_ena; wire [7:0] Req3_pixel;
wire Req4_ena; wire [7:0] Req4_pixel;
wire Req5_ena; wire [7:0] Req5_pixel;
wire Req6_ena; wire [7:0] Req6_pixel;
wire Req7_ena; wire [7:0] Req7_pixel;
wire Req8_ena; wire [7:0] Req8_pixel;
wire Req9_ena; wire [7:0] Req9_pixel;
wire Req10_ena; wire [7:0] Req10_pixel;

// -----------------------------------------------------------------------------
// Instantiate Pixel_Reader instances (10) and connect to Pixel_Processer
// -----------------------------------------------------------------------------
// Per-layer signals between reader and processer

// Background1 (map to Pixel_Reader instance A)
wire BG1_Pixel_valid; wire [17:0] BG1_Pixel_RGB; wire BG1_Pixel_is_trans; wire BG1_Pixel_ready;
// Background2
wire BG2_Pixel_valid; wire [17:0] BG2_Pixel_RGB; wire BG2_Pixel_is_trans; wire BG2_Pixel_ready;
// Character1..4
wire CH1_Pixel_valid; wire [17:0] CH1_Pixel_RGB; wire CH1_Pixel_is_trans; wire CH1_Pixel_ready;
wire CH2_Pixel_valid; wire [17:0] CH2_Pixel_RGB; wire CH2_Pixel_is_trans; wire CH2_Pixel_ready;
wire CH3_Pixel_valid; wire [17:0] CH3_Pixel_RGB; wire CH3_Pixel_is_trans; wire CH3_Pixel_ready;
wire CH4_Pixel_valid; wire [17:0] CH4_Pixel_RGB; wire CH4_Pixel_is_trans; wire CH4_Pixel_ready;
// Script
wire SC_Pixel_valid; wire [17:0] SC_Pixel_RGB; wire SC_Pixel_is_trans; wire SC_Pixel_ready;
// Status
wire ST_Pixel_valid; wire [17:0] ST_Pixel_RGB; wire ST_Pixel_is_trans; wire ST_Pixel_ready;
// Universal1
wire UN1_Pixel_valid; wire [17:0] UN1_Pixel_RGB; wire UN1_Pixel_is_trans; wire UN1_Pixel_ready;
// Universal2
wire UN2_Pixel_valid; wire [17:0] UN2_Pixel_RGB; wire UN2_Pixel_is_trans; wire UN2_Pixel_ready;

// Control/config inputs for readers/processer (expose minimal set as top-level regs)
// For brevity, tie coordinates to 0 here — testbench can modify PPU_TOP if needed later.
wire [15:0] Background1_SCX = 16'd0; wire [15:0] Background1_SCY = 16'd0;
wire [15:0] Background2_SCX = 16'd0; wire [15:0] Background2_SCY = 16'd0;
wire [15:0] Character1_WX = 16'd0; wire [15:0] Character1_WY = 16'd0;
wire [15:0] Character2_WX = 16'd0; wire [15:0] Character2_WY = 16'd0;
wire [15:0] Character3_WX = 16'd0; wire [15:0] Character3_WY = 16'd0;
wire [15:0] Character4_WX = 16'd0; wire [15:0] Character4_WY = 16'd0;
wire [15:0] Script_WX = 16'd0; wire [15:0] Script_WY = 16'd0;
wire [15:0] Status_WX = 16'd0; wire [15:0] Status_WY = 16'd0;
wire [15:0] Universal1_WX = 16'd0; wire [15:0] Universal1_WY = 16'd0;
wire [15:0] Universal2_WX = 16'd0; wire [15:0] Universal2_WY = 16'd0;

// Layer alpha and z controls — expose as knobs to testbench if needed; tie defaults
wire [7:0] Background1_a = 8'd16; wire [7:0] Background1_z = 8'd1;
wire [7:0] Background2_a = 8'd16; wire [7:0] Background2_z = 8'd2;
wire [7:0] Character1_a = 8'd16; wire [7:0] Character1_z = 8'd3;
wire [7:0] Character2_a = 8'd16; wire [7:0] Character2_z = 8'd4;
wire [7:0] Character3_a = 8'd16; wire [7:0] Character3_z = 8'd5;
wire [7:0] Character4_a = 8'd16; wire [7:0] Character4_z = 8'd6;
wire [7:0] Script_a = 8'd16; wire [7:0] Script_z = 8'd7;
wire [7:0] Status_a = 8'd16; wire [7:0] Status_z = 8'd8;
wire [7:0] Universal1_a = 8'd16; wire [7:0] Universal1_z = 8'd9;
wire [7:0] Universal2_a = 8'd16; wire [7:0] Universal2_z = 8'd10;

// Pixel_Reader instances

Pixel_Reader u_bg1 (
    .clk(clk), .resetn(resetn), .Clk_Counter(Clk_Counter), .PPU_start(PPU_start),
    .is_background(1'b1), .is_character(1'b0), .is_status(1'b0), .is_script(1'b0), .is_universal(1'b0),
    .WX(Background1_SCX), .WY(Background1_SCY), .SCX(Background1_SCX), .SCY(Background1_SCY),
    .Pixel_valid(BG1_Pixel_valid), .Pixel_RGB(BG1_Pixel_RGB), .Pixel_is_trans(BG1_Pixel_is_trans), .Pixel_ready(BG1_Pixel_ready),
    .Decomp_fifo_r_master(uni1_decomp_r_master), .Decomp_fifo_empty(uni1_decomp_empty), .Decomp_fifo_data(uni1_decomp_data), .Decomp_fifo_dequeue(uni1_decomp_dequeue),
    .Lookup_ena(Req1_ena), .Lookup_pixel(Req1_pixel), .Lookup_end(Req_end[1]), .Lookup_RGB(Req_RGB[1]), .Lookup_trans(Req_trans[1])
);

Pixel_Reader u_bg2 (
    .clk(clk), .resetn(resetn), .Clk_Counter(Clk_Counter), .PPU_start(PPU_start),
    .is_background(1'b1), .is_character(1'b0), .is_status(1'b0), .is_script(1'b0), .is_universal(1'b0),
    .WX(Background2_SCX), .WY(Background2_SCY), .SCX(Background2_SCX), .SCY(Background2_SCY),
    .Pixel_valid(BG2_Pixel_valid), .Pixel_RGB(BG2_Pixel_RGB), .Pixel_is_trans(BG2_Pixel_is_trans), .Pixel_ready(BG2_Pixel_ready),
    .Decomp_fifo_r_master(bg1_decomp_r_master), .Decomp_fifo_empty(bg1_decomp_empty), .Decomp_fifo_data(bg1_decomp_data), .Decomp_fifo_dequeue(bg1_decomp_dequeue),
    .Lookup_ena(Req2_ena), .Lookup_pixel(Req2_pixel), .Lookup_end(Req_end[2]), .Lookup_RGB(Req_RGB[2]), .Lookup_trans(Req_trans[2])
);

Pixel_Reader u_ch1 (
    .clk(clk), .resetn(resetn), .Clk_Counter(Clk_Counter), .PPU_start(PPU_start),
    .is_background(1'b0), .is_character(1'b1), .is_status(1'b0), .is_script(1'b0), .is_universal(1'b0),
    .WX(Character1_WX), .WY(Character1_WY), .SCX(16'd0), .SCY(16'd0),
    .Pixel_valid(CH1_Pixel_valid), .Pixel_RGB(CH1_Pixel_RGB), .Pixel_is_trans(CH1_Pixel_is_trans), .Pixel_ready(CH1_Pixel_ready),
    .Decomp_fifo_r_master(ch1_decomp_r_master), .Decomp_fifo_empty(ch1_decomp_empty), .Decomp_fifo_data(ch1_decomp_data), .Decomp_fifo_dequeue(ch1_decomp_dequeue),
    .Lookup_ena(Req3_ena), .Lookup_pixel(Req3_pixel), .Lookup_end(Req_end[3]), .Lookup_RGB(Req_RGB[3]), .Lookup_trans(Req_trans[3])
);

Pixel_Reader u_ch2 (
    .clk(clk), .resetn(resetn), .Clk_Counter(Clk_Counter), .PPU_start(PPU_start),
    .is_background(1'b0), .is_character(1'b1), .is_status(1'b0), .is_script(1'b0), .is_universal(1'b0),
    .WX(Character2_WX), .WY(Character2_WY), .SCX(16'd0), .SCY(16'd0),
    .Pixel_valid(CH2_Pixel_valid), .Pixel_RGB(CH2_Pixel_RGB), .Pixel_is_trans(CH2_Pixel_is_trans), .Pixel_ready(CH2_Pixel_ready),
    .Decomp_fifo_r_master(ch2_decomp_r_master), .Decomp_fifo_empty(ch2_decomp_empty), .Decomp_fifo_data(ch2_decomp_data), .Decomp_fifo_dequeue(ch2_decomp_dequeue),
    .Lookup_ena(Req4_ena), .Lookup_pixel(Req4_pixel), .Lookup_end(Req_end[4]), .Lookup_RGB(Req_RGB[4]), .Lookup_trans(Req_trans[4])
);

Pixel_Reader u_ch3 (
    .clk(clk), .resetn(resetn), .Clk_Counter(Clk_Counter), .PPU_start(PPU_start),
    .is_background(1'b0), .is_character(1'b1), .is_status(1'b0), .is_script(1'b0), .is_universal(1'b0),
    .WX(Character3_WX), .WY(Character3_WY), .SCX(16'd0), .SCY(16'd0),
    .Pixel_valid(CH3_Pixel_valid), .Pixel_RGB(CH3_Pixel_RGB), .Pixel_is_trans(CH3_Pixel_is_trans), .Pixel_ready(CH3_Pixel_ready),
    .Decomp_fifo_r_master(ch3_decomp_r_master), .Decomp_fifo_empty(ch3_decomp_empty), .Decomp_fifo_data(ch3_decomp_data), .Decomp_fifo_dequeue(ch3_decomp_dequeue),
    .Lookup_ena(Req5_ena), .Lookup_pixel(Req5_pixel), .Lookup_end(Req_end[5]), .Lookup_RGB(Req_RGB[5]), .Lookup_trans(Req_trans[5])
);

Pixel_Reader u_ch4 (
    .clk(clk), .resetn(resetn), .Clk_Counter(Clk_Counter), .PPU_start(PPU_start),
    .is_background(1'b0), .is_character(1'b1), .is_status(1'b0), .is_script(1'b0), .is_universal(1'b0),
    .WX(Character4_WX), .WY(Character4_WY), .SCX(16'd0), .SCY(16'd0),
    .Pixel_valid(CH4_Pixel_valid), .Pixel_RGB(CH4_Pixel_RGB), .Pixel_is_trans(CH4_Pixel_is_trans), .Pixel_ready(CH4_Pixel_ready),
    .Decomp_fifo_r_master(ch4_decomp_r_master), .Decomp_fifo_empty(ch4_decomp_empty), .Decomp_fifo_data(ch4_decomp_data), .Decomp_fifo_dequeue(ch4_decomp_dequeue),
    .Lookup_ena(Req6_ena), .Lookup_pixel(Req6_pixel), .Lookup_end(Req_end[6]), .Lookup_RGB(Req_RGB[6]), .Lookup_trans(Req_trans[6])
);

Pixel_Reader u_sc (
    .clk(clk), .resetn(resetn), .Clk_Counter(Clk_Counter), .PPU_start(PPU_start),
    .is_background(1'b0), .is_character(1'b0), .is_status(1'b0), .is_script(1'b1), .is_universal(1'b0),
    .WX(Script_WX), .WY(Script_WY), .SCX(16'd0), .SCY(16'd0),
    .Pixel_valid(SC_Pixel_valid), .Pixel_RGB(SC_Pixel_RGB), .Pixel_is_trans(SC_Pixel_is_trans), .Pixel_ready(SC_Pixel_ready),
    .Decomp_fifo_r_master(sc_decomp_r_master), .Decomp_fifo_empty(sc_decomp_empty), .Decomp_fifo_data(sc_decomp_data), .Decomp_fifo_dequeue(sc_decomp_dequeue),
    .Lookup_ena(Req7_ena), .Lookup_pixel(Req7_pixel), .Lookup_end(Req_end[7]), .Lookup_RGB(Req_RGB[7]), .Lookup_trans(Req_trans[7])
);

Pixel_Reader u_st (
    .clk(clk), .resetn(resetn), .Clk_Counter(Clk_Counter), .PPU_start(PPU_start),
    .is_background(1'b0), .is_character(1'b0), .is_status(1'b1), .is_script(1'b0), .is_universal(1'b0),
    .WX(Status_WX), .WY(Status_WY), .SCX(16'd0), .SCY(16'd0),
    .Pixel_valid(ST_Pixel_valid), .Pixel_RGB(ST_Pixel_RGB), .Pixel_is_trans(ST_Pixel_is_trans), .Pixel_ready(ST_Pixel_ready),
    .Decomp_fifo_r_master(st_decomp_r_master), .Decomp_fifo_empty(st_decomp_empty), .Decomp_fifo_data(st_decomp_data), .Decomp_fifo_dequeue(st_decomp_dequeue),
    .Lookup_ena(Req8_ena), .Lookup_pixel(Req8_pixel), .Lookup_end(Req_end[8]), .Lookup_RGB(Req_RGB[8]), .Lookup_trans(Req_trans[8])
);

Pixel_Reader u_un1 (
    .clk(clk), .resetn(resetn), .Clk_Counter(Clk_Counter), .PPU_start(PPU_start),
    .is_background(1'b0), .is_character(1'b0), .is_status(1'b0), .is_script(1'b0), .is_universal(1'b1),
    .WX(Universal1_WX), .WY(Universal1_WY), .SCX(16'd0), .SCY(16'd0),
    .Pixel_valid(UN1_Pixel_valid), .Pixel_RGB(UN1_Pixel_RGB), .Pixel_is_trans(UN1_Pixel_is_trans), .Pixel_ready(UN1_Pixel_ready),
    .Decomp_fifo_r_master(uni2_decomp_r_master), .Decomp_fifo_empty(uni2_decomp_empty), .Decomp_fifo_data(uni2_decomp_data), .Decomp_fifo_dequeue(uni2_decomp_dequeue),
    .Lookup_ena(Req9_ena), .Lookup_pixel(Req9_pixel), .Lookup_end(Req_end[9]), .Lookup_RGB(Req_RGB[9]), .Lookup_trans(Req_trans[9])
);

Pixel_Reader u_un2 (
    .clk(clk), .resetn(resetn), .Clk_Counter(Clk_Counter), .PPU_start(PPU_start),
    .is_background(1'b0), .is_character(1'b0), .is_status(1'b0), .is_script(1'b0), .is_universal(1'b1),
    .WX(Universal2_WX), .WY(Universal2_WY), .SCX(16'd0), .SCY(16'd0),
    .Pixel_valid(UN2_Pixel_valid), .Pixel_RGB(UN2_Pixel_RGB), .Pixel_is_trans(UN2_Pixel_is_trans), .Pixel_ready(UN2_Pixel_ready),
    .Decomp_fifo_r_master(ch4_decomp_r_master), .Decomp_fifo_empty(ch4_decomp_empty), .Decomp_fifo_data(ch4_decomp_data), .Decomp_fifo_dequeue(ch4_decomp_dequeue),
    .Lookup_ena(Req10_ena), .Lookup_pixel(Req10_pixel), .Lookup_end(Req_end[10]), .Lookup_RGB(Req_RGB[10]), .Lookup_trans(Req_trans[10])
);

// Note: For simplicity some of the Decomp FIFO connections above reused ch4 wires for un2; adapt in testbench if needed.

// -----------------------------------------------------------------------------
// Instantiate Pixel_Processer and connect layer pixel signals
// -----------------------------------------------------------------------------
Pixel_Processer u_proc (
    .clk(clk), .resetn(resetn), .PPU_start(PPU_start),

    .Background1_a(Background1_a), .Background1_z(Background1_z),
    .Background1_pixel_valid(BG1_Pixel_valid), .Background1_pixel_RGB(BG1_Pixel_RGB), .Background1_pixel_is_trans(BG1_Pixel_is_trans), .Background1_pixel_ready(BG1_Pixel_ready),

    .Background2_a(Background2_a), .Background2_z(Background2_z),
    .Background2_pixel_valid(BG2_Pixel_valid), .Background2_pixel_RGB(BG2_Pixel_RGB), .Background2_pixel_is_trans(BG2_Pixel_is_trans), .Background2_pixel_ready(BG2_Pixel_ready),

    .Character1_a(Character1_a), .Character1_z(Character1_z),
    .Character1_pixel_valid(CH1_Pixel_valid), .Character1_pixel_RGB(CH1_Pixel_RGB), .Character1_pixel_is_trans(CH1_Pixel_is_trans), .Character1_pixel_ready(CH1_Pixel_ready),

    .Character2_a(Character2_a), .Character2_z(Character2_z),
    .Character2_pixel_valid(CH2_Pixel_valid), .Character2_pixel_RGB(CH2_Pixel_RGB), .Character2_pixel_is_trans(CH2_Pixel_is_trans), .Character2_pixel_ready(CH2_Pixel_ready),

    .Character3_a(Character3_a), .Character3_z(Character3_z),
    .Character3_pixel_valid(CH3_Pixel_valid), .Character3_pixel_RGB(CH3_Pixel_RGB), .Character3_pixel_is_trans(CH3_Pixel_is_trans), .Character3_pixel_ready(CH3_Pixel_ready),

    .Character4_a(Character4_a), .Character4_z(Character4_z),
    .Character4_pixel_valid(CH4_Pixel_valid), .Character4_pixel_RGB(CH4_Pixel_RGB), .Character4_pixel_is_trans(CH4_Pixel_is_trans), .Character4_pixel_ready(CH4_Pixel_ready),

    .Script_a(Script_a), .Script_z(Script_z),
    .Script_pixel_valid(SC_Pixel_valid), .Script_pixel_RGB(SC_Pixel_RGB), .Script_pixel_is_trans(SC_Pixel_is_trans), .Script_pixel_ready(SC_Pixel_ready),

    .Status_a(Status_a), .Status_z(Status_z),
    .Status_pixel_valid(ST_Pixel_valid), .Status_pixel_RGB(ST_Pixel_RGB), .Status_pixel_is_trans(ST_Pixel_is_trans), .Status_pixel_ready(ST_Pixel_ready),

    .Universal1_a(Universal1_a), .Universal1_z(Universal1_z),
    .Universal1_pixel_valid(UN1_Pixel_valid), .Universal1_pixel_RGB(UN1_Pixel_RGB), .Universal1_pixel_is_trans(UN1_Pixel_is_trans), .Universal1_pixel_ready(UN1_Pixel_ready),

    .Universal2_a(Universal2_a), .Universal2_z(Universal2_z),
    .Universal2_pixel_valid(UN2_Pixel_valid), .Universal2_pixel_RGB(UN2_Pixel_RGB), .Universal2_pixel_is_trans(UN2_Pixel_is_trans), .Universal2_pixel_ready(UN2_Pixel_ready),

    .Final_pixel_valid(Final_pixel_valid), .Final_pixel_RGB(Final_pixel_RGB)
);

endmodule
