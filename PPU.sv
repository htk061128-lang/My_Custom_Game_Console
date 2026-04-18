module PPU(
    input clk, //50MHz
    input resetn, //negedge reset

    //외부 메모리 인터페이스. Arbiter를 거쳐서 DDR3 인터페이스에 도달함.
    output reg EMEM_valid,
    input EMEM_ready,

    output reg [31:0] EMEM_addr,
    output reg [31:0] EMEM_wdata,
    output reg [3:0] EMEM_wstrb,
    input [31:0] EMEM_rdata,

    output reg [7:0] EMEM_burst_len, //이 값이 0이면 1개읽기, 1이면 2개읽기임, 최대 256개의 word를 연속으로 읽을 수 있음.
    output reg EMEM_burst_en, //이 값이 1이면 burst읽기 임.

    //

);
endmodule