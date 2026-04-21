module Decompresser( //Compressed_Data_FIFO 에서 값을 읽어와서 압축을 해제한 후 Decompressed_Data_FIFO에 저장함.
    input clk,
    input resetn, //negedge resetn

    //Compressed_Data_FIFO 인터페이스. 이걸로 압축된 데이터를 읽어와야 함.
    //Background Layer 1 FIFO
    input Backgound_Layer1_r_master, //이 신호가 1일때만 dequeue가 가능함.
    input [63:0] Background_Layer1_data,
    input [8:0] Background_Layer1_count, //이 값이 1이상 이어야만 dequeue가 가능함.
    output Background_Layer1_ena, //8'b00000000 or //8'b10000000를 읽으면 압축 데이터를 다 읽은것으므로 이 값을 0으로 내려줘야 외부메모리 읽기가 멈춰짐.
    output Background_Layer1_dequeue, //r_master가 1이고 count가 1이상일때만 dequeue신호를 줘야 함.

    //Background Layer 2 FIFO
    //Character Layer 1 FIFO
    //Character Layer 2 FIFO
    //Character Layer 3 FIFO
    //Character Layer 4 FIFO
    //Script Layer FIFO
    //Status Layer FIFO
    //Universal Layer 1 FIFO
    //Universal Layer 2 FIFO

    //BRAM10,11,12 인터페이스.- Simple Dual Port. 
    //BRAM 10 (Universal_Layer1, Universal_Layer2, Script_Layer, Status_Layer)
    // Port A: Write 전용(64 bit)
    output reg BRAM10_en_a,              // Port A 활성화 (보통 1'b1 고정 가능)
    output reg [0:0] BRAM10_we_a,        
    output reg [8:0] BRAM10_addr_a, //한 줄에 64비트씩 총 512줄이 있음. 한 줄당 8개의 픽셀을 저장함. 
    output reg [63:0] BRAM10_din_a,     
    
    // Port B: Read 전용(64 bit). 외부모듈로부터 인터페이스 통해서 신호 들어오면 BRAM읽어서 output으로 보내주면 됨.
    output reg BRAM10_en_b,             
    output reg [8:0] BRAM10_addr_b, //한 줄에 64비트씩 총 512줄이 있음.   
    input [63:0] BRAM10_dout_b, 


    //BRAM 11 (Character_Layer1, Character_Layer2, Character_Layer3, Character_Layer4)
    // Port A: Write 전용(64 bit)
    output reg BRAM11_en_a,              // Port A 활성화 (보통 1'b1 고정 가능)
    output reg [0:0] BRAM11_we_a,        
    output reg [8:0] BRAM11_addr_a, //한 줄에 64비트씩 총 512줄이 있음.    
    output reg [63:0] BRAM11_din_a,     
    
    // Port B: Read 전용(64 bit)
    output reg BRAM11_en_b,             
    output reg [8:0] BRAM11_addr_b, //한 줄에 64비트씩 총 512줄이 있음.   
    input [63:0] BRAM11_dout_b, 


    //BRAM 12 (Background_Layer1, Background_Layer2)
    // Port A: Write 전용(64 bit)
    output reg BRAM12_en_a,              // Port A 활성화 (보통 1'b1 고정 가능)
    output reg [0:0] BRAM12_we_a,        
    output reg [8:0] BRAM12_addr_a, //한 줄에 64비트씩 총 512줄이 있음.    
    output reg [63:0] BRAM12_din_a,     
    
    // Port B: Read 전용(64 bit)
    output reg BRAM12_en_b,             
    output reg [8:0] BRAM12_addr_b, //한 줄에 64비트씩 총 512줄이 있음.   
    input [63:0] BRAM12_dout_b, 

    //외부 모듈이 사용해서 decompressed FIFO에서 값을 읽어올 수 있도록 하는 인터페이스
    //Background Layer 1 Decompressed FIFO
    input Background_Layer1_ena, 
    input Background_Layer1_dequeue, 
    output Backgound_Layer1_r_master, //이 신호가 1일때만 외부에서 dequeue가 가능함.
    output [63:0] Background_Layer1_data,
    output Background_Layer1_empty, //Compressed Data FIFO와 달리 여기서는 count대시 empty신호를 사용함. empty신호가 1이 아닐때만(0일때만) 외부에서 dequeue가 가능함. 

    //Background Layer 2 Decompressed FIFO
    //Character Layer 1 Decompressed FIFO
    //Character Layer 2 Decompressed FIFO
    //Character Layer 3 Decompressed FIFO
    //Character Layer 4 Decompressed FIFO
    //Script Layer Decompressed FIFO
    //Status Layer Decompressed FIFO
    //Universal Layer 1 Decompressed FIFO
    //Universal Layer 2 Decompressed FIFO
    
);
//BRAM 구조 정리(decompressed data FIFO)
//하나의 BRAM을 4개의 레이어가 각각 128줄씩 나눠 씀. (BRAM12는 256줄씩 사용)
//BRAM10: addr 0-127: universal layer1, 128-255: universal layer2, 256-383: script layer, 384-511: status layer
//BRAM11: addr 0-127: character layer1, 128-255: character layer2, 256-383: character layer3, 384-511: character layer4
//BRAM12: addr 0-255: background layer1, 256-511: background layer2

//decompressed layer FIFO 신호 정리
reg [8:0] back1_fifo_front; //하위 8비트는 실질적인 주소인덱스(0-255)를 나타내고 상위 1비트는 상태판별(full or empty)에 사용됨 
reg [8:0] back1_fifo_rear; //하위 8비트는 실질적인 주소인덱스(0-255)를 나타내고 상위 1비트는 상태판별(full or empty)에 사용됨 
wire back1_fifo_full = (back1_fifo_front[7:0] == back1_fifo_rear[7:0]) && (back1_fifo_front[8] != back1_fifo_rear[8]);
wire back1_fifo_empty = (back1_fifo_front[8:0] == back1_fifo_rear[8:0]);

//FSM 관련 신호 정리
reg [3:0] back1_fifo_r_state;
reg [3:0] back1_fifo_w_state;
reg [3:0] back1_fifo_decompress_state;

always @(*) begin
end

always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
    end
    else begin
    end
end
endmodule