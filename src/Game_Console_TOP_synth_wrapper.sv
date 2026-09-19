module synth_simple_dual_port_ram_72 (
	input logic clk,
	input logic write_enable, input logic [7:0] write_strobe,
	input logic [8:0] write_address, input logic [71:0] write_data,
	input logic read_enable, input logic [8:0] read_address,
	output logic [71:0] read_data
);
	logic [71:0] memory [0:511];
	integer lane;
	always_ff @(posedge clk) begin
			if (write_enable) begin
				for (lane = 0; lane < 8; lane = lane + 1) begin
					if (write_strobe[lane])
						memory[write_address][lane * 9 +: 9] <= write_data[lane * 9 +: 9];
				end
			end
			if (read_enable)
				read_data <= memory[read_address];
	end
endmodule

module synth_true_dual_port_ram_32 (
    input  logic        clk,
    
    // Port A
    input  logic        port_a_enable,
    input  logic [3:0]  port_a_strobe,
    input  logic [9:0]  port_a_address,
    input  logic [31:0] port_a_write_data,
    output logic [31:0] port_a_read_data,
    
    // Port B
    input  logic        port_b_enable,
    input  logic [3:0]  port_b_strobe,
    input  logic [9:0]  port_b_address,
    input  logic [31:0] port_b_write_data,
    output logic [31:0] port_b_read_data
);

    // Xilinx 7-Series RAMB36E1의 36-bit 폭 모드에서 주소선은 [14:5] 비트에 연결됩니다.
    wire [15:0] addr_a = {1'b0, port_a_address, 5'b00000};
    wire [15:0] addr_b = {1'b0, port_b_address, 5'b00000};

    RAMB36E1 #(
        .READ_WIDTH_A(36),
        .READ_WIDTH_B(36),
        .WRITE_WIDTH_A(36),
        .WRITE_WIDTH_B(36),
        .WRITE_MODE_A("READ_FIRST"),
        .WRITE_MODE_B("READ_FIRST"),
        .RAM_MODE("TDP")
    ) u_ramb36e1 (
        // Clock
        .CLKARDCLK      (clk),
        .CLKBWRCLK      (clk),

        // Port A
        .ENARDEN        (port_a_enable),
        .WEA            (port_a_strobe),
        .ADDRARDADDR    (addr_a),
        .DIADI          (port_a_write_data),
        .DIPADIP        (4'b0000),
        .DOADO          (port_a_read_data),
        .DOPADOP        (),

        // Port B
        .ENBWREN        (port_b_enable),
        .WEBWE          ({4'b0000, port_b_strobe}),
        .ADDRBWRADDR    (addr_b),
        .DIBDI          (port_b_write_data),
        .DIPBDIP        (4'b0000),
        .DOBDO          (port_b_read_data),
        .DOPBDOP        (),

        // Controls
        .REGCEAREGCE    (1'b0),
        .REGCEB         (1'b0),
        .RSTRAMARSTRAM  (1'b0),
        .RSTRAMB        (1'b0),
        .RSTREGARSTREG  (1'b0),
        .RSTREGB        (1'b0)
    );

endmodule

// Yosys용 Xilinx 7-Series BRAM 블랙박스 선언
(* blackbox *)
module RAMB36E1 #(
    parameter READ_WIDTH_A  = 36,
    parameter READ_WIDTH_B  = 36,
    parameter WRITE_WIDTH_A = 36,
    parameter WRITE_WIDTH_B = 36,
    parameter WRITE_MODE_A  = "READ_FIRST",
    parameter WRITE_MODE_B  = "READ_FIRST",
    parameter RAM_MODE      = "TDP"
) (
    input  logic        CLKARDCLK,
    input  logic        CLKBWRCLK,
    input  logic        ENARDEN,
    input  logic        ENBWREN,
    input  logic        REGCEAREGCE,
    input  logic        REGCEB,
    input  logic        RSTRAMARSTRAM,
    input  logic        RSTRAMB,
    input  logic        RSTREGARSTREG,
    input  logic        RSTREGB,
    input  logic [15:0] ADDRARDADDR,
    input  logic [15:0] ADDRBWRADDR,
    input  logic [31:0] DIADI,
    input  logic [31:0] DIBDI,
    input  logic [3:0]  DIPADIP,
    input  logic [3:0]  DIPBDIP,
    input  logic [3:0]  WEA,
    input  logic [7:0]  WEBWE,
    output logic [31:0] DOADO,
    output logic [31:0] DOBDO,
    output logic [3:0]  DOPADOP,
    output logic [3:0]  DOPBDOP
);
endmodule

module synth_simple_dual_port_ram_64 (
	input logic clk,
	input logic write_enable, input logic [8:0] write_address,
	input logic [63:0] write_data, input logic read_enable,
	input logic [8:0] read_address, output logic [63:0] read_data
);
	logic [63:0] memory [0:511];
	always_ff @(posedge clk) begin
			if (write_enable)
				memory[write_address] <= write_data;
			if (read_enable)
				read_data <= memory[read_address];
	end
endmodule

module synth_distributed_ram_18 (
	input logic clk, input logic reset, input logic write_enable, input logic [7:0] write_address,
	input logic [17:0] write_data, input logic [7:0] read_address_1,
	output logic [17:0] read_data_1, input logic [7:0] read_address_2,
	output logic [17:0] read_data_2
);
	logic [17:0] memory [0:255];
	always_ff @(posedge clk)
		if (!reset && write_enable) memory[write_address] <= write_data;
	always_comb begin
		if (reset) begin
			read_data_1 = '0;
			read_data_2 = '0;
		end else begin
			read_data_1 = memory[read_address_1];
			read_data_2 = memory[read_address_2];
		end
	end
endmodule

module Game_Console_TOP_synth_wrapper (
	input logic clk,
	input logic reset,
	input logic [7:0] joypad_state_in,
	output logic joypad_irq,
	output logic ppu_irq,
	output logic Final_pixel_valid,
	output logic [17:0] Final_pixel_RGB,
	output logic Font_Line_End,
	output logic Font_Frame_End
);
	logic DDR3_CPU_valid, DDR3_CPU_ready;
	logic [31:0] DDR3_CPU_addr, DDR3_CPU_wdata, DDR3_CPU_rdata;
	logic [3:0] DDR3_CPU_wstrb;
	logic [7:0] DDR3_CPU_burst_len;
	logic DDR3_CPU_burst_en;
	logic DDR3_PPU_valid, DDR3_PPU_ready;
	logic [31:0] DDR3_PPU_addr, DDR3_PPU_wdata, DDR3_PPU_rdata;
	logic [3:0] DDR3_PPU_wstrb;
	logic [7:0] DDR3_PPU_burst_len;
	logic DDR3_PPU_burst_en;
	logic [31:0] ddr3_cpu_dummy_register, ddr3_ppu_dummy_register;

    reg [1:0] clk_counter;

	assign DDR3_CPU_ready = (clk_counter == 2'b11); // DDR3_CPU_ready 신호를 clk_counter가 3일 때만 활성화
	assign DDR3_PPU_ready = (clk_counter == 2'b11); // DDR3_PPU_ready 신호를 clk_counter가 3일 때만 활성화
	assign DDR3_CPU_rdata = ddr3_cpu_dummy_register;
	assign DDR3_PPU_rdata = ddr3_ppu_dummy_register;
	always_ff @(posedge clk) begin
		if (reset) begin
			ddr3_cpu_dummy_register <= '0;
			ddr3_ppu_dummy_register <= '0;
            clk_counter <= 2'b00;
		end else begin
            clk_counter <= clk_counter + 1'b1;
			if (DDR3_CPU_valid && (|DDR3_CPU_wstrb))
				ddr3_cpu_dummy_register <= DDR3_CPU_wdata;
			if (DDR3_PPU_valid && (|DDR3_PPU_wstrb))
				ddr3_ppu_dummy_register <= DDR3_PPU_wdata;
		end
	end

	logic BRAM0_wen, BRAM0_ren, BRAM1_wen, BRAM1_ren, BRAM2_wen, BRAM2_ren, BRAM3_wen, BRAM3_ren;
	logic [7:0] BRAM0_wstrb, BRAM1_wstrb, BRAM2_wstrb, BRAM3_wstrb;
	logic [8:0] BRAM0_waddr, BRAM0_raddr, BRAM1_waddr, BRAM1_raddr, BRAM2_waddr, BRAM2_raddr, BRAM3_waddr, BRAM3_raddr;
	logic [71:0] BRAM0_din, BRAM0_dout, BRAM1_din, BRAM1_dout, BRAM2_din, BRAM2_dout, BRAM3_din, BRAM3_dout;

	synth_simple_dual_port_ram_72 bram0 (.clk(clk), .write_enable(BRAM0_wen), .write_strobe(BRAM0_wstrb), .write_address(BRAM0_waddr), .write_data(BRAM0_din), .read_enable(BRAM0_ren), .read_address(BRAM0_raddr), .read_data(BRAM0_dout));
	synth_simple_dual_port_ram_72 bram1 (.clk(clk), .write_enable(BRAM1_wen), .write_strobe(BRAM1_wstrb), .write_address(BRAM1_waddr), .write_data(BRAM1_din), .read_enable(BRAM1_ren), .read_address(BRAM1_raddr), .read_data(BRAM1_dout));
	synth_simple_dual_port_ram_72 bram2 (.clk(clk), .write_enable(BRAM2_wen), .write_strobe(BRAM2_wstrb), .write_address(BRAM2_waddr), .write_data(BRAM2_din), .read_enable(BRAM2_ren), .read_address(BRAM2_raddr), .read_data(BRAM2_dout));
	synth_simple_dual_port_ram_72 bram3 (.clk(clk), .write_enable(BRAM3_wen), .write_strobe(BRAM3_wstrb), .write_address(BRAM3_waddr), .write_data(BRAM3_din), .read_enable(BRAM3_ren), .read_address(BRAM3_raddr), .read_data(BRAM3_dout));

	logic BRAM4_en_a, BRAM4_en_b, BRAM5_en_a, BRAM5_en_b, BRAM6_en_a, BRAM6_en_b, BRAM13_en_a, BRAM13_en_b, BRAM14_en_a, BRAM14_en_b;
	logic [3:0] BRAM4_wstrb_a, BRAM4_wstrb_b, BRAM5_wstrb_a, BRAM5_wstrb_b, BRAM6_wstrb_a, BRAM6_wstrb_b, BRAM13_wstrb_a, BRAM13_wstrb_b, BRAM14_wstrb_a, BRAM14_wstrb_b;
	logic [9:0] BRAM4_addr_a, BRAM4_addr_b, BRAM5_addr_a, BRAM5_addr_b, BRAM6_addr_a, BRAM6_addr_b, BRAM13_addr_a, BRAM13_addr_b, BRAM14_addr_a, BRAM14_addr_b;
	logic [31:0] BRAM4_din_a, BRAM4_din_b, BRAM4_dout_a, BRAM4_dout_b, BRAM5_din_a, BRAM5_din_b, BRAM5_dout_a, BRAM5_dout_b;
	logic [31:0] BRAM6_din_a, BRAM6_din_b, BRAM6_dout_a, BRAM6_dout_b, BRAM13_din_a, BRAM13_din_b, BRAM13_dout_a, BRAM13_dout_b;
	logic [31:0] BRAM14_din_a, BRAM14_din_b, BRAM14_dout_a, BRAM14_dout_b;

	synth_true_dual_port_ram_32 bram4 (.clk(clk), .port_a_enable(BRAM4_en_a), .port_a_strobe(BRAM4_wstrb_a), .port_a_address(BRAM4_addr_a), .port_a_write_data(BRAM4_din_a), .port_a_read_data(BRAM4_dout_a), .port_b_enable(BRAM4_en_b), .port_b_strobe(BRAM4_wstrb_b), .port_b_address(BRAM4_addr_b), .port_b_write_data(BRAM4_din_b), .port_b_read_data(BRAM4_dout_b));
	synth_true_dual_port_ram_32 bram5 (.clk(clk), .port_a_enable(BRAM5_en_a), .port_a_strobe(BRAM5_wstrb_a), .port_a_address(BRAM5_addr_a), .port_a_write_data(BRAM5_din_a), .port_a_read_data(BRAM5_dout_a), .port_b_enable(BRAM5_en_b), .port_b_strobe(BRAM5_wstrb_b), .port_b_address(BRAM5_addr_b), .port_b_write_data(BRAM5_din_b), .port_b_read_data(BRAM5_dout_b));
	synth_true_dual_port_ram_32 bram6 (.clk(clk), .port_a_enable(BRAM6_en_a), .port_a_strobe(BRAM6_wstrb_a), .port_a_address(BRAM6_addr_a), .port_a_write_data(BRAM6_din_a), .port_a_read_data(BRAM6_dout_a), .port_b_enable(BRAM6_en_b), .port_b_strobe(BRAM6_wstrb_b), .port_b_address(BRAM6_addr_b), .port_b_write_data(BRAM6_din_b), .port_b_read_data(BRAM6_dout_b));
	synth_true_dual_port_ram_32 bram13 (.clk(clk), .port_a_enable(BRAM13_en_a), .port_a_strobe(BRAM13_wstrb_a), .port_a_address(BRAM13_addr_a), .port_a_write_data(BRAM13_din_a), .port_a_read_data(BRAM13_dout_a), .port_b_enable(BRAM13_en_b), .port_b_strobe(BRAM13_wstrb_b), .port_b_address(BRAM13_addr_b), .port_b_write_data(BRAM13_din_b), .port_b_read_data(BRAM13_dout_b));
	synth_true_dual_port_ram_32 bram14 (.clk(clk), .port_a_enable(BRAM14_en_a), .port_a_strobe(BRAM14_wstrb_a), .port_a_address(BRAM14_addr_a), .port_a_write_data(BRAM14_din_a), .port_a_read_data(BRAM14_dout_a), .port_b_enable(BRAM14_en_b), .port_b_strobe(BRAM14_wstrb_b), .port_b_address(BRAM14_addr_b), .port_b_write_data(BRAM14_din_b), .port_b_read_data(BRAM14_dout_b));

	logic BRAM7_en_a, BRAM7_en_b, BRAM8_en_a, BRAM8_en_b, BRAM9_en_a, BRAM9_en_b, BRAM10_en_a, BRAM10_en_b, BRAM11_en_a, BRAM11_en_b, BRAM12_en_a, BRAM12_en_b;
	logic [0:0] BRAM7_we_a, BRAM8_we_a, BRAM9_we_a, BRAM10_we_a, BRAM11_we_a, BRAM12_we_a;
	logic [8:0] BRAM7_addr_a, BRAM7_addr_b, BRAM8_addr_a, BRAM8_addr_b, BRAM9_addr_a, BRAM9_addr_b, BRAM10_addr_a, BRAM10_addr_b, BRAM11_addr_a, BRAM11_addr_b, BRAM12_addr_a, BRAM12_addr_b;
	logic [63:0] BRAM7_din_a, BRAM7_dout_b, BRAM8_din_a, BRAM8_dout_b, BRAM9_din_a, BRAM9_dout_b, BRAM10_din_a, BRAM10_dout_b, BRAM11_din_a, BRAM11_dout_b, BRAM12_din_a, BRAM12_dout_b;

	synth_simple_dual_port_ram_64 bram7 (.clk(clk), .write_enable(BRAM7_en_a && BRAM7_we_a[0]), .write_address(BRAM7_addr_a), .write_data(BRAM7_din_a), .read_enable(BRAM7_en_b), .read_address(BRAM7_addr_b), .read_data(BRAM7_dout_b));
	synth_simple_dual_port_ram_64 bram8 (.clk(clk), .write_enable(BRAM8_en_a && BRAM8_we_a[0]), .write_address(BRAM8_addr_a), .write_data(BRAM8_din_a), .read_enable(BRAM8_en_b), .read_address(BRAM8_addr_b), .read_data(BRAM8_dout_b));
	synth_simple_dual_port_ram_64 bram9 (.clk(clk), .write_enable(BRAM9_en_a && BRAM9_we_a[0]), .write_address(BRAM9_addr_a), .write_data(BRAM9_din_a), .read_enable(BRAM9_en_b), .read_address(BRAM9_addr_b), .read_data(BRAM9_dout_b));
	synth_simple_dual_port_ram_64 bram10 (.clk(clk), .write_enable(BRAM10_en_a && BRAM10_we_a[0]), .write_address(BRAM10_addr_a), .write_data(BRAM10_din_a), .read_enable(BRAM10_en_b), .read_address(BRAM10_addr_b), .read_data(BRAM10_dout_b));
	synth_simple_dual_port_ram_64 bram11 (.clk(clk), .write_enable(BRAM11_en_a && BRAM11_we_a[0]), .write_address(BRAM11_addr_a), .write_data(BRAM11_din_a), .read_enable(BRAM11_en_b), .read_address(BRAM11_addr_b), .read_data(BRAM11_dout_b));
	synth_simple_dual_port_ram_64 bram12 (.clk(clk), .write_enable(BRAM12_en_a && BRAM12_we_a[0]), .write_address(BRAM12_addr_a), .write_data(BRAM12_din_a), .read_enable(BRAM12_en_b), .read_address(BRAM12_addr_b), .read_data(BRAM12_dout_b));

	logic LUT_we;
	logic [7:0] LUT_addr_w, LUT_addr_r1, LUT_addr_r2;
	logic [17:0] LUT_data_in, LUT_data_out1, LUT_data_out2;
	synth_distributed_ram_18 lut (
		.clk(clk), .reset(reset), .write_enable(LUT_we), .write_address(LUT_addr_w), .write_data(LUT_data_in),
		.read_address_1(LUT_addr_r1), .read_data_1(LUT_data_out1),
		.read_address_2(LUT_addr_r2), .read_data_2(LUT_data_out2)
	);

	Game_Console_TOP u_game_console_top (
		.clk(clk), .reset(reset), .joypad_state_in(joypad_state_in),
		.joypad_irq(joypad_irq), .ppu_irq(ppu_irq),
		.DDR3_CPU_valid(DDR3_CPU_valid), .DDR3_CPU_ready(DDR3_CPU_ready),
		.DDR3_CPU_addr(DDR3_CPU_addr), .DDR3_CPU_wdata(DDR3_CPU_wdata),
		.DDR3_CPU_wstrb(DDR3_CPU_wstrb), .DDR3_CPU_rdata(DDR3_CPU_rdata),
		.DDR3_CPU_burst_len(DDR3_CPU_burst_len), .DDR3_CPU_burst_en(DDR3_CPU_burst_en),
		.DDR3_PPU_valid(DDR3_PPU_valid), .DDR3_PPU_ready(DDR3_PPU_ready),
		.DDR3_PPU_addr(DDR3_PPU_addr), .DDR3_PPU_wdata(DDR3_PPU_wdata),
		.DDR3_PPU_wstrb(DDR3_PPU_wstrb), .DDR3_PPU_rdata(DDR3_PPU_rdata),
		.DDR3_PPU_burst_len(DDR3_PPU_burst_len), .DDR3_PPU_burst_en(DDR3_PPU_burst_en),
		.BRAM0_wen(BRAM0_wen), .BRAM0_wstrb(BRAM0_wstrb), .BRAM0_waddr(BRAM0_waddr),
		.BRAM0_din(BRAM0_din), .BRAM0_dout(BRAM0_dout), .BRAM0_ren(BRAM0_ren), .BRAM0_raddr(BRAM0_raddr),
		.BRAM1_wen(BRAM1_wen), .BRAM1_wstrb(BRAM1_wstrb), .BRAM1_waddr(BRAM1_waddr),
		.BRAM1_din(BRAM1_din), .BRAM1_dout(BRAM1_dout), .BRAM1_ren(BRAM1_ren), .BRAM1_raddr(BRAM1_raddr),
		.BRAM2_wen(BRAM2_wen), .BRAM2_wstrb(BRAM2_wstrb), .BRAM2_waddr(BRAM2_waddr),
		.BRAM2_din(BRAM2_din), .BRAM2_dout(BRAM2_dout), .BRAM2_ren(BRAM2_ren), .BRAM2_raddr(BRAM2_raddr),
		.BRAM3_wen(BRAM3_wen), .BRAM3_wstrb(BRAM3_wstrb), .BRAM3_waddr(BRAM3_waddr),
		.BRAM3_din(BRAM3_din), .BRAM3_dout(BRAM3_dout), .BRAM3_ren(BRAM3_ren), .BRAM3_raddr(BRAM3_raddr),
		.BRAM4_en_a(BRAM4_en_a), .BRAM4_wstrb_a(BRAM4_wstrb_a), .BRAM4_addr_a(BRAM4_addr_a),
		.BRAM4_din_a(BRAM4_din_a), .BRAM4_dout_a(BRAM4_dout_a), .BRAM4_en_b(BRAM4_en_b),
		.BRAM4_wstrb_b(BRAM4_wstrb_b), .BRAM4_addr_b(BRAM4_addr_b), .BRAM4_din_b(BRAM4_din_b), .BRAM4_dout_b(BRAM4_dout_b),
		.BRAM5_en_a(BRAM5_en_a), .BRAM5_wstrb_a(BRAM5_wstrb_a), .BRAM5_addr_a(BRAM5_addr_a),
		.BRAM5_din_a(BRAM5_din_a), .BRAM5_dout_a(BRAM5_dout_a), .BRAM5_en_b(BRAM5_en_b),
		.BRAM5_wstrb_b(BRAM5_wstrb_b), .BRAM5_addr_b(BRAM5_addr_b), .BRAM5_din_b(BRAM5_din_b), .BRAM5_dout_b(BRAM5_dout_b),
		.BRAM6_en_a(BRAM6_en_a), .BRAM6_wstrb_a(BRAM6_wstrb_a), .BRAM6_addr_a(BRAM6_addr_a),
		.BRAM6_din_a(BRAM6_din_a), .BRAM6_dout_a(BRAM6_dout_a), .BRAM6_en_b(BRAM6_en_b),
		.BRAM6_wstrb_b(BRAM6_wstrb_b), .BRAM6_addr_b(BRAM6_addr_b), .BRAM6_din_b(BRAM6_din_b), .BRAM6_dout_b(BRAM6_dout_b),
		.BRAM13_en_a(BRAM13_en_a), .BRAM13_wstrb_a(BRAM13_wstrb_a), .BRAM13_addr_a(BRAM13_addr_a),
		.BRAM13_din_a(BRAM13_din_a), .BRAM13_dout_a(BRAM13_dout_a), .BRAM13_en_b(BRAM13_en_b),
		.BRAM13_wstrb_b(BRAM13_wstrb_b), .BRAM13_addr_b(BRAM13_addr_b), .BRAM13_din_b(BRAM13_din_b), .BRAM13_dout_b(BRAM13_dout_b),
		.BRAM14_en_a(BRAM14_en_a), .BRAM14_wstrb_a(BRAM14_wstrb_a), .BRAM14_addr_a(BRAM14_addr_a),
		.BRAM14_din_a(BRAM14_din_a), .BRAM14_dout_a(BRAM14_dout_a), .BRAM14_en_b(BRAM14_en_b),
		.BRAM14_wstrb_b(BRAM14_wstrb_b), .BRAM14_addr_b(BRAM14_addr_b), .BRAM14_din_b(BRAM14_din_b), .BRAM14_dout_b(BRAM14_dout_b),
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
		.LUT_we(LUT_we), .LUT_addr_w(LUT_addr_w), .LUT_data_in(LUT_data_in),
		.LUT_addr_r1(LUT_addr_r1), .LUT_data_out1(LUT_data_out1),
		.LUT_addr_r2(LUT_addr_r2), .LUT_data_out2(LUT_data_out2),
		.Final_pixel_valid(Final_pixel_valid), .Final_pixel_RGB(Final_pixel_RGB),
		.Font_Line_End(Font_Line_End), .Font_Frame_End(Font_Frame_End)
	);
endmodule
