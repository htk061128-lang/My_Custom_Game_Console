module Extract_Layer( //외부 메모리에서 라운드 로빈 방식으로 burst로 데이터를 읽어와서 BRAM에 저장함. 
    input clk, //50MHz
    input resetn, //negedge reset

    //외부 메모리 인터페이스. Arbiter를 거쳐서 DDR3 인터페이스에 도달함. 한번에 256bit씩 burst로 읽어올 생각임.
    output reg EMEM_valid,
    input EMEM_ready,

    output reg [31:0] EMEM_addr,
    output reg [31:0] EMEM_wdata,
    output reg [3:0] EMEM_wstrb,
    input [31:0] EMEM_rdata,

    output reg [7:0] EMEM_burst_len, //이 값이 0이면 1개읽기, 1이면 2개읽기임, 최대 256개의 word를 연속으로 읽을 수 있음.
    output reg EMEM_burst_en, //이 값이 1이면 burst읽기 임.


    // BRAM7 (4 layer compressed data FIFO) 인터페이스 - Simple Dual Port. 범용 레이어 2개, 대사창 레이어 1개, 상태창 레이어 1개. 각각 1024byte 씩.
    // Port A: Write 전용(64 bit)
    output BRAM7_en_a,              // Port A 활성화 (보통 1'b1 고정 가능)
    output [0:0] BRAM7_we_a,        
    output [8:0] BRAM7_addr_a, //한 줄에 64비트씩 총 512줄이 있음.    
    output [63:0] BRAM7_din_a,     
    
    // Port B: Read 전용(64 bit)
    output BRAM7_en_b,             
    output [8:0] BRAM7_addr_b, //한 줄에 64비트씩 총 512줄이 있음.   
    input [63:0] BRAM7_dout_b, 


    // BRAM8 (4 layer compressed data FIFO) 인터페이스 - Simple Dual Port. 캐릭터 레이어 4개. 각각 1024byte 씩.
    // Port A: Write 전용(64 bit)
    output BRAM8_en_a,              // Port A 활성화 (보통 1'b1 고정 가능)
    output [0:0] BRAM8_we_a,        
    output [8:0] BRAM8_addr_a, //한 줄에 64비트씩 총 512줄이 있음.    
    output [63:0] BRAM8_din_a,     
    
    // Port B: Read 전용(64 bit)
    output BRAM8_en_b,             
    output [8:0] BRAM8_addr_b, //한 줄에 64비트씩 총 512줄이 있음.   
    input [63:0] BRAM8_dout_b,


    // BRAM9 (2 BG layer compressed data FIFO) 인터페이스 - Simple Dual Port. 배경 레이어 2개. 각각 2048byte 씩.
    // BRAM9 Port A (36-bit Interface)
    // Port A: Write 전용
    output BRAM9_en_a,              // Port A 활성화 (보통 1'b1 고정 가능)
    output [0:0] BRAM9_we_a,        
    output [8:0] BRAM9_addr_a, //한 줄에 64비트씩 총 512줄이 있음.    
    output [63:0] BRAM9_din_a,     
    
    // Port B: Read 전용
    output BRAM9_en_b,             
    output [8:0] BRAM9_addr_b, //한 줄에 64비트씩 총 512줄이 있음.   
    input [63:0] BRAM9_dout_b       
);

//BRAM 구조 정리
//하나의 BRAM을 4개의 레이어가 각각 128줄씩 나눠 씀. (BRAM9는 256줄씩 사용)
//BRAM7: addr 0-127: universal layer1, 128-255: universal layer2, 256-383: script layer, 384-511: status layer
//BRAM8: addr 0-127: character layer1, 128-255: character layer2, 256-383: character layer3, 384-511: character layer4
//BRAM9: addr 0-255: background layer1, 256-511: background layer2

//FIFO 제어신호 정리.
reg uni1_fifo_urgent; //universal layer1의 FIFO가 32줄 이하(총 128줄이므로 25%이하)로 채워져있을때 발생하는 신호.
reg uni1_fifo_front; //0-127사이의 값을 가지며 
reg uni1_fifo_rear; //0-127사이의 값을 가지며 

always @(posedge clk negedge reset) begin
    if(!reset) begin
    end
    else begin
    end
end
endmodule