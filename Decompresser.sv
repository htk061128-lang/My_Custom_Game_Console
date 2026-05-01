module Decompresser( //Compressed_Data_FIFO 에서 값을 읽어와서 압축을 해제한 후 Decompressed_Data_FIFO에 저장함. 이 모듈을 10개 복사해서 top 모듈에서 통합시킬 예정임.
    input clk,
    input resetn, //negedge resetn
    input [1:0] Clk_Counter, //Compressed_Data_FIFO 모듈에서 들어오는 input으로 클럭에지마다 0 - 1 - 2 - 3 - 0 - 1 - 2 - 3을 반복함. Compressed data FIFO의 r_master에 사용되는 그 신호임.
    
    //하나의 BRAM을 4개의 레이어가 각각 128줄씩 나눠 씀. (BRAM12는 256줄씩 사용)
    //BRAM10: addr 0-127: universal layer1, 128-255: universal layer2, 256-383: script layer, 384-511: status layer
    //BRAM11: addr 0-127: character layer1, 128-255: character layer2, 256-383: character layer3, 384-511: character layer4
    //BRAM12: addr 0-255: background layer1, 256-511: background layer2
    input [3:0] BRAM_number, //10, 11, 12중 하나의 값을 input으로 줘야 함.
    input [8:0] BRAM_base, //0, 128, 256, 384중 하나의 값을 input으로 줘야 함.
    input BRAM_size, //1이면 Background_Layer1, 2고(64 * 256) 0이면 나머지 Character_Layer1, 2, 3, 4, Universal_Layer1, 2, Script, Status 레이어임(64 * 128).
    input [3:0] BRAM_rw_counter_bits, //클럭마다 0 - 1 - 2 - 3 - 0 - 1 - 2 - 3 - 0으로 증가하는 Clk_Counter의 값이 몇일때 BRAM의 읽기, 쓰기가 가능하게 할지 설정함. 4비트인것에 주의!!
    //Universal_Layer1 : 0001(0), Universal_Layer2 : 0010(1), Script_Layer: 0100(2), Status_Layer : 1000(3)
    //Character_Layer1 : 0001(0), Character_Layer2 : 0010(1), Character_Layer3 : 0100(2), Character_Layer4 : 1000(3)
    //Background_Layer1 : 0011(0, 1) Background_Layer2: 1100(2, 3)
    //이렇게 설정해야 함!!!!!! 괄호는 대응하는 직접적인 Clk_Counter 값임.

    input PPU_start, //프레임 생성을 시작할때 1로 설정되고 완성되면 0으로 떨어지고 다음 프레임 생성을 시작할때 1로 설정됨.

    //Compressed_Data_FIFO 인터페이스. 이걸로 압축된 데이터를 읽어와야 함.
    input Compressed_FIFO_r_master, //이 신호가 1일때만 dequeue가 가능함.
    input [63:0] Compressed_FIFO_data,
    input [8:0] Compressed_FIFO_count, //이 값이 1이상 이어야만 dequeue가 가능함. back1, back2에서 이 값이 9비트이고 나머지는 8비트이므로 일단 9비트로 정의하고 나중에 8비트로 사용해야 하면 {1'b0, Character_Layer1_count[7:0]} 이렇게 input으로 넣어주면 됨.
    output reg Compressed_FIFO_ena, //8'b00000000 or //8'b10000000를 읽으면 압축 데이터를 다 읽은것으므로 이 값을 0으로 내려줘야 외부메모리 읽기가 멈춰짐. 상시로 1로 켜두다가 레이어 데이터를 싹 다 읽었으면 0으로 설정해야 함!!
    output reg Compressed_FIFO_dequeue, //r_master가 1이고 count가 1이상일때만 dequeue신호를 줘야 함.


    //BRAM10,11,12 인터페이스.- Simple Dual Port. 일단 이렇게 유지하고 나중에 필요한 포트만 top 모듈 밑에서 실제 BRAM 모듈에 연결해주면 됨. 나머지는 .BRAM11_en_b() 이렇게 비워두면 됨.
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
    input Decompressed_FIFO_ena, //이 신호는 사용되지 않을듯? Compressed FIFO는 이 신호를 이용해서 DDR3 읽기요청을 금지시킬수 있었는데 Decompressed FIFO는 그런게 없음.
    input Decompressed_FIFO_dequeue, 
    output Decompressed_FIFO_r_master, //이 신호가 1일때만 외부에서 dequeue가 가능함.
    output [63:0] Decompressed_FIFO_data,
    output Decompressed_FIFO_empty //Compressed Data FIFO와 달리 여기서는 count대시 empty신호를 사용함. empty신호가 1이 아닐때만(0일때만) 외부에서 dequeue가 가능함. 
);
//BRAM 구조 정리(decompressed data FIFO)
//하나의 BRAM을 4개의 레이어가 각각 128줄씩 나눠 씀. (BRAM12는 256줄씩 사용)
//BRAM10: addr 0-127: universal layer1, 128-255: universal layer2, 256-383: script layer, 384-511: status layer
//BRAM11: addr 0-127: character layer1, 128-255: character layer2, 256-383: character layer3, 384-511: character layer4
//BRAM12: addr 0-255: background layer1, 256-511: background layer2

wire tdm_match = (BRAM_rw_counter_bits[0] && Clk_Counter[1:0] == 0) || (BRAM_rw_counter_bits[1] && Clk_Counter[1:0] == 1) || (BRAM_rw_counter_bits[2] && Clk_Counter[1:0] == 2) || (BRAM_rw_counter_bits[3] && Clk_Counter[1:0] == 3);
wire compressed_fifo_r_end = tdm_match && (compressed_fifo_r_ena && (Compressed_FIFO_count > 0) && Compressed_FIFO_r_master); //이 값이 1이면 클럭에지때 해당 BRAM에 읽기가 일어나서 compressed_fifo_r_data에 값이 나옴.
wire decompressed_fifo_w_end = tdm_match && (decompressed_fifo_w_ena && ((~BRAM_size & ~fifo_full_128) || (BRAM_size & ~fifo_full_256))); //이 값이 1이면 클럭에지떄 해당 BRAM에 쓰기가 일어남.

//r_state, w_state가 사용할 인터페이스. 여기있는 신호만 FSM에서 바꿔줘야 함. 나머지는 알아서 처리되게 만들었음.front, rear 이런거 건들일 필요없음.
reg compressed_fifo_r_ena; //이 값은 r_end가 올때까지 1로 유지해야 함. 둘다 1인 클럭에지때 r_ena를 내려주면 됨.
reg [63:0] compressed_fifo_r_data;
reg compressed_fifo_r_state;
reg compressed_fifo_r_state_next;

reg decompressed_fifo_w_ena;
reg [63:0] decompressed_fifo_w_data;
reg [1:0] decompressed_fifo_r_state; //이거는 input으로 외부 모듈로부터 Decompressed FIFO 읽기요청이 있을때 해당하는 BRAM 출력에 연결하기 위해 사용하는 FSM임. 
reg [1:0] decompressed_fifo_r_state_next;
//

//decompressed layer FIFO 신호 정리. full, empty 신호는 BRAM_size에 따라 사용하지 않는 신호는 1로 고정!!!
reg [8:0] fifo_front_256; //하위 8비트는 실질적인 주소인덱스(0-255)를 나타내고 상위 1비트는 상태판별(full or empty)에 사용됨 
reg fifo_front_256_inc_ena;
reg [8:0] fifo_rear_256; //하위 8비트는 실질적인 주소인덱스(0-255)를 나타내고 상위 1비트는 상태판별(full or empty)에 사용됨 
reg fifo_rear_256_inc_ena;
wire fifo_full_256 = (BRAM_size == 1) ? (fifo_front_256[7:0] == fifo_rear_256[7:0]) && (fifo_front_256[8] != fifo_rear_256[8]) : 1;
wire fifo_empty_256 = (BRAM_size == 1) ? (fifo_front_256[8:0] == fifo_rear_256[8:0]) : 1;

reg [7:0] fifo_front_128; //하위 7비트는 실질적인 주소인덱스(0-127)를 나타내고 상위 1비트는 상태판별(full or empty)에 사용됨 
reg fifo_front_128_inc_ena;
reg [7:0] fifo_rear_128; //하위 7비트는 실질적인 주소인덱스(0-127)를 나타내고 상위 1비트는 상태판별(full or empty)에 사용됨 
reg fifo_rear_128_inc_ena;
wire fifo_full_128 = (BRAM_size == 0) ? (fifo_front_128[6:0] == fifo_rear_128[6:0]) && (fifo_front_128[7] != fifo_rear_128[7]) : 1;
wire fifo_empty_128 = (BRAM_size == 0) ? (fifo_front_128[7:0] == fifo_rear_128[7:0]) : 1;
//

//FSM 관련 신호 정리
reg [3:0] r_state;
reg [3:0] r_state_next;
reg [3:0] w_state;
reg [3:0] w_state_next;
reg [3:0] decompress_state;
reg [3:0] decompress_state_next;
parameter IDLE = 0, START = 1, COMPLETE = 2, PIXEL_REPEAT = 3, PIXEL_UNREPEAT = 4, SAME_PIXEL = 5, WAIT_DATA = 6, READ = 7, DELAY = 8, UNREPEAT_DELAY = 9, REPEAT_DELAY = 10, LAST_WRITE = 11;

reg [63:0] compressed_FIFO_reg_64;
reg compressed_FIFO_reg_64_w_ena; //이 신호가 1이면 클럭에지때 compressed_FIFO_reg_64에 compressed_fifo_r_data가 써짐.
reg [2:0] compressed_FIFO_reg_counter;
reg compressed_FIFO_reg_counter_inc_ena;
reg compressed_FIFO_reg_counter_reset; //이 신호가 1이면 클럭에지때 counter는 0으로 리셋됨.

reg [63:0] decompressed_FIFO_reg_64;
reg [2:0] decompressed_FIFO_reg_counter; //0 - 1 - 2 - 3 - 4 - 5 - 6 - 7 - 0 - 1 
reg decompressed_FIFO_reg_counter_inc_ena; 
reg [7:0] decompressed_FIFO_reg_wstrb; //8개 비트중에서 1로 설정된 위치에 w_8를 쓰는 제어신호.
reg decompressed_FIFO_reg_counter_reset;

reg [7:0] r_8; //r_64를 4바이트로 나눠서 1바이트만 decompress_state로 보낼 예정.
reg r_8_valid; //이 값이 1일때의 r_8은 유효한 값임. 클럭에지때 0으로 다시 내려야 함!!!! 아니면 연속된 값이 전달된걸로 취급함.
reg [7:0] r_8_reg; //r_8을 임시로 저장할 레지스터
reg r_8_reg_w_ena;

reg [6:0] repeat_counter; //제어바이트의 MSB가 1일때 하위 7비트(연속되는 픽셀개수)를 저장할 레지스터.
reg repeat_counter_w_ena; //이 신호가 1이면 클럭에지때 r_8[6:0]을 repeat_counter[6:0]에 저장함.
reg repeat_counter_dec_ena; //이 신호가 1이면 클럭에지때 repeat_counter를 1 감소시킴.

reg [6:0] unrepeat_counter; //제어바이트의 MSB가 0일때 하위 7비트(불연속되는 픽셀개수)를 저장할 레지스터.
reg unrepeat_counter_w_ena; //이 신호가 1이면 클럭에지때 r_8[6:0]을 unrepeat_counter[6:0]에 저장함.
reg unrepeat_counter_dec_ena; //이 신호가 1이면 클럭에지때 unrepeat_counter를 1 감소시킴.

reg [7:0] pixel_reg; //픽셀바이트를 일시적으로 저장할 레지스터.
reg pixel_reg_w_ena; //이 신호가 1이면 클럭에지때 r_8(픽셀값)[7:0]을 저장함. counter_w_ena는 하위 7비트만 저장하지만 이 신호는 8비트 전부 저장함.

reg compressed_FIFO_r_req; //decompress_state가 r_state에게 보낼 신호. r_state는 이 신호를 받으면 FIFO에서 데이터를 읽어올 예정.
reg decompressed_FIFO_w_req; //decompress_state가 w_state에게 보낼 신호.w_state는 이 신호를 받아서 FIFO에 데이터를 저장할 예정.
reg r_end_req; //decompress_state가 데이터의 끝을 알리는 특수제어바이트를 읽으면 이 신호를 보내고, r_state가 Compressed_FIFO_ena를 0으로 내려주고 COMPLETE로 이동해야 함.
reg [7:0] w_8; //decompress_state가 w_state에게 보낼 신호. w_state가 이 신호를 받아서 64비트로 모아서 Decompressed FIFO에 넣어야 함.
reg w_8_valid; //클럭에지때 0으로 다시 내려야 함!!!! 아니면 연속된 값이 전달된걸로 취급함. 따라서 이 신호는 1사이클만 유지되며 w_state가 바로 포착해야 함.
reg w_8_ready; //w_8_valid와 w_8을 주고 w_8_ready가 올때까지 decompress_state는 대기해야 함.
reg w_end_req; //decompress_state가 모든 데이터를 다 썼다면 이 신호를 1로 올려서 w_state를 COMPLETE 상태로 올려줘야 함.
//

always @(*) begin
    Decompressed_FIFO_empty = (BRAM_size == 1) ? fifo_empty_256 : fifo_empty_128;
    Decompressed_FIFO_data[63:0] = 0;
    Decompressed_FIFO_r_master = 0;
    if(BRAM_rw_counter_bits[0] && Clk_Counter[1:0] == 0) Decompressed_FIFO_r_master =  1;
    if(BRAM_rw_counter_bits[1] && Clk_Counter[1:0] == 1) Decompressed_FIFO_r_master =  1;
    if(BRAM_rw_counter_bits[2] && Clk_Counter[1:0] == 2) Decompressed_FIFO_r_master =  1;
    if(BRAM_rw_counter_bits[3] && Clk_Counter[1:0] == 3) Decompressed_FIFO_r_master =  1;

    decompress_state_next = decompress_state; 

    compressed_fifo_r_state_next = 0;
    decompressed_fifo_r_state_next = 0;

    repeat_counter_w_ena = 0;
    repeat_counter_dec_ena = 0;
    unrepeat_counter_w_ena = 0;
    unrepeat_counter_dec_ena = 0;

    pixel_reg_w_ena = 0;

    compressed_FIFO_r_req = 0;
    decompressed_FIFO_w_req = 0;

    r_8_reg_w_ena = 0;
    r_end_req = 0;
    w_8 = 0;
    w_8_valid = 0;
    w_end_req = 0;

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

    Compressed_FIFO_dequeue = 0; //Compressed_Data_FIFO 모듈로 가는 output임.
    Compressed_FIFO_ena = 1; //기본적으로 1로 설정하고 데이터를 다 읽었으면 0으로 내리고, PPU_start가 0으로 내려졌다가 다시 1로 상승하면 Compressed_FIFO도 다시 1로 설정되야 함.

    fifo_front_128_inc_ena = 0;
    fifo_front_256_inc_ena = 0;
    fifo_rear_128_inc_ena = 0;
    fifo_rear_256_inc_ena = 0;

    compressed_fifo_r_data[63:0] = 0;


    case(decompress_state)
        IDLE: begin
            if(PPU_start) begin
                decompress_state_next = START; //PPU_start가 오면 START로 이동함. 
            end
            else begin
                decompress_state_next = IDLE;
            end
        end
        START: begin
            compressed_FIFO_r_req = 1;
            if(r_8_valid && r_8[6:0] == 7'b0) begin //8'b10000000, 8'b000000000를 읽었다면, 즉 특수제어바이트일때.
                decompress_state_next = COMPLETE;
            end
            else if(r_8_valid) begin //첫번째 바이트는 제어바이트임.
                case(r_8[7])
                    1'b0: begin //하위 7비트는 불연속 픽셀 개수.
                        unrepeat_counter_w_ena = 1; //r_8[6:0]이 클럭에지때 unrepeat_counter에 저장됨.
                        decompress_state_next = PIXEL_UNREPEAT;
                    end
                    1'b1: begin //하위 7비트는 반복횟수.
                        repeat_counter_w_ena = 1; //r_8[6:0]이 클럭에지때 repeat_counter에 저장됨.
                        decompress_state_next = PIXEL_REPEAT;
                    end
                endcase
            end
            else begin
                decompress_state_next = START;
            end
        end
        PIXEL_UNREPEAT: begin
            compressed_FIFO_r_req = 1;
            if(r_8_valid) begin
                w_8 = r_8[7:0]; //w_state에 쓰기요청.
                w_8_valid = 1;
                r_8_reg_w_ena = 1; //r_8을 r_8_reg에 저장함. 
                if(w_8_ready == 1) begin //바로 ready가 오면 
                    decompress_state_next = (unrepeat_counter[6:0] == 1) ? START : PIXEL_UNREPEAT;
                    unrepeat_counter_dec_ena = 1; //unrepeat counter 1 감소시킴. 
                end
                else begin
                    decompress_state_next = UNREPEAT_DELAY;
                end
            end
            else begin
                decompress_state_next = PIXEL_UNREPEAT; //r_8_valid 올때까지 기존상태 유지.
            end
        end
        UNREPEAT_DELAY: begin
            w_8 = r_8_reg[7:0];
            w_8_valid = 1;
            if(w_8_ready) begin
                if(unrepeat_counter[6:0] == 1) begin
                    unrepeat_counter_dec_ena = 1; //state가 START로 가면서 unrepeat_counter는 0으로 설정됨(초기화)
                    decompress_state_next = START;
                end
                else if(unrepeat_counter[6:0] > 1) begin
                    unrepeat_counter_dec_ena = 1;
                    decompress_state_next = PIXEL_UNREPEAT;
                end
            end
            else begin
                decompress_state_next = UNREPEAT_DELAY;
            end
        end
        PIXEL_REPEAT: begin
            compressed_FIFO_r_req = 1;
            if(r_8_valid) begin
                w_8 = r_8[7:0]; //w_state에 쓰기요청. 
                w_8_valid = 1;
                r_8_reg_w_ena = 1; //r_8을 레지스터에 저장함.
                pixel_reg_w_ena = 1; //r_8을 pixel_reg[7:0]에 저장함.
                if(w_8_ready) begin //바로 w_8_ready가 온다면.
                    if(repeat_counter[6:0] == 1) begin
                        repeat_counter_dec_ena = 1;
                        decompress_state_next = START;
                    end
                    else if(repeat_counter[6:0] > 1) begin
                        repeat_counter_dec_ena = 1;
                        decompress_state_next = SAME_PIXEL;
                    end
                end
                else begin
                    decompress_state_next = REPEAT_DELAY;
                end
            end
            else begin
                decompress_state_next = PIXEL_REPEAT; //r_8_valid 올때까지 대기.
            end
        end
        REPEAT_DELAY: begin
            w_8 = r_8_reg[7:0]; //w_state에 쓰기요청. 
            w_8_valid = 1;
            if(w_8_ready) begin
                if(repeat_counter[6:0] == 1) begin
                    repeat_counter_dec_ena = 1;
                    decompress_state_next = START;
                end
                else if(repeat_counter[6:0] > 1) begin
                    repeat_counter_dec_ena = 1;
                    decompress_state_next = SAME_PIXEL;
                end
            end
            else begin
                decompress_state_next = REPEAT_DELAY;
            end
        end
        SAME_PIXEL: begin
            w_8[7:0] = pixel_reg[7:0];
            w_8_valid = 1;
            if(w_8_ready) begin
                if(repeat_counter[6:0] == 1) begin
                    repeat_counter_dec_ena = 1;
                    decompress_state_next = START;
                end
                else if(repeat_counter[6:0] > 1) begin
                    repeat_counter_dec_ena = 1;
                    decompress_state_next = SAME_PIXEL;
                end
            end
            else begin
                decompress_state_next = SAME_PIXEL;
            end
        end
        COMPLETE: begin
            r_end_req = 1; //이 신호를 1로 유지시켜주면 r_state가 compressed FIFO에게 ena 신호를 0으로 바꿔주면서 자신도 COMPLETE로 이동해야 함.
            w_end_req = 1;
            if(PPU_start == 0) begin
                decompress_state_next = IDLE; //PPU_start가 0이면 IDLE로 이동해서 다시 PPU_start가 1이 될때까지 대기함.
            end
            else if(PPU_start == 1)begin
                decompress_state_next = COMPLETE; //PPU_start가 1이면 계속 현재상태를 유지하며 대기함.
            end
        end
    endcase

    //compressed_fifo_r_end와 decompressed_fifo_w_end는 always@(*)문의 맨 밑에 있기 때문에 위에 있는 r_state, w_state에서는 맨 위 초기화 코드 떄문에 0으로 고정되는 버그가 생겨서 따로 assign문으로 독립시킬 예정임.
    if(tdm_match) begin //tdm_match는 BRAM_rw_counter_bits[3:0]와 Clk_Counter[3:0]에 의해서 1로 설정됨. 
        if(compressed_fifo_r_ena && (Compressed_FIFO_count > 0) && Compressed_FIFO_r_master) begin //세팅이 정상적으로 된다면 Compressed_FIFO_r_master랑 (Clk_Counter == 0) 조건은 동일해야 정상임. 혹시 몰라서 둘다 만족해야 하게 만들었음.
            Compressed_FIFO_dequeue = 1;
            compressed_fifo_r_state_next = 1;
            //compressed_fifo_r_end = 1; //이 값을 1로 설정하면 다음 클럭에지때 compressed_fifo_r_state가 1로 바뀌면서 compressed_fifo_r_data에 값이 담김.
        end
        if(decompressed_fifo_w_ena && ((~BRAM_size & ~fifo_full_128) || (BRAM_size & ~fifo_full_256))) begin //둘다 
            //decompressed_fifo_w_end = 1; //이 값을 1로 설정해서 클럭에지때 값이 써진다는것을 알려줌.
            case(BRAM_size)
            1'b0: begin //uni1, char1
                fifo_rear_128_inc_ena = 1;
            end
            1'b1: begin //back1
                fifo_rear_256_inc_ena = 1;
            end
            endcase
            case(BRAM_number[3:0])
                4'd10: begin
                    BRAM10_we_a = 1;
                    BRAM10_en_a = 1;
                    BRAM10_din_a[63:0] = decompressed_fifo_w_data[63:0];
                    BRAM10_addr_a[8:0] = (BRAM_size == 1) ? BRAM_base[8:0] + {1'b0, fifo_rear_256[7:0]}: BRAM_base[8:0] + {2'b00, fifo_rear_128[6:0]};
                end
                4'd11: begin
                    BRAM11_we_a = 1;
                    BRAM11_en_a = 1;
                    BRAM11_din_a[63:0] = decompressed_fifo_w_data[63:0];
                    BRAM11_addr_a[8:0] = (BRAM_size == 1) ? BRAM_base[8:0] + {1'b0, fifo_rear_256[7:0]}: BRAM_base[8:0] + {2'b00, fifo_rear_128[6:0]};
                end
                4'd12: begin
                    BRAM12_we_a = 1;
                    BRAM12_en_a = 1;
                    BRAM12_din_a[63:0] = decompressed_fifo_w_data[63:0];
                    BRAM12_addr_a[8:0] = (BRAM_size == 1) ? BRAM_base[8:0] + {1'b0, fifo_rear_256[7:0]}: BRAM_base[8:0] + {2'b00, fifo_rear_128[6:0]};
                end
            endcase
        end
        if(Decompressed_FIFO_dequeue && ((~BRAM_size & ~fifo_empty_128) || (BRAM_size & ~fifo_empty_256))) begin
            case(BRAM_size)
            1'b0: begin //uni1, char1
                fifo_front_128_inc_ena = 1;
            end
            1'b1: begin //back1
                fifo_front_256_inc_ena = 1;
            end
            endcase
            case(BRAM_number[3:0])
                4'd10: begin
                    BRAM10_en_b = 1;
                    BRAM10_addr_b[8:0] = (BRAM_size == 1) ? BRAM_base[8:0] + {1'b0, fifo_front_256[7:0]} : BRAM_base[8:0] + {2'b0, fifo_front_128[6:0]};
                    decompressed_fifo_r_state_next = 1;
                end
                4'd11: begin
                    BRAM11_en_b = 1;
                    BRAM11_addr_b[8:0] = (BRAM_size == 1) ? BRAM_base[8:0] + {1'b0, fifo_front_256[7:0]} : BRAM_base[8:0] + {2'b0, fifo_front_128[6:0]};
                    decompressed_fifo_r_state_next = 2;
                end
                4'd12: begin
                    BRAM12_en_b = 1;
                    BRAM12_addr_b[8:0] = (BRAM_size == 1) ? BRAM_base[8:0] + {1'b0, fifo_front_256[7:0]} : BRAM_base[8:0] + {2'b0, fifo_front_128[6:0]};
                    decompressed_fifo_r_state_next = 3;
                end
            endcase
        end
    end

    case(compressed_fifo_r_state)
        0: compressed_fifo_r_data[63:0] = 0;
        1: compressed_fifo_r_data[63:0] = Compressed_FIFO_data[63:0];
    endcase

    case(decompressed_fifo_r_state)
        0: begin
            Decompressed_FIFO_data[63:0] = 0;
        end
        1: begin
            Decompressed_FIFO_data[63:0] = BRAM10_dout_b[63:0];
        end
        2: begin
            Decompressed_FIFO_data[63:0] = BRAM11_dout_b[63:0];
        end
        3: begin
            Decompressed_FIFO_data[63:0] = BRAM12_dout_b[63:0];
        end
    endcase
end

always @(*) begin
    r_state_next = r_state;
    compressed_FIFO_reg_counter_reset = 0;
    compressed_fifo_r_ena = 0;
    r_8[7:0] = 0;
    r_8_valid = 0;
    compressed_FIFO_reg_counter_inc_ena = 0;
    compressed_FIFO_reg_64_w_ena = 0;
    Compressed_FIFO_ena = 1; //기본값을 1로 설정해서 Compressed_Data_FIFO가 외부 메모리에서 값을 읽어오는것을 활성화 함. COMPLETE 상태에서 0으로 꺼줌.

    case(r_state)
        IDLE: begin
            if(PPU_start) begin 
                r_state_next = START; //PPU_start가 오면 START로 이동함. 
                compressed_FIFO_reg_counter_reset = 1;
            end
            else begin
                r_state_next = IDLE;
            end
        end
        START: begin
            compressed_fifo_r_ena = 1; //일단 바로 Compressed FIFO를 읽기를 시도함.
            if(r_end_req) begin
                r_state_next = COMPLETE;
            end
            else if(compressed_fifo_r_end) begin //compressed_fifo_r_end가 올때까지 대기함. 
                r_state_next = WAIT_DATA;
            end
            else begin
                r_state_next = START;
            end
        end
        WAIT_DATA: begin //r_state가 클럭에지때 WAIT_DATA로 가는 동시에 compressed_fifo_r_data[63:0]가 나옴.
            r_state_next = READ;
            compressed_FIFO_reg_64_w_ena = 1;
            if(compressed_FIFO_r_req) begin
                r_8[7:0] = compressed_fifo_r_data[7:0];
                r_8_valid = 1;
                compressed_FIFO_reg_counter_inc_ena = 1; //클럭에지떄 counter는 1이 됨.
            end
            if(r_end_req) begin //r_state로부터 r_end_req가 오면 모든 데이터를 다 읽었다는 의미이므로 COMPLETE로 이동해서 Compressed_FIFO_ena를 0으로 내려줘야 함.
                r_state_next = COMPLETE;
            end
        end
        READ: begin //r_state가 클럭에지때 READ로 가는 동시에 compressed_fifo_r_data[63:0]가 나옴.
            case(compressed_FIFO_reg_counter[2:0])
                0: begin //처음에는 0으로 초기화 되어 있어야 함 !!!!! WAIT_DATA일때 compressed_FIFO_r_req가 온 경우에는 1로 시작함. 
                    r_state_next = READ;
                    if(compressed_FIFO_r_req) begin
                        r_8[7:0] = compressed_FIFO_reg_64[7:0];
                        r_8_valid = 1;
                        compressed_FIFO_reg_counter_inc_ena = 1; //클럭에지떄 counter는 1이 됨.
                    end
                    if(r_end_req) begin //r_state로부터 r_end_req가 오면 모든 데이터를 다 읽었다는 의미이므로 COMPLETE로 이동해서 Compressed_FIFO_ena를 0으로 내려줘야 함.
                        r_state_next = COMPLETE;
                    end
                end
                1: begin
                    r_state_next = READ;
                    if(compressed_FIFO_r_req) begin
                        r_8[7:0] = compressed_FIFO_reg_64[15:8];
                        r_8_valid = 1;
                        compressed_FIFO_reg_counter_inc_ena = 1; //클럭에지떄 counter는 2이 됨.
                    end
                    if(r_end_req) begin //r_state로부터 r_end_req가 오면 모든 데이터를 다 읽었다는 의미이므로 COMPLETE로 이동해서 Compressed_FIFO_ena를 0으로 내려줘야 함.
                        r_state_next = COMPLETE;
                    end
                end
                2: begin
                    r_state_next = READ;
                    if(compressed_FIFO_r_req) begin
                        r_8[7:0] = compressed_FIFO_reg_64[23:16];
                        r_8_valid = 1;
                        compressed_FIFO_reg_counter_inc_ena = 1; //클럭에지떄 counter는 3이 됨.
                    end
                    if(r_end_req) begin //r_state로부터 r_end_req가 오면 모든 데이터를 다 읽었다는 의미이므로 COMPLETE로 이동해서 Compressed_FIFO_ena를 0으로 내려줘야 함.
                        r_state_next = COMPLETE;
                    end
                end
                3: begin
                    r_state_next = READ;
                    if(compressed_FIFO_r_req) begin
                        r_8[7:0] = compressed_FIFO_reg_64[31:24];
                        r_8_valid = 1;
                        compressed_FIFO_reg_counter_inc_ena = 1; //클럭에지떄 counter는 4이 됨.
                    end
                    if(r_end_req) begin //r_state로부터 r_end_req가 오면 모든 데이터를 다 읽었다는 의미이므로 COMPLETE로 이동해서 Compressed_FIFO_ena를 0으로 내려줘야 함.
                        r_state_next = COMPLETE;
                    end
                end
                4: begin
                    r_state_next = READ;
                    if(compressed_FIFO_r_req) begin
                        r_8[7:0] = compressed_FIFO_reg_64[39:32];
                        r_8_valid = 1;
                        compressed_FIFO_reg_counter_inc_ena = 1; //클럭에지떄 counter는 5이 됨.
                    end
                    if(r_end_req) begin //r_state로부터 r_end_req가 오면 모든 데이터를 다 읽었다는 의미이므로 COMPLETE로 이동해서 Compressed_FIFO_ena를 0으로 내려줘야 함.
                        r_state_next = COMPLETE;
                    end
                end
                5: begin
                    r_state_next = READ;
                    if(compressed_FIFO_r_req) begin
                        r_8[7:0] = compressed_FIFO_reg_64[47:40];
                        r_8_valid = 1;
                        compressed_FIFO_reg_counter_inc_ena = 1; //클럭에지떄 counter는 6이 됨.
                    end
                    if(r_end_req) begin //r_state로부터 r_end_req가 오면 모든 데이터를 다 읽었다는 의미이므로 COMPLETE로 이동해서 Compressed_FIFO_ena를 0으로 내려줘야 함.
                        r_state_next = COMPLETE;
                    end
                end
                6: begin
                    r_state_next = READ;
                    if(compressed_FIFO_r_req) begin
                        r_8[7:0] = compressed_FIFO_reg_64[55:48];
                        r_8_valid = 1;
                        compressed_FIFO_reg_counter_inc_ena = 1; //클럭에지떄 counter는 7이 됨.
                    end
                    if(r_end_req) begin //r_state로부터 r_end_req가 오면 모든 데이터를 다 읽었다는 의미이므로 COMPLETE로 이동해서 Compressed_FIFO_ena를 0으로 내려줘야 함.
                        r_state_next = COMPLETE;
                    end
                end
                7: begin
                    r_state_next = START; //START로 다시 가서 Compressed_Data_FIFO에서 값을 읽어와야 함.
                    if(compressed_FIFO_r_req) begin
                        r_8[7:0] = compressed_FIFO_reg_64[63:56];
                        r_8_valid = 1;
                        compressed_FIFO_reg_counter_inc_ena = 1; //클럭에지떄 오버플로때문에 counter는 0이 됨.
                    end
                    if(r_end_req) begin //r_state로부터 r_end_req가 오면 모든 데이터를 다 읽었다는 의미이므로 COMPLETE로 이동해서 Compressed_FIFO_ena를 0으로 내려줘야 함.
                        r_state_next = COMPLETE;
                    end
                end
            endcase
        end
        COMPLETE: begin
            Compressed_FIFO_ena = 0; //0으로 쭉 내려줘서, Compressed_Data_FIFO 모듈에서 외부 메모리에서 데이터읽기요청을 중단시킴.
            if(PPU_start == 0) begin
                r_state_next = IDLE;
            end
            else if(PPU_start == 1) begin
                r_state_next = COMPLETE;
            end
        end
    endcase
end

always @(*) begin
    w_state_next = w_state;
    decompressed_FIFO_reg_counter_reset = 0;
    decompressed_FIFO_reg_counter_inc_ena = 0;
    decompressed_FIFO_reg_wstrb[7:0] = 8'b00000000;
    w_8_ready = 0;
    decompressed_fifo_w_ena = 0;
    decompressed_fifo_w_data[63:0] = 0;

    case(w_state)
        IDLE: begin
            if(PPU_start) begin
                w_state_next = START;
                decompressed_FIFO_reg_counter_reset = 1; //카운터 꼭 초기화 해줘야 함.
            end
            else begin
                w_state_next = IDLE;
            end
        end
        START: begin //decompressed_FIFO_reg_counter 가 0으로 초기화되어 있어야 함!!!!
            case(decompressed_FIFO_reg_counter[2:0])
                0: begin
                    w_state_next = START;
                    if(w_8_valid) begin
                        decompressed_FIFO_reg_counter_inc_ena = 1; //클럭에지때 counter가 1이 됨.
                        decompressed_FIFO_reg_wstrb[7:0] = 8'b00000001;
                        w_8_ready = 1; //decompress_state에게 완료되었다고 알려줌.
                    end
                end
                1: begin
                    w_state_next = START;
                    if(w_8_valid) begin
                        decompressed_FIFO_reg_counter_inc_ena = 1; //클럭에지때 counter가 2가 됨.
                        decompressed_FIFO_reg_wstrb[7:0] = 8'b00000010;
                        w_8_ready = 1; //decompress_state에게 완료되었다고 알려줌.
                    end
                end
                2: begin
                    w_state_next = START;
                    if(w_8_valid) begin
                        decompressed_FIFO_reg_counter_inc_ena = 1; //클럭에지때 counter가 3가 됨.
                        decompressed_FIFO_reg_wstrb[7:0] = 8'b00000100;
                        w_8_ready = 1; //decompress_state에게 완료되었다고 알려줌.
                    end
                end
                3: begin
                    w_state_next = START;
                    if(w_8_valid) begin
                        decompressed_FIFO_reg_counter_inc_ena = 1; //클럭에지때 counter가 4가 됨.
                        decompressed_FIFO_reg_wstrb[7:0] = 8'b00001000;
                        w_8_ready = 1; //decompress_state에게 완료되었다고 알려줌.
                    end
                end
                4: begin
                    w_state_next = START;
                    if(w_8_valid) begin
                        decompressed_FIFO_reg_counter_inc_ena = 1; //클럭에지때 counter가 5가 됨.
                        decompressed_FIFO_reg_wstrb[7:0] = 8'b00010000;
                        w_8_ready = 1; //decompress_state에게 완료되었다고 알려줌.
                    end
                end
                5: begin
                    w_state_next = START;
                    if(w_8_valid) begin
                        decompressed_FIFO_reg_counter_inc_ena = 1; //클럭에지때 counter가 6가 됨.
                        decompressed_FIFO_reg_wstrb[7:0] = 8'b00100000;
                        w_8_ready = 1; //decompress_state에게 완료되었다고 알려줌.
                    end
                end
                6: begin
                    w_state_next = START;
                    if(w_8_valid) begin
                        decompressed_FIFO_reg_counter_inc_ena = 1; //클럭에지때 counter가 7가 됨.
                        decompressed_FIFO_reg_wstrb[7:0] = 8'b01000000;
                        w_8_ready = 1; //decompress_state에게 완료되었다고 알려줌.
                    end
                end
                7: begin
                    if(w_8_valid) begin //8번쨰 w_8[7:0]이 오고 즉각적으로 Decompressed FIFO에 쓰기요청을 보냄. 
                        decompressed_FIFO_reg_counter_inc_ena = 1; //클럭에지때 counter가 0가 됨.
                        decompressed_FIFO_reg_wstrb[7:0] = 8'b10000000; //
                        decompressed_fifo_w_ena = 1;
                        decompressed_fifo_w_data[63:0] = {w_8[7:0], decompressed_FIFO_reg_64[55:0]};
                        if(decompressed_fifo_w_end) begin
                            w_state_next = START;
                            w_8_ready = 1;
                        end
                        else begin
                            w_state_next = DELAY;
                        end
                    end
                    else begin
                        w_state_next = START;
                    end
                end
            endcase
            if(w_end_req) begin
                w_state_next = LAST_WRITE; //w_end_req를 받으면 LAST_WRITE로 이동해서 지금까지 decompressed_FIFO_reg_64에 저장해두었던 것을 마지막으로 Decompressed FIFO에 넣은 후 COMPLETE로 이동함.
            end
        end
        DELAY: begin
            decompressed_fifo_w_ena = 1; //end가 올때까지 신호 계속 유지해 줘야 함. 
            decompressed_fifo_w_data[63:0] = decompressed_FIFO_reg_64[63:0]; //이제는 decompressed_FIFO_reg_64에 다 저장되었으므로 이렇게 유지함. 현재 counter는 오버플로로 인해 0으로 초기화 된 상황.
            if(decompressed_fifo_w_end) begin
                w_state_next = START;
                decompressed_FIFO_reg_counter_reset = 1; //혹시 모르니 다시 초기화 해줌.
                w_8_ready = 1; //이제야 w_8_ready를 decompress_state에게 줌.
                if(w_end_req) begin //Decompressed FIFO에 써지는것이 확정된 시점에 COMPLETE로 이동해야 함. 따라서 w_end_req는 r_state가 계속 유지해야 하는 신호임. 
                    w_state_next = COMPLETE;
                end
                else begin
                    w_state_next = START;
                end
            end
            else begin
                w_state_next = DELAY;
            end
        end
        LAST_WRITE: begin 
            case(decompressed_FIFO_reg_counter)
                0: begin
                    decompressed_fifo_w_ena = 1;
                    decompressed_fifo_w_data[63:0] = 64'b0;
                end
                1: begin
                    decompressed_fifo_w_ena = 1;
                    decompressed_fifo_w_data[63:0] = {56'b0, decompressed_FIFO_reg_64[7:0]};
                end
                2: begin
                    decompressed_fifo_w_ena = 1;
                    decompressed_fifo_w_data[63:0] = {48'b0, decompressed_FIFO_reg_64[15:0]};
                end
                3: begin
                    decompressed_fifo_w_ena = 1;
                    decompressed_fifo_w_data[63:0] = {40'b0, decompressed_FIFO_reg_64[23:0]};
                end
                4: begin
                    decompressed_fifo_w_ena = 1;
                    decompressed_fifo_w_data[63:0] = {32'b0, decompressed_FIFO_reg_64[31:0]};
                end
                5: begin
                    decompressed_fifo_w_ena = 1;
                    decompressed_fifo_w_data[63:0] = {24'b0, decompressed_FIFO_reg_64[39:0]};
                end
                6: begin
                    decompressed_fifo_w_ena = 1;
                    decompressed_fifo_w_data[63:0] = {16'b0, decompressed_FIFO_reg_64[47:0]};
                end
                7: begin
                    decompressed_fifo_w_ena = 1;
                    decompressed_fifo_w_data[63:0] = {8'b0, decompressed_FIFO_reg_64[55:0]};
                end
            endcase
            if(decompressed_fifo_w_end) begin
                w_state_next = COMPLETE;
            end
            else begin
                w_state_next = LAST_WRITE;
            end
        end
        COMPLETE: begin
            if(PPU_start == 0) begin
                r_state_next = IDLE;
            end
            else if(PPU_start == 1) begin
                r_state_next = COMPLETE;
            end
        end
    endcase
end

always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        r_state <= IDLE;
        w_state <= IDLE; 
        decompress_state <= IDLE;
        compressed_fifo_r_state <= 0;
        decompressed_fifo_r_state <= 0;
        fifo_front_128[7:0] <= 0;
        fifo_front_256[8:0] <= 0;
        fifo_rear_128[7:0] <= 0;
        fifo_rear_256[8:0] <= 0;
        repeat_counter[6:0] <= 0;
        unrepeat_counter[6:0] <= 0;
        pixel_reg[7:0] <= 0;
        compressed_FIFO_reg_64[63:0] <= 0;
        compressed_FIFO_reg_counter[2:0] <= 0;

        decompressed_FIFO_reg_64[63:0] <= 0;
        decompressed_FIFO_reg_counter[2:0] <= 0;
        r_8_reg[7:0] <= 0;
    end
    else begin
        r_state <= r_state_next;
        decompress_state <= decompress_state_next;
        w_state <= w_state_next;

        compressed_fifo_r_state <= compressed_fifo_r_state_next;
        decompressed_fifo_r_state <= decompressed_fifo_r_state_next;

        if(r_state == COMPLETE && w_state == COMPLETE && decompress_state == COMPLETE) begin //레지스터들 다 초기화 해줘야 함.
            fifo_front_128[7:0] <= 0;
            fifo_front_256[8:0] <= 0;
            fifo_rear_128[7:0] <= 0;
            fifo_rear_256[8:0] <= 0;
            repeat_counter[6:0] <= 0;
            unrepeat_counter[6:0] <= 0;
            pixel_reg[7:0] <= 0;
            compressed_FIFO_reg_64[63:0] <= 0;
            compressed_FIFO_reg_counter[2:0] <= 0;
            decompressed_FIFO_reg_64[63:0] <= 0;
            decompressed_FIFO_reg_counter[2:0] <= 0;
            r_8_reg[7:0] <= 0;
        end

        if(repeat_counter_w_ena) begin
            repeat_counter[6:0] <= r_8[6:0]; //하위 7비트 저장.
        end
        if(repeat_counter_dec_ena) begin
            repeat_counter[6:0] <= repeat_counter[6:0] - 1; //repeat_counter 1 감소.
        end
        if(unrepeat_counter_w_ena) begin
            unrepeat_counter[6:0] <= r_8[6:0]; //하위 7비트 저장.
        end
        if(unrepeat_counter_dec_ena) begin
            unrepeat_counter[6:0] <= unrepeat_counter[6:0] - 1; //unrepeat_counter 1 감소.
        end
        if(pixel_reg_w_ena) begin
            pixel_reg[7:0] <= r_8[7:0]; //8비트 전부 저장.
        end

        if(fifo_front_128_inc_ena) begin
            fifo_front_128[7:0] <= fifo_front_128[7:0] + 1; //상태판별위한 추가 1비트 있어서 총 8비트임.
        end
        if(fifo_rear_128_inc_ena) begin
            fifo_rear_128[7:0] <= fifo_rear_128[7:0] + 1;
        end
        if(fifo_front_256_inc_ena) begin
            fifo_front_256[8:0] <= fifo_front_256[8:0] + 1; //상태판별위한 추가 1비트 있어서 총 9비트임.
        end
        if(fifo_rear_256_inc_ena) begin
            fifo_rear_256[8:0] <= fifo_rear_256[8:0] + 1;
        end

        if(compressed_FIFO_reg_64_w_ena) begin
            compressed_FIFO_reg_64[63:0] <= compressed_fifo_r_data[63:0];
        end
        if(compressed_FIFO_reg_counter_inc_ena) begin
            compressed_FIFO_reg_counter[2:0] <= compressed_FIFO_reg_counter[2:0] + 1; //0에서 7까지 증가하다가 7 -> 0 으로 자연스럽게 초기화됨.
        end
        if(compressed_FIFO_reg_counter_reset) begin
            compressed_FIFO_reg_counter[2:0] <= 0;
        end

        case(1'b1)
            decompressed_FIFO_reg_wstrb[0]: decompressed_FIFO_reg_64[63:0] <= {decompressed_FIFO_reg_64[63:8], w_8[7:0]};
            decompressed_FIFO_reg_wstrb[1]: decompressed_FIFO_reg_64[63:0] <= {decompressed_FIFO_reg_64[63:16], w_8[7:0], decompressed_FIFO_reg_64[7:0]};
            decompressed_FIFO_reg_wstrb[2]: decompressed_FIFO_reg_64[63:0] <= {decompressed_FIFO_reg_64[63:24], w_8[7:0], decompressed_FIFO_reg_64[15:0]};
            decompressed_FIFO_reg_wstrb[3]: decompressed_FIFO_reg_64[63:0] <= {decompressed_FIFO_reg_64[63:32], w_8[7:0], decompressed_FIFO_reg_64[23:0]};
            decompressed_FIFO_reg_wstrb[4]: decompressed_FIFO_reg_64[63:0] <= {decompressed_FIFO_reg_64[63:40], w_8[7:0], decompressed_FIFO_reg_64[31:0]};
            decompressed_FIFO_reg_wstrb[5]: decompressed_FIFO_reg_64[63:0] <= {decompressed_FIFO_reg_64[63:48], w_8[7:0], decompressed_FIFO_reg_64[39:0]};
            decompressed_FIFO_reg_wstrb[6]: decompressed_FIFO_reg_64[63:0] <= {decompressed_FIFO_reg_64[63:56], w_8[7:0], decompressed_FIFO_reg_64[47:0]};
            decompressed_FIFO_reg_wstrb[7]: decompressed_FIFO_reg_64[63:0] <= {w_8[7:0], decompressed_FIFO_reg_64[55:0]};
        endcase
        if(decompressed_FIFO_reg_counter_inc_ena) begin
            decompressed_FIFO_reg_counter[2:0] <= decompressed_FIFO_reg_counter[2:0] + 1; //0에서 7까지 증가하다가 7 -> 0 으로 자연스럽게 초기화됨.
        end
        if(decompressed_FIFO_reg_counter_reset) begin
            decompressed_FIFO_reg_counter[2:0] <= 0;
        end

        if(r_8_reg_w_ena) begin
            r_8_reg[7:0] <= r_8[7:0];
        end
    end 
end
endmodule