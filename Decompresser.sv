module Decompresser( //Compressed_Data_FIFO 에서 값을 읽어와서 압축을 해제한 후 Decompressed_Data_FIFO에 저장함.
    input clk,
    input resetn, //negedge resetn

    input PPU_start, //프레임 생성을 시작할때 1로 설정되고 완성되면 0으로 떨어지고 다음 프레임 생성을 시작할때 1로 설정됨.

    //Compressed_Data_FIFO 인터페이스. 이걸로 압축된 데이터를 읽어와야 함.
    //Background Layer 1 FIFO
    input COM_Backgound_Layer1_r_master, //이 신호가 1일때만 dequeue가 가능함.
    input [63:0] COM_Background_Layer1_data,
    input [8:0] COM_Background_Layer1_count, //이 값이 1이상 이어야만 dequeue가 가능함.
    output COM_Background_Layer1_ena, //8'b00000000 or //8'b10000000를 읽으면 압축 데이터를 다 읽은것으므로 이 값을 0으로 내려줘야 외부메모리 읽기가 멈춰짐.
    output COM_Background_Layer1_dequeue, //r_master가 1이고 count가 1이상일때만 dequeue신호를 줘야 함.

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
    input DE_Background_Layer1_ena, 
    input DE_Background_Layer1_dequeue, 
    output DE_Backgound_Layer1_r_master, //이 신호가 1일때만 외부에서 dequeue가 가능함.
    output [63:0] DE_Background_Layer1_data,
    output DE_Background_Layer1_empty, //Compressed Data FIFO와 달리 여기서는 count대시 empty신호를 사용함. empty신호가 1이 아닐때만(0일때만) 외부에서 dequeue가 가능함. 

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
reg [3:0] back1_r_state;
reg [3:0] back1_r_state_next;
reg [3:0] back1_w_state;
reg [3:0] back1_w_state_next;
reg [3:0] back1_decompress_state;
reg [3:0] back1_decompress_state_next;
parameter IDLE = 0, START = 1, COMPLETE = 2;

reg [63:0] back1_r_64; //Compressed FIFO에서 읽은 값을 저장할 레지스터.
reg [7:0] back1_r_8; //back1_r_64를 4바이트로 나눠서 1바이트만 back1_decompress_state로 보낼 예정.
reg back1_r_8_valid; //이 값이 1일때의 back1_r_8은 유효한 값임. 클럭에지때 0으로 다시 내려야 함!!!! 아니면 연속된 값이 전달된걸로 취급함.

reg [6:0] back1_repeat_counter; //제어바이트의 MSB가 1일때 하위 7비트(연속되는 픽셀개수)를 저장할 레지스터.
reg back1_repeat_counter_w_ena; //이 신호가 1이면 클럭에지때 back1_r_8[6:0]을 back1_repeat_counter[6:0]에 저장함.
reg back1_repeat_counter_dec_ena; //이 신호가 1이면 클럭에지때 back1_repeat_counter를 1 감소시킴.

reg [6:0] back1_unrepeat_counter; //제어바이트의 MSB가 0일때 하위 7비트(불연속되는 픽셀개수)를 저장할 레지스터.
reg back1_unrepeat_counter_w_ena; //이 신호가 1이면 클럭에지때 back1_r_8[6:0]을 back1_unrepeat_counter[6:0]에 저장함.
reg back1_unrepeat_counter_dec_ena; //이 신호가 1이면 클럭에지때 back1_unrepeat_counter를 1 감소시킴.

reg back1_compressed_FIFO_r_req; //back1_decompress_state가 back1_r_state에게 보낼 신호. r_state는 이 신호를 받으면 FIFO에서 데이터를 읽어올 예정.
reg back1_decompressed_FIFO_w_req; //back1_decompress_state가 back1_w_state에게 보낼 신호.w_state는 이 신호를 받아서 FIFO에 데이터를 저장할 예정.
reg back1_r_end_req; //back1_decompress_state가 데이터의 끝을 알리는 특수제어바이트를 읽으면 이 신호를 보내고, r_state가 COM_Background_Layer1_ena를 0으로 내려주고 COMPLETE로 이동해야 함.
reg [7:0] back1_w_8; //back1_decompress_state가 w_state에게 보낼 신호. w_state가 이 신호를 받아서 64비트로 모아서 Decompressed FIFO에 넣어야 함.
reg back1_w_8_valid; //클럭에지때 0으로 다시 내려야 함!!!! 아니면 연속된 값이 전달된걸로 취급함. 따라서 이 신호는 1사이클만 유지되며 w_state가 바로 포착해야 함.

reg [63:0] back_w_64; //back1_w_8을 받아서 64비트로 모아서 FIFO에 저장해주면 됨.

always @(*) begin
    back1_r_state_next = back1_r_state;
    back1_w_state_next = back1_w_state_next;
    back1_decompress_state_next = back1_decompress_state; 

    back1_repeat_counter_w_ena = 0;
    back1_repeat_counter_dec_ena = 0;
    back1_unrepeat_counter_w_ena = 0;

    back1_compressed_FIFO_r_req = 0;
    back1_decompressed_FIFO_w_req = 0;
    back1_r_8 = 0;
    back1_r_8_valid = 0;
    back1_r_end_req = 0;
    back1_w_8 = 0;
    back1_w_8_valid = 0;

    BRAM10_we_a = 0;
    BRAM10_en_a = 0;
    BRAM10_din_a[63:0] = 0;
    BRAM10_addr_a[8:0] = 0;

    BRAM10_en_b = 0;
    BRAM10_addr_b[8:0] = 0;

    BRAM11_we_a = 0;
    BRAM11_en_a = 0;
    BRAM11_din_a[63:0] = 0;
    BRAM11_addr_a[8:0] = 0;

    BRAM11_en_b = 0;
    BRAM11_addr_b[8:0] = 0;

    BRAM12_we_a = 0;
    BRAM12_en_a = 0;
    BRAM12_din_a[63:0] = 0;
    BRAM12_addr_a[8:0] = 0;

    BRAM12_en_b = 0;
    BRAM12_addr_b[8:0] = 0;

    case(back1_r_state)
        IDLE: begin
            if(PPU_start) begin
                back1_r_state_next = START; //PPU_start가 오면 START로 이동함. 
            end
            else begin
                back1_r_state_next = IDLE;
            end
        end
        START: begin
            if(back1_compressed_FIFO_r_req)
        end
        COMPLETE: begin
        end
    endcase

    case(back1_decompress_state)
        IDLE: begin
            if(PPU_start) begin
                back1_decompress_state_next = START; //PPU_start가 오면 START로 이동함. 
            end
            else begin
                back1_decompress_state_next = IDLE;
            end
        end
        START: begin
            back1_compressed_FIFO_r_req = 1;
            if(back1_r_8_valid) begin //첫번째 바이트는 제어바이트임.
                case(back1_r_8[7])
                    1'b0: begin //하위 7비트는 불연속 픽셀 개수.
                        back1_unrepeat_counter_w_ena = 1; //back1_r_8[6:0]이 클럭에지때 unrepeat_counter에 저장됨.
                        back1_decompress_state_next = PIXEL_UNREPEAT;
                    end
                    1'b1: begin //하위 7비트는 반복횟수.
                        back1_repeat_counter_w_ena = 1; //back1_r_8[6:0]이 클럭에지때 repeat_counter에 저장됨.
                        back1_decompress_state_next = PIXEL_REPEAT;
                    end
                endcase
            end
            else begin
                back1_decompress_state_next = START;
            end
        end
        CONTROL_BYTE: begin
        end
        PIXEL_UNREPEAT: begin
            back1_compressed_FIFO_r_req = 1;
            if(back1_r_8_valid) begin
                if(back1_unrepeat_counter[6:0] == 1) begin
                    back1_decompressed_FIFO_w_req = 1; //w_state에게 Decompressed FIFO에 쓰기요청을 부탁함. 
                    back1_unrepeat_counter_dec_ena = 1; //이러면 클럭에지때 state는 CONTROL_BYTE로 가면서 unrepeat_counter는 0으로 감소함.
                    back1_w_8 = back1_r_8[7:0];
                    back1_w_8_valid = 1;
                    back1_decompress_state_next = CONTROL_BYTE;
                end
                else begin
                    back1_decompressed_FIFO_w_req = 1; //w_state에게 Decompressed FIFO에 쓰기요청을 부탁함. 
                    back1_unrepeat_counter_dec_ena = 1; //값을 하나 받았으므로 back1_w_8로 보내고 1 감소시킴. 
                    back1_w_8 = back1_r_8[7:0];
                    back1_w_8_valid = 1;
                    back1_decompress_state_next = PIXEL_UNREPEAT;
                end
            end
            else begin
                back1_decompress_state_next = PIXEL_UNREPEAT; //back1_r_8_valid 올때까지 기존상태 유지.
            end
        end
        PIXEL_REPEAT: begin
            back1_compressed_FIFO_r_req = 1;
            if(back1_r_8_valid) begin
                if(back1_repeat_counter[6:0] == 1) begin //1인 경우 바로 다음 제어 바이트를 읽어와야 함.
                    back1_decompressed_FIFO_w_req = 1; //w_state에게 Decompressed FIFO에 쓰기요청을 부탁함. 
                    back1_repeat_counter_dec_ena = 1; //이러면 클럭에지때 state는 CONTROL_BYTE로 가면서 repeat_counter는 0으로 감소함.
                    back1_w_8 = back1_r_8[7:0];
                    back1_w_8_valid = 1;
                    back1_decompress_state_next = CONTROL_BYTE;
                end
                else begin //2 이상인 경우
                    back1_decompress_state_next = SAME_PIXEL;
                    //back1_r_8을 저장해둬야 함!!! 제어신호 하나 추가로 만들어야 함. w_ena신호로 
                end
            end
            else begin
                back1_decompress_state_next = PIXEL_REPEAT;
            end
        end
        SAME_PIXEL: begin
        end
        COMPLETE: begin
        end
    endcase

    case(back1_w_state)
        IDLE: begin
        end
        START: begin
        end
        COMPLETE: begin
        end
    endcase
end

always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
    end
    else begin
        back1_r_state <= back1_r_state_next;
        back1_decompress_state <= back1_decompress_state_next;
        back1_w_state <= back1_w_state_next;
        if(back1_repeat_counter_w_ena) begin
            back1_repeat_counter[6:0] <= back1_r_8[6:0]; //하위 7비트 저장.
        end
        if(back1_repeat_counter_dec_ena) begin
            back1_repeat_counter[6:0] <= back1_repeat_counter[6:0] - 1;
        end
        if(back1_unrepeat_counter_w_ena) begin
            back1_unrepeat_counter[6:0] <= back1_r_8[6:0]; //하위 7비트 저장.
        end
        if(back1_unrepeat_counter_dec_ena) begin
            back1_unrepeat_counter[6:0] <= back1_unrepeat_counter[6:0] - 1;
        end
    end
end
endmodule