
module Game_Console_TOP #(
    parameter [31:0] CONTROL_REG_BASE = 32'h0FF0_0000,
    parameter [31:0] FONT_MAP_BASE = 32'h0FF0_1000,
    parameter [31:0] FONT_DATA_BASE = 32'h0FF0_2000,
    parameter [31:0] LOOKUP_TABLE_BASE = 32'h0FF0_0400,
    parameter [31:0] STACKADDR = 32'h0FEF_FFFC
) (
    input clk,
    input resetn,
    input [7:0] joypad_state_in,
    output joypad_irq,
    output ppu_irq,

    output DDR3_CPU_valid,
    input DDR3_CPU_ready,
    output [31:0] DDR3_CPU_addr,
    output [31:0] DDR3_CPU_wdata,
    output [3:0] DDR3_CPU_wstrb,
    input [31:0] DDR3_CPU_rdata,
    output [7:0] DDR3_CPU_burst_len,
    output DDR3_CPU_burst_en,
    output DDR3_PPU_valid,
    input DDR3_PPU_ready,
    output [31:0] DDR3_PPU_addr,
    output [31:0] DDR3_PPU_wdata,
    output [3:0] DDR3_PPU_wstrb,
    input [31:0] DDR3_PPU_rdata,
    output [7:0] DDR3_PPU_burst_len,
    output DDR3_PPU_burst_en,

    output BRAM0_wen, output [7:0] BRAM0_wstrb, output [8:0] BRAM0_waddr, output [71:0] BRAM0_din, input [71:0] BRAM0_dout,
    output BRAM0_ren, output [8:0] BRAM0_raddr,
    output BRAM1_wen, output [7:0] BRAM1_wstrb, output [8:0] BRAM1_waddr, output [71:0] BRAM1_din, input [71:0] BRAM1_dout,
    output BRAM1_ren, output [8:0] BRAM1_raddr,
    output BRAM2_wen, output [7:0] BRAM2_wstrb, output [8:0] BRAM2_waddr, output [71:0] BRAM2_din, input [71:0] BRAM2_dout,
    output BRAM2_ren, output [8:0] BRAM2_raddr,
    output BRAM3_wen, output [7:0] BRAM3_wstrb, output [8:0] BRAM3_waddr, output [71:0] BRAM3_din, input [71:0] BRAM3_dout,
    output BRAM3_ren, output [8:0] BRAM3_raddr,

    output BRAM4_en_a, output [3:0] BRAM4_wstrb_a, output [9:0] BRAM4_addr_a, output [31:0] BRAM4_din_a, input [31:0] BRAM4_dout_a,
    output BRAM4_en_b, output [3:0] BRAM4_wstrb_b, output [9:0] BRAM4_addr_b, output [31:0] BRAM4_din_b, input [31:0] BRAM4_dout_b,
    output BRAM5_en_a, output [3:0] BRAM5_wstrb_a, output [9:0] BRAM5_addr_a, output [31:0] BRAM5_din_a, input [31:0] BRAM5_dout_a,
    output BRAM5_en_b, output [3:0] BRAM5_wstrb_b, output [9:0] BRAM5_addr_b, output [31:0] BRAM5_din_b, input [31:0] BRAM5_dout_b,
    output BRAM6_en_a, output [3:0] BRAM6_wstrb_a, output [9:0] BRAM6_addr_a, output [31:0] BRAM6_din_a, input [31:0] BRAM6_dout_a,
    output BRAM6_en_b, output [3:0] BRAM6_wstrb_b, output [9:0] BRAM6_addr_b, output [31:0] BRAM6_din_b, input [31:0] BRAM6_dout_b,
    output BRAM13_en_a, output [3:0] BRAM13_wstrb_a, output [9:0] BRAM13_addr_a, output [31:0] BRAM13_din_a, input [31:0] BRAM13_dout_a,
    output BRAM13_en_b, output [3:0] BRAM13_wstrb_b, output [9:0] BRAM13_addr_b, output [31:0] BRAM13_din_b, input [31:0] BRAM13_dout_b,
    output BRAM14_en_a, output [3:0] BRAM14_wstrb_a, output [9:0] BRAM14_addr_a, output [31:0] BRAM14_din_a, input [31:0] BRAM14_dout_a,
    output BRAM14_en_b, output [3:0] BRAM14_wstrb_b, output [9:0] BRAM14_addr_b, output [31:0] BRAM14_din_b, input [31:0] BRAM14_dout_b,

    output BRAM7_en_a, output [0:0] BRAM7_we_a, output [8:0] BRAM7_addr_a, output [63:0] BRAM7_din_a,
    output BRAM7_en_b, output [8:0] BRAM7_addr_b, input [63:0] BRAM7_dout_b,
    output BRAM8_en_a, output [0:0] BRAM8_we_a, output [8:0] BRAM8_addr_a, output [63:0] BRAM8_din_a,
    output BRAM8_en_b, output [8:0] BRAM8_addr_b, input [63:0] BRAM8_dout_b,
    output BRAM9_en_a, output [0:0] BRAM9_we_a, output [8:0] BRAM9_addr_a, output [63:0] BRAM9_din_a,
    output BRAM9_en_b, output [8:0] BRAM9_addr_b, input [63:0] BRAM9_dout_b,
    output BRAM10_en_a, output [0:0] BRAM10_we_a, output [8:0] BRAM10_addr_a, output [63:0] BRAM10_din_a,
    output BRAM10_en_b, output [8:0] BRAM10_addr_b, input [63:0] BRAM10_dout_b,
    output BRAM11_en_a, output [0:0] BRAM11_we_a, output [8:0] BRAM11_addr_a, output [63:0] BRAM11_din_a,
    output BRAM11_en_b, output [8:0] BRAM11_addr_b, input [63:0] BRAM11_dout_b,
    output BRAM12_en_a, output [0:0] BRAM12_we_a, output [8:0] BRAM12_addr_a, output [63:0] BRAM12_din_a,
    output BRAM12_en_b, output [8:0] BRAM12_addr_b, input [63:0] BRAM12_dout_b,

    output LUT_we,
    output [7:0] LUT_addr_w,
    output [17:0] LUT_data_in,
    output [7:0] LUT_addr_r1,
    input [17:0] LUT_data_out1,
    output [7:0] LUT_addr_r2,
    input [17:0] LUT_data_out2,

    output Final_pixel_valid,
    output [17:0] Final_pixel_RGB,
    output Font_Line_End,
    output Font_Frame_End
);

wire cpu_mem_valid;
wire cpu_mem_instr;
wire cpu_mem_ready;
wire [31:0] cpu_mem_addr;
wire [31:0] cpu_mem_wdata;
wire [3:0] cpu_mem_wstrb;
wire [31:0] cpu_mem_rdata;
wire [31:0] cpu_la_addr;
wire cpu_la_read, cpu_la_write;
wire [31:0] cpu_la_wdata;
wire [3:0] cpu_la_wstrb;
wire cpu_trap;
wire cpu_pcpi_wr, cpu_pcpi_wait, cpu_pcpi_ready;
wire [31:0] cpu_pcpi_rd;
wire [31:0] cpu_irq;
assign cpu_irq = {30'b0, ppu_irq, joypad_irq};
assign cpu_pcpi_wr = 1'b0;
assign cpu_pcpi_wait = 1'b0;
assign cpu_pcpi_ready = 1'b0;
assign cpu_pcpi_rd = 32'b0;

wire cache_cpu_ready;
wire [31:0] cache_cpu_rdata;
wire cache_emem_valid;
wire cache_emem_ready;
wire [31:0] cache_emem_addr, cache_emem_wdata, cache_emem_rdata;
wire [3:0] cache_emem_wstrb;
wire [7:0] cache_emem_burst_len;
wire cache_emem_burst_en;
wire cache_hit;
wire PPU_start;

picorv32 #(
    .STACKADDR(STACKADDR)
) u_cpu (
    .clk(clk), .resetn(resetn), .trap(cpu_trap),
    .mem_valid(cpu_mem_valid), .mem_instr(cpu_mem_instr), .mem_ready(cpu_mem_ready),
    .mem_addr(cpu_mem_addr), .mem_wdata(cpu_mem_wdata), .mem_wstrb(cpu_mem_wstrb), .mem_rdata(cpu_mem_rdata),
    .mem_la_read(cpu_la_read), .mem_la_write(cpu_la_write), .mem_la_addr(cpu_la_addr),
    .mem_la_wdata(cpu_la_wdata), .mem_la_wstrb(cpu_la_wstrb),
    .pcpi_valid(), .pcpi_insn(), .pcpi_rs1(), .pcpi_rs2(),
    .pcpi_wr(cpu_pcpi_wr), .pcpi_rd(cpu_pcpi_rd), .pcpi_wait(cpu_pcpi_wait), .pcpi_ready(cpu_pcpi_ready),
    .irq(cpu_irq), .eoi(), .trace_valid(), .trace_data()
);

I_Cache_Controller u_icache (
    .clk(clk), .resetn(resetn),
    .CPU_valid(cpu_mem_valid), .CPU_instr(cpu_mem_instr), .CPU_ready(cache_cpu_ready),
    .CPU_addr(cpu_mem_addr), .CPU_wdata(cpu_mem_wdata), .CPU_wstrb(cpu_mem_wstrb), .CPU_rdata(cache_cpu_rdata),
    .EMEM_valid(cache_emem_valid), .EMEM_ready(cache_emem_ready), .EMEM_addr(cache_emem_addr),
    .EMEM_wdata(cache_emem_wdata), .EMEM_wstrb(cache_emem_wstrb), .EMEM_rdata(cache_emem_rdata),
    .EMEM_burst_len(cache_emem_burst_len), .EMEM_burst_en(cache_emem_burst_en),
    .BRAM0_wen(BRAM0_wen), .BRAM0_wstrb(BRAM0_wstrb), .BRAM0_waddr(BRAM0_waddr), .BRAM0_din(BRAM0_din),
    .BRAM0_ren(BRAM0_ren), .BRAM0_raddr(BRAM0_raddr), .BRAM0_dout(BRAM0_dout),
    .BRAM1_wen(BRAM1_wen), .BRAM1_wstrb(BRAM1_wstrb), .BRAM1_waddr(BRAM1_waddr), .BRAM1_din(BRAM1_din),
    .BRAM1_ren(BRAM1_ren), .BRAM1_raddr(BRAM1_raddr), .BRAM1_dout(BRAM1_dout),
    .BRAM2_wen(BRAM2_wen), .BRAM2_wstrb(BRAM2_wstrb), .BRAM2_waddr(BRAM2_waddr), .BRAM2_din(BRAM2_din),
    .BRAM2_ren(BRAM2_ren), .BRAM2_raddr(BRAM2_raddr), .BRAM2_dout(BRAM2_dout),
    .BRAM3_wen(BRAM3_wen), .BRAM3_wstrb(BRAM3_wstrb), .BRAM3_waddr(BRAM3_waddr), .BRAM3_din(BRAM3_din),
    .BRAM3_ren(BRAM3_ren), .BRAM3_raddr(BRAM3_raddr), .BRAM3_dout(BRAM3_dout), .cache_hit(cache_hit)
);

assign cpu_mem_ready = cache_cpu_ready;
assign cpu_mem_rdata = cache_cpu_rdata;

wire dec_lut_we;
wire [7:0] dec_lut_addr_w;
wire [17:0] dec_lut_data_in;
wire dec_bram4_en_b, dec_bram5_en_b, dec_bram6_en_b, dec_bram13_en_b, dec_bram14_en_b;
wire [3:0] dec_bram4_wstrb_b, dec_bram5_wstrb_b, dec_bram6_wstrb_b, dec_bram13_wstrb_b, dec_bram14_wstrb_b;
wire [9:0] dec_bram4_addr_b, dec_bram5_addr_b, dec_bram6_addr_b, dec_bram13_addr_b, dec_bram14_addr_b;
wire [31:0] dec_bram4_din_b, dec_bram5_din_b, dec_bram6_din_b, dec_bram13_din_b, dec_bram14_din_b;
wire [31:0] dec_emem_rdata;
wire dec_emem_ready;
wire dec_ddr3_valid;
wire [31:0] dec_ddr3_addr, dec_ddr3_wdata, dec_ddr3_rdata;
wire [3:0] dec_ddr3_wstrb;
wire [7:0] dec_ddr3_burst_len;
wire dec_ddr3_burst_en;
wire ppu_emem_valid, ppu_emem_ready;
wire [31:0] ppu_emem_addr, ppu_emem_wdata, ppu_emem_rdata;
wire [3:0] ppu_emem_wstrb;
wire [7:0] ppu_emem_burst_len;
wire ppu_emem_burst_en;

Addr_Decoder #(
    .CONTROL_REG_BASE(CONTROL_REG_BASE), .FONT_MAP_BASE(FONT_MAP_BASE),
    .FONT_DATA_BASE(FONT_DATA_BASE), .LOOKUP_TABLE_BASE(LOOKUP_TABLE_BASE)
) u_addr_decoder (
    .clk(clk), .resetn(resetn),
    .joypad_state(joypad_state_in), .joypad_irq(joypad_irq), .Frame_End(Font_Frame_End), .ppu_irq(ppu_irq),
    .EMEM_valid(cache_emem_valid), .EMEM_ready(dec_emem_ready), .EMEM_addr(cache_emem_addr),
    .EMEM_wdata(cache_emem_wdata), .EMEM_wstrb(cache_emem_wstrb), .EMEM_rdata(dec_emem_rdata),
    .EMEM_burst_len(cache_emem_burst_len), .EMEM_burst_en(cache_emem_burst_en),
    .DDR3_valid(dec_ddr3_valid), .DDR3_ready(DDR3_CPU_ready), .DDR3_addr(dec_ddr3_addr), .DDR3_wdata(dec_ddr3_wdata),
    .DDR3_wstrb(dec_ddr3_wstrb), .DDR3_rdata(DDR3_CPU_rdata), .DDR3_burst_len(dec_ddr3_burst_len), .DDR3_burst_en(dec_ddr3_burst_en),
    .PPU_start(PPU_start),
    .LUT_we(dec_lut_we), .LUT_addr_w(dec_lut_addr_w), .LUT_data_in(dec_lut_data_in),
    .BRAM4_en_b(dec_bram4_en_b), .BRAM4_wstrb_b(dec_bram4_wstrb_b), .BRAM4_addr_b(dec_bram4_addr_b), .BRAM4_din_b(dec_bram4_din_b), .BRAM4_dout_b(BRAM4_dout_b),
    .BRAM5_en_b(dec_bram5_en_b), .BRAM5_wstrb_b(dec_bram5_wstrb_b), .BRAM5_addr_b(dec_bram5_addr_b), .BRAM5_din_b(dec_bram5_din_b), .BRAM5_dout_b(BRAM5_dout_b),
    .BRAM6_en_b(dec_bram6_en_b), .BRAM6_wstrb_b(dec_bram6_wstrb_b), .BRAM6_addr_b(dec_bram6_addr_b), .BRAM6_din_b(dec_bram6_din_b), .BRAM6_dout_b(BRAM6_dout_b),
    .BRAM13_en_b(dec_bram13_en_b), .BRAM13_wstrb_b(dec_bram13_wstrb_b), .BRAM13_addr_b(dec_bram13_addr_b), .BRAM13_din_b(dec_bram13_din_b), .BRAM13_dout_b(BRAM13_dout_b),
    .BRAM14_en_b(dec_bram14_en_b), .BRAM14_wstrb_b(dec_bram14_wstrb_b), .BRAM14_addr_b(dec_bram14_addr_b), .BRAM14_din_b(dec_bram14_din_b), .BRAM14_dout_b(BRAM14_dout_b),
    .o_bg1_addr(bg1_addr), .o_bg2_addr(bg2_addr), .o_chr1_addr(chr1_addr), .o_chr2_addr(chr2_addr),
    .o_chr3_addr(chr3_addr), .o_chr4_addr(chr4_addr), .o_scr_addr(scr_addr), .o_stat_addr(stat_addr),
    .o_uni1_addr(uni1_addr), .o_uni2_addr(uni2_addr), .o_lut_cache(lut_cache),
    .o_bg1_pos(bg1_pos), .o_bg1_attr(bg1_attr), .o_bg2_pos(bg2_pos), .o_bg2_attr(bg2_attr),
    .o_chr1_pos(chr1_pos), .o_chr1_attr(chr1_attr), .o_chr2_pos(chr2_pos), .o_chr2_attr(chr2_attr),
    .o_chr3_pos(chr3_pos), .o_chr3_attr(chr3_attr), .o_chr4_pos(chr4_pos), .o_chr4_attr(chr4_attr),
    .o_scr_pos(scr_pos), .o_scr_attr(scr_attr), .o_stat_pos(stat_pos), .o_stat_attr(stat_attr),
    .o_uni1_pos(uni1_pos), .o_uni1_attr(uni1_attr), .o_uni2_pos(uni2_pos), .o_uni2_attr(uni2_attr),
    .o_line_cfg_0_1(line_cfg_0_1), .o_line_cfg_2_3(line_cfg_2_3), .o_line_cfg_4_5(line_cfg_4_5),
    .o_line_cfg_6_7(line_cfg_6_7), .o_line_cfg_8_9(line_cfg_8_9), .o_line_cfg_10_11(line_cfg_10_11),
    .o_line_cfg_12_13(line_cfg_12_13), .o_line_cfg_14(line_cfg_14), .o_line_alpha_0_7(line_alpha_0_7),
    .o_line_alpha_8_14(line_alpha_8_14), .o_ppu_start(PPU_start)
);

assign cache_emem_ready = dec_emem_ready;
assign cache_emem_rdata = dec_emem_rdata;

assign DDR3_CPU_valid = dec_ddr3_valid;
assign DDR3_CPU_addr = dec_ddr3_addr;
assign DDR3_CPU_wdata = dec_ddr3_wdata;
assign DDR3_CPU_wstrb = dec_ddr3_wstrb;
assign DDR3_CPU_burst_len = dec_ddr3_burst_len;
assign DDR3_CPU_burst_en = dec_ddr3_burst_en;
assign ppu_emem_ready = DDR3_PPU_ready;
assign DDR3_PPU_valid = ppu_emem_valid;
assign DDR3_PPU_addr = ppu_emem_addr;
assign DDR3_PPU_wdata = ppu_emem_wdata;
assign DDR3_PPU_wstrb = ppu_emem_wstrb;
assign ppu_emem_rdata = DDR3_PPU_rdata;
assign DDR3_PPU_burst_len = ppu_emem_burst_len;
assign DDR3_PPU_burst_en = ppu_emem_burst_en;

assign BRAM4_en_b = dec_bram4_en_b; assign BRAM4_wstrb_b = dec_bram4_wstrb_b; assign BRAM4_addr_b = dec_bram4_addr_b; assign BRAM4_din_b = dec_bram4_din_b;
assign BRAM5_en_b = dec_bram5_en_b; assign BRAM5_wstrb_b = dec_bram5_wstrb_b; assign BRAM5_addr_b = dec_bram5_addr_b; assign BRAM5_din_b = dec_bram5_din_b;
assign BRAM6_en_b = dec_bram6_en_b; assign BRAM6_wstrb_b = dec_bram6_wstrb_b; assign BRAM6_addr_b = dec_bram6_addr_b; assign BRAM6_din_b = dec_bram6_din_b;
assign BRAM13_en_b = dec_bram13_en_b; assign BRAM13_wstrb_b = dec_bram13_wstrb_b; assign BRAM13_addr_b = dec_bram13_addr_b; assign BRAM13_din_b = dec_bram13_din_b;
assign BRAM14_en_b = dec_bram14_en_b; assign BRAM14_wstrb_b = dec_bram14_wstrb_b; assign BRAM14_addr_b = dec_bram14_addr_b; assign BRAM14_din_b = dec_bram14_din_b;

assign LUT_we = dec_lut_we;
assign LUT_addr_w = dec_lut_addr_w;
assign LUT_data_in = dec_lut_data_in;

wire [31:0] bg1_addr, bg2_addr, chr1_addr, chr2_addr, chr3_addr, chr4_addr, scr_addr, stat_addr, uni1_addr, uni2_addr;
wire [31:0] lut_cache, bg1_pos, bg1_attr, bg2_pos, bg2_attr, chr1_pos, chr1_attr, chr2_pos, chr2_attr;
wire [31:0] chr3_pos, chr3_attr, chr4_pos, chr4_attr, scr_pos, scr_attr, stat_pos, stat_attr, uni1_pos, uni1_attr, uni2_pos, uni2_attr;
wire [31:0] line_cfg_0_1, line_cfg_2_3, line_cfg_4_5, line_cfg_6_7, line_cfg_8_9, line_cfg_10_11, line_cfg_12_13, line_cfg_14, line_alpha_0_7, line_alpha_8_14;
wire [7:0] cache1_pixel = lut_cache[7:0];
wire [7:0] cache2_pixel = lut_cache[15:8];
wire [7:0] cache3_pixel = lut_cache[23:16];
wire [7:0] cache4_pixel = lut_cache[31:24];

wire [7:0] ppu_lut_addr_r1, ppu_lut_addr_r2;
assign LUT_addr_r1 = ppu_lut_addr_r1;
assign LUT_addr_r2 = ppu_lut_addr_r2;

wire [15:0] bg1_wx = bg1_pos[15:0], bg1_wy = bg1_pos[31:16], bg1_scx = bg1_pos[15:0], bg1_scy = bg1_pos[31:16];
wire [15:0] bg2_wx = bg2_pos[15:0], bg2_wy = bg2_pos[31:16], bg2_scx = bg2_pos[15:0], bg2_scy = bg2_pos[31:16];
wire [15:0] chr1_wx = chr1_pos[15:0], chr1_wy = chr1_pos[31:16], chr1_scx = chr1_pos[15:0], chr1_scy = chr1_pos[31:16];
wire [15:0] chr2_wx = chr2_pos[15:0], chr2_wy = chr2_pos[31:16], chr2_scx = chr2_pos[15:0], chr2_scy = chr2_pos[31:16];
wire [15:0] chr3_wx = chr3_pos[15:0], chr3_wy = chr3_pos[31:16], chr3_scx = chr3_pos[15:0], chr3_scy = chr3_pos[31:16];
wire [15:0] chr4_wx = chr4_pos[15:0], chr4_wy = chr4_pos[31:16], chr4_scx = chr4_pos[15:0], chr4_scy = chr4_pos[31:16];
wire [15:0] scr_wx = scr_pos[15:0], scr_wy = scr_pos[31:16], scr_scx = scr_pos[15:0], scr_scy = scr_pos[31:16];
wire [15:0] stat_wx = stat_pos[15:0], stat_wy = stat_pos[31:16], stat_scx = stat_pos[15:0], stat_scy = stat_pos[31:16];
wire [15:0] uni1_wx = uni1_pos[15:0], uni1_wy = uni1_pos[31:16], uni1_scx = uni1_pos[15:0], uni1_scy = uni1_pos[31:16];
wire [15:0] uni2_wx = uni2_pos[15:0], uni2_wy = uni2_pos[31:16], uni2_scx = uni2_pos[15:0], uni2_scy = uni2_pos[31:16];
wire [7:0] bg1_a = bg1_attr[15:8], bg1_z = bg1_attr[7:0], bg2_a = bg2_attr[15:8], bg2_z = bg2_attr[7:0];
wire [7:0] chr1_a = chr1_attr[15:8], chr1_z = chr1_attr[7:0], chr2_a = chr2_attr[15:8], chr2_z = chr2_attr[7:0];
wire [7:0] chr3_a = chr3_attr[15:8], chr3_z = chr3_attr[7:0], chr4_a = chr4_attr[15:8], chr4_z = chr4_attr[7:0];
wire [7:0] scr_a = scr_attr[15:8], scr_z = scr_attr[7:0], stat_a = stat_attr[15:8], stat_z = stat_attr[7:0];
wire [7:0] uni1_a = uni1_attr[15:8], uni1_z = uni1_attr[7:0], uni2_a = uni2_attr[15:8], uni2_z = uni2_attr[7:0];

wire [7:0] line_visible [0:14];
wire [8:0] line_rgb [0:14];
wire [2:0] line_alpha [0:14];
assign line_visible[0] = {2'b0, line_cfg_0_1[14:9]}; assign line_rgb[0] = line_cfg_0_1[8:0];
assign line_visible[1] = {2'b0, line_cfg_0_1[30:25]}; assign line_rgb[1] = line_cfg_0_1[24:16];
assign line_visible[2] = {2'b0, line_cfg_2_3[14:9]}; assign line_rgb[2] = line_cfg_2_3[8:0];
assign line_visible[3] = {2'b0, line_cfg_2_3[30:25]}; assign line_rgb[3] = line_cfg_2_3[24:16];
assign line_visible[4] = {2'b0, line_cfg_4_5[14:9]}; assign line_rgb[4] = line_cfg_4_5[8:0];
assign line_visible[5] = {2'b0, line_cfg_4_5[30:25]}; assign line_rgb[5] = line_cfg_4_5[24:16];
assign line_visible[6] = {2'b0, line_cfg_6_7[14:9]}; assign line_rgb[6] = line_cfg_6_7[8:0];
assign line_visible[7] = {2'b0, line_cfg_6_7[30:25]}; assign line_rgb[7] = line_cfg_6_7[24:16];
assign line_visible[8] = {2'b0, line_cfg_8_9[14:9]}; assign line_rgb[8] = line_cfg_8_9[8:0];
assign line_visible[9] = {2'b0, line_cfg_8_9[30:25]}; assign line_rgb[9] = line_cfg_8_9[24:16];
assign line_visible[10] = {2'b0, line_cfg_10_11[14:9]}; assign line_rgb[10] = line_cfg_10_11[8:0];
assign line_visible[11] = {2'b0, line_cfg_10_11[30:25]}; assign line_rgb[11] = line_cfg_10_11[24:16];
assign line_visible[12] = {2'b0, line_cfg_12_13[14:9]}; assign line_rgb[12] = line_cfg_12_13[8:0];
assign line_visible[13] = {2'b0, line_cfg_12_13[30:25]}; assign line_rgb[13] = line_cfg_12_13[24:16];
assign line_visible[14] = {2'b0, line_cfg_14[14:9]}; assign line_rgb[14] = line_cfg_14[8:0];
genvar line_index;
generate for (line_index = 0; line_index < 8; line_index = line_index + 1) begin : gen_alpha_low
    assign line_alpha[line_index] = line_alpha_0_7[line_index * 4 +: 3];
end for (line_index = 8; line_index < 15; line_index = line_index + 1) begin : gen_alpha_high
    assign line_alpha[line_index] = line_alpha_8_14[(line_index - 8) * 4 +: 3];
end endgenerate

PPU_TOP u_ppu (
    .clk(clk), .resetn(resetn), .PPU_start(PPU_start),
    .CPU_LUT_Cache1_pixel(cache1_pixel), .CPU_LUT_Cache2_pixel(cache2_pixel), .CPU_LUT_Cache3_pixel(cache3_pixel), .CPU_LUT_Cache4_pixel(cache4_pixel),
    .Background_Layer1_Address(bg1_addr), .Background_Layer2_Address(bg2_addr), .Character_Layer1_Address(chr1_addr), .Character_Layer2_Address(chr2_addr),
    .Character_Layer3_Address(chr3_addr), .Character_Layer4_Address(chr4_addr), .Script_Layer_Address(scr_addr), .Status_Layer_Address(stat_addr),
    .Universal_Layer1_Address(uni1_addr), .Universal_Layer2_Address(uni2_addr),
    .EMEM_valid(ppu_emem_valid), .EMEM_ready(ppu_emem_ready), .EMEM_addr(ppu_emem_addr), .EMEM_wdata(ppu_emem_wdata), .EMEM_wstrb(ppu_emem_wstrb), .EMEM_rdata(ppu_emem_rdata), .EMEM_burst_len(ppu_emem_burst_len), .EMEM_burst_en(ppu_emem_burst_en),
    .BRAM7_en_a(BRAM7_en_a), .BRAM7_we_a(BRAM7_we_a), .BRAM7_addr_a(BRAM7_addr_a), .BRAM7_din_a(BRAM7_din_a), .BRAM7_en_b(BRAM7_en_b), .BRAM7_addr_b(BRAM7_addr_b), .BRAM7_dout_b(BRAM7_dout_b),
    .BRAM8_en_a(BRAM8_en_a), .BRAM8_we_a(BRAM8_we_a), .BRAM8_addr_a(BRAM8_addr_a), .BRAM8_din_a(BRAM8_din_a), .BRAM8_en_b(BRAM8_en_b), .BRAM8_addr_b(BRAM8_addr_b), .BRAM8_dout_b(BRAM8_dout_b),
    .BRAM9_en_a(BRAM9_en_a), .BRAM9_we_a(BRAM9_we_a), .BRAM9_addr_a(BRAM9_addr_a), .BRAM9_din_a(BRAM9_din_a), .BRAM9_en_b(BRAM9_en_b), .BRAM9_addr_b(BRAM9_addr_b), .BRAM9_dout_b(BRAM9_dout_b),
    .BRAM10_en_a(BRAM10_en_a), .BRAM10_we_a(BRAM10_we_a), .BRAM10_addr_a(BRAM10_addr_a), .BRAM10_din_a(BRAM10_din_a), .BRAM10_en_b(BRAM10_en_b), .BRAM10_addr_b(BRAM10_addr_b), .BRAM10_dout_b(BRAM10_dout_b),
    .BRAM11_en_a(BRAM11_en_a), .BRAM11_we_a(BRAM11_we_a), .BRAM11_addr_a(BRAM11_addr_a), .BRAM11_din_a(BRAM11_din_a), .BRAM11_en_b(BRAM11_en_b), .BRAM11_addr_b(BRAM11_addr_b), .BRAM11_dout_b(BRAM11_dout_b),
    .BRAM12_en_a(BRAM12_en_a), .BRAM12_we_a(BRAM12_we_a), .BRAM12_addr_a(BRAM12_addr_a), .BRAM12_din_a(BRAM12_din_a), .BRAM12_en_b(BRAM12_en_b), .BRAM12_addr_b(BRAM12_addr_b), .BRAM12_dout_b(BRAM12_dout_b),
    .LUT_addr_r1(ppu_lut_addr_r1), .LUT_data_out1(LUT_data_out1), .LUT_addr_r2(ppu_lut_addr_r2), .LUT_data_out2(LUT_data_out2),
    .Background1_WX(bg1_wx), .Background1_WY(bg1_wy), .Background1_SCX(bg1_scx), .Background1_SCY(bg1_scy), .Background1_a(bg1_a), .Background1_z(bg1_z),
    .Background2_WX(bg2_wx), .Background2_WY(bg2_wy), .Background2_SCX(bg2_scx), .Background2_SCY(bg2_scy), .Background2_a(bg2_a), .Background2_z(bg2_z),
    .Character1_WX(chr1_wx), .Character1_WY(chr1_wy), .Character1_SCX(chr1_scx), .Character1_SCY(chr1_scy), .Character1_a(chr1_a), .Character1_z(chr1_z),
    .Character2_WX(chr2_wx), .Character2_WY(chr2_wy), .Character2_SCX(chr2_scx), .Character2_SCY(chr2_scy), .Character2_a(chr2_a), .Character2_z(chr2_z),
    .Character3_WX(chr3_wx), .Character3_WY(chr3_wy), .Character3_SCX(chr3_scx), .Character3_SCY(chr3_scy), .Character3_a(chr3_a), .Character3_z(chr3_z),
    .Character4_WX(chr4_wx), .Character4_WY(chr4_wy), .Character4_SCX(chr4_scx), .Character4_SCY(chr4_scy), .Character4_a(chr4_a), .Character4_z(chr4_z),
    .Script_WX(scr_wx), .Script_WY(scr_wy), .Script_SCX(scr_scx), .Script_SCY(scr_scy), .Script_a(scr_a), .Script_z(scr_z),
    .Status_WX(stat_wx), .Status_WY(stat_wy), .Status_SCX(stat_scx), .Status_SCY(stat_scy), .Status_a(stat_a), .Status_z(stat_z),
    .Universal1_WX(uni1_wx), .Universal1_WY(uni1_wy), .Universal1_SCX(uni1_scx), .Universal1_SCY(uni1_scy), .Universal1_a(uni1_a), .Universal1_z(uni1_z),
    .Universal2_WX(uni2_wx), .Universal2_WY(uni2_wy), .Universal2_SCX(uni2_scx), .Universal2_SCY(uni2_scy), .Universal2_a(uni2_a), .Universal2_z(uni2_z),
    .Line0_visible_number(line_visible[0]), .Line1_visible_number(line_visible[1]), .Line2_visible_number(line_visible[2]), .Line3_visible_number(line_visible[3]), .Line4_visible_number(line_visible[4]), .Line5_visible_number(line_visible[5]), .Line6_visible_number(line_visible[6]), .Line7_visible_number(line_visible[7]), .Line8_visible_number(line_visible[8]), .Line9_visible_number(line_visible[9]), .Line10_visible_number(line_visible[10]), .Line11_visible_number(line_visible[11]), .Line12_visible_number(line_visible[12]), .Line13_visible_number(line_visible[13]), .Line14_visible_number(line_visible[14]),
    .Line0_font_RGB_9bit(line_rgb[0]), .Line1_font_RGB_9bit(line_rgb[1]), .Line2_font_RGB_9bit(line_rgb[2]), .Line3_font_RGB_9bit(line_rgb[3]), .Line4_font_RGB_9bit(line_rgb[4]), .Line5_font_RGB_9bit(line_rgb[5]), .Line6_font_RGB_9bit(line_rgb[6]), .Line7_font_RGB_9bit(line_rgb[7]), .Line8_font_RGB_9bit(line_rgb[8]), .Line9_font_RGB_9bit(line_rgb[9]), .Line10_font_RGB_9bit(line_rgb[10]), .Line11_font_RGB_9bit(line_rgb[11]), .Line12_font_RGB_9bit(line_rgb[12]), .Line13_font_RGB_9bit(line_rgb[13]), .Line14_font_RGB_9bit(line_rgb[14]),
    .Line0_a(line_alpha[0]), .Line1_a(line_alpha[1]), .Line2_a(line_alpha[2]), .Line3_a(line_alpha[3]), .Line4_a(line_alpha[4]), .Line5_a(line_alpha[5]), .Line6_a(line_alpha[6]), .Line7_a(line_alpha[7]), .Line8_a(line_alpha[8]), .Line9_a(line_alpha[9]), .Line10_a(line_alpha[10]), .Line11_a(line_alpha[11]), .Line12_a(line_alpha[12]), .Line13_a(line_alpha[13]), .Line14_a(line_alpha[14]),
    .Final_pixel_valid(Final_pixel_valid), .Final_pixel_RGB(Final_pixel_RGB), .Font_Line_End(Font_Line_End), .Font_Frame_End(Font_Frame_End),
    .BRAM4_en_a(BRAM4_en_a), .BRAM4_wstrb_a(BRAM4_wstrb_a), .BRAM4_addr_a(BRAM4_addr_a), .BRAM4_din_a(BRAM4_din_a), .BRAM4_dout_a(BRAM4_dout_a),
    .BRAM5_en_a(BRAM5_en_a), .BRAM5_wstrb_a(BRAM5_wstrb_a), .BRAM5_addr_a(BRAM5_addr_a), .BRAM5_din_a(BRAM5_din_a), .BRAM5_dout_a(BRAM5_dout_a),
    .BRAM6_en_a(BRAM6_en_a), .BRAM6_wstrb_a(BRAM6_wstrb_a), .BRAM6_addr_a(BRAM6_addr_a), .BRAM6_din_a(BRAM6_din_a), .BRAM6_dout_a(BRAM6_dout_a),
    .BRAM13_en_a(BRAM13_en_a), .BRAM13_wstrb_a(BRAM13_wstrb_a), .BRAM13_addr_a(BRAM13_addr_a), .BRAM13_din_a(BRAM13_din_a), .BRAM13_dout_a(BRAM13_dout_a),
    .BRAM14_en_a(BRAM14_en_a), .BRAM14_wstrb_a(BRAM14_wstrb_a), .BRAM14_addr_a(BRAM14_addr_a), .BRAM14_din_a(BRAM14_din_a), .BRAM14_dout_a(BRAM14_dout_a)
);

endmodule
