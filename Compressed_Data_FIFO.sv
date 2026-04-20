module Compressed_Data_FIFO( //외부 메모리에서 라운드 로빈 방식으로 burst로 데이터를 읽어와서 BRAM에 저장함. 
    input clk, //50MHz
    input resetn, //negedge reset

    input PPU_start, //이 신호가 들어오면 비로소 작동을 시작함. 프레임 생성 시작할때 1로 켜주면 됨. 그러면 main_state가 IDLE -> START로 변경됨. 

    //외부 메모리에서 읽어와야 할 압축된 레이어 데이터 위치. 상위 4비트는 0임.
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
    input [63:0] BRAM9_dout_b,


    //외부 모듈이 10개의 압축된 데이터 FIFO를 읽어올 수 있도록 하는 인터페이스. 
    //***r_master가 1이고 count가 0이 아닐때 dequeue신호를 바로 보내야 함. 조건을 만족하는 다음 클럭에지때 신호를 보내면 절대안됌!!!***
    //Background Layer 1 FIFO
    input Background_Layer1_ena, //이 신호가 0이면 "외부 메모리"로부터 해당 레이어의 데이터를 읽는것이 중단됨. ***따라서 상시로 1로 켜두다가 레이어 데이터를 싹 다 읽었으면 0으로 설정해야 함!!***
    input Background_Layer1_dequeue, //이 신호가 1이면 클럭에지때 값이 Background_Layer1_data[63:0]로 나옴.
    output Backgound_Layer1_r_master, //이 신호가 1일때만 dequeue 신호가 왔을때 FIFO 읽기가 가능함. 이 신호는 25MHz주기로 1이 됨. (50MHz 동기화 BRAM을 시분할)
    output [63:0] Background_Layer1_data,
    output [8:0] Background_Layer1_count, //현재 FIFO에 들어가있는 데이터 개수를 나타냄. 이 값이 0이면 dequeue 신호를 줘도 읽기가 불가능함. (background layer 1은 0-256 사이의 값을 가짐)

    //Background Layer 2 FIFO
    input Background_Layer2_ena, //애초에 사용하지 않는 레이어거나, 레이어 데이터를 다 읽었을때 이 신호를 0으로 만들어주면 외부메모리로부터 데이터를 읽어오는것이 중단됨.
    input Background_Layer2_dequeue,
    output Background_Layer2_r_master,
    output [63:0] Background_Layer2_data,
    output [8:0] Background_Layer2_count, //이 값이 0이면 dequeue를 줘도 읽기가 불가능하고 0-256사이의 값을 가짐. 8비트인거 주의해야 함!

    //Character Layer 1 FIFO
    input Character_Layer1_ena, //이 신호가 1인 동안은 외부메모리에서 값을 읽어오려고 하기 때문에 따라서 상시로 1로 켜두다가 다 읽었으면 0으로 설정해야 함!!
    input Character_Layer1_dequeue,
    output Character_Layer1_r_master, //r_master가 1이고 count가 0이 아닐때 dequeue신호를 바로 보내야 함. 조건을 만족하는 다음 클럭에지때 신호를 보내면 절대안됌!!!
    output [63:0] Character_Layer1_data,
    output [7:0] Character_Layer1_count, //이 값이 0이면 dequeue를 줘도 읽기가 불가능하고 0-128사이의 값을 가짐. 7비트인거 주의해야 함!

    //Character Layer 2 FIFO
    input Character_Layer2_ena,
    input Character_Layer2_dequeue,
    output Character_Layer2_r_master,
    output [63:0] Character_Layer2_data,
    output [7:0] Character_Layer2_count, 

    //Character Layer 3 FIFO
    input Character_Layer3_ena,
    input Character_Layer3_dequeue,
    output Character_Layer3_r_master,
    output [63:0] Character_Layer3_data,
    output [7:0] Character_Layer3_count, 

    //Character Layer 4 FIFO
    input Character_Layer4_ena,
    input Character_Layer4_dequeue,
    output Character_Layer4_r_master,
    output [63:0] Character_Layer4_data,
    output [7:0] Character_Layer4_count, 

    //Script Layer FIFO
    input Script_Layer_ena,
    input Script_Layer_dequeue,
    output Script_Layer_r_master,
    output [63:0] Script_Layer_data,
    output [7:0] Script_Layer_count,

    //Status Layer FIFO
    input Status_Layer_ena, //애초에 사용하지 않는 레이어거나, 데이터를 다 읽었을때 이 신호를 0으로 만들어주면 외부메모리로부터 데이터를 읽어오는것이 중단됨.
    input Status_Layer_dequeue,
    output Status_Layer_r_master,
    output [63:0] Status_Layer_data,
    output [7:0] Status_Layer_count,

    //Universal Layer 1 FIFO
    input Universal_Layer1_ena, //애초에 사용하지 않는 레이어거나, 데이터를 다 읽었을때 이 신호를 0으로 만들어주면 외부메모리로부터 데이터를 읽어오는것이 중단됨.
    input Universal_Layer1_dequeue,
    output Universal_Layer1_r_master,
    output [63:0] Universal_Layer1_data,
    output [7:0] Universal_Layer1_count,

    //Universal Layer 2 FIFO
    input Universal_Layer2_ena,
    input Universal_Layer2_dequeue,
    output Universal_Layer2_r_master,
    output [63:0] Universal_Layer2_data,
    output [7:0] Universal_Layer2_count,
);
assign Background_Layer1_r_master = back1_fifo_r_master;
assign Background_Layer2_r_master = back2_fifo_r_master;
assign Character_Layer1_r_master = char1_fifo_r_master;
assign Character_Layer2_r_master = char2_fifo_r_master;
assign Character_Layer3_r_master = char3_fifo_r_master;
assign Character_Layer4_r_master = char4_fifo_r_master;
assign Script_Layer_r_master = script_fifo_r_master;
assign Status_Layer_r_master = status_fifo_r_master;
assign Universal_Layer1_r_master = uni1_fifo_r_master;
assign Universal_Layer2_r_master = uni2_fifo_r_master;

assign Background_Layer1_count = back1_fifo_count;
assign Background_Layer2_count = back2_fifo_count;
assign Character_Layer1_count = char1_fifo_count;
assign Character_Layer2_count = char2_fifo_count;
assign Character_Layer3_count = char3_fifo_count;
assign Character_Layer4_count = char4_fifo_count;
assign Script_Layer_count = script_fifo_count;
assign Status_Layer_count = status_fifo_count;
assign Universal_Layer1_count = uni1_fifo_count;
assign Universal_Layer2_count = uni2_fifo_count;


//BRAM 구조 정리
//하나의 BRAM을 4개의 레이어가 각각 128줄씩 나눠 씀. (BRAM9는 256줄씩 사용)
//BRAM7: addr 0-127: universal layer1, 128-255: universal layer2, 256-383: script layer, 384-511: status layer
//BRAM8: addr 0-127: character layer1, 128-255: character layer2, 256-383: character layer3, 384-511: character layer4
//BRAM9: addr 0-255: background layer1, 256-511: background layer2

//compressed layer FIFO 제어신호 정리.
wire uni1_fifo_urgent = (uni1_fifo_count[7:0] <= 8'd32 && Universal_Layer1_ena); //universal layer1의 FIFO가 32줄 이하(총 128줄이므로 25%이하)로 채워져있을때 발생하는 신호.
reg [7:0] uni1_fifo_count; //현재 FIFO에 채워진 데이터의 개수를 나타냄. 0-128의 범위이므로 그냥 8비트로 선언했음.
reg [7:0] uni1_fifo_front; //하위 7비트가 실질적인 주소 인덱스(0-127)를 나타내고, 상위 1비트는 상태판별(full or empty)에 사용됨.
reg [7:0] uni1_fifo_rear; //하위 7비트가 실질적인 주소 인덱스(0-127)를 나타내고, 상위 1비트는 상태판별(full or empty)에 사용됨.
wire uni1_fifo_full = (uni1_fifo_front[6:0] == uni1_fifo_rear[6:0]) && (uni1_fifo_front[7] != uni1_fifo_rear[7]); //하위 7비트는 같지만 MSB가 다르면 full임.
wire uni1_fifo_empty = (uni1_fifo_front[7:0] == uni1_fifo_rear[7:0]); //8비트 모두 완전히 같아야 empty임. 

wire uni2_fifo_urgent = (uni2_fifo_count[7:0] <= 8'd32 && Universal_Layer2_ena); //universal layer2의 FIFO가 32줄 이하(총 128줄이므로 25%이하)로 채워져있을때 발생하는 신호.
reg [7:0] uni2_fifo_count; //현재 FIFO에 채워진 데이터의 개수를 나타냄. 0-128의 범위이므로 그냥 8비트로 선언했음.
reg [7:0] uni2_fifo_front; //하위 7비트가 실질적인 주소 인덱스(0-127)를 나타내고, 상위 1비트는 상태판별(full or empty)에 사용됨.
reg [7:0] uni2_fifo_rear; //하위 7비트가 실질적인 주소 인덱스(0-127)를 나타내고, 상위 1비트는 상태판별(full or empty)에 사용됨.
wire uni2_fifo_full = (uni2_fifo_front[6:0] == uni2_fifo_rear[6:0]) && (uni2_fifo_front[7] != uni2_fifo_rear[7]);
wire uni2_fifo_empty = (uni2_fifo_front[7:0] == uni2_fifo_rear[7:0]);

wire script_fifo_urgent = (script_fifo_count[7:0] <= 8'd32 && Script_Layer_ena); 
reg [7:0] script_fifo_count; //현재 FIFO에 채워진 데이터의 개수를 나타냄. 0-128의 범위이므로 그냥 8비트로 선언했음.
reg [7:0] script_fifo_front; 
reg [7:0] script_fifo_rear; 
wire script_fifo_full = (script_fifo_front[6:0] == script_fifo_rear[6:0]) && (script_fifo_front[7] != script_fifo_rear[7]);
wire script_fifo_empty = (script_fifo_front[7:0] == script_fifo_rear[7:0]);

wire status_fifo_urgent = (status_fifo_count[7:0] <= 8'd32 && Status_Layer_ena);
reg [7:0] status_fifo_count; //현재 FIFO에 채워진 데이터의 개수를 나타냄. 0-128의 범위이므로 그냥 8비트로 선언했음.
reg [7:0] status_fifo_front; 
reg [7:0] status_fifo_rear; 
wire status_fifo_full = (status_fifo_front[6:0] == status_fifo_rear[6:0]) && (status_fifo_front[7] != status_fifo_rear[7]);
wire status_fifo_empty = (status_fifo_front[7:0] == status_fifo_rear[7:0]);

wire char1_fifo_urgent = (char1_fifo_count[7:0] <= 8'd32 && Character_Layer1_ena);
reg [7:0] char1_fifo_count; //현재 FIFO에 채워진 데이터의 개수를 나타냄. 0-128의 범위이므로 그냥 8비트로 선언했음.
reg [7:0] char1_fifo_front; 
reg [7:0] char1_fifo_rear; 
wire char1_fifo_full = (char1_fifo_front[6:0] == char1_fifo_rear[6:0]) && (char1_fifo_front[7] != char1_fifo_rear[7]);
wire char1_fifo_empty = (char1_fifo_front[7:0] == char1_fifo_rear[7:0]);

wire char2_fifo_urgent = (char2_fifo_count[7:0] <= 8'd32 && Character_Layer2_ena);
reg [7:0] char2_fifo_count; //현재 FIFO에 채워진 데이터의 개수를 나타냄. 0-128의 범위이므로 그냥 8비트로 선언했음.
reg [7:0] char2_fifo_front; 
reg [7:0] char2_fifo_rear; 
wire char2_fifo_full = (char2_fifo_front[6:0] == char2_fifo_rear[6:0]) && (char2_fifo_front[7] != char2_fifo_rear[7]);
wire char2_fifo_empty = (char2_fifo_front[7:0] == char2_fifo_rear[7:0]);

wire char3_fifo_urgent = (char3_fifo_count[7:0] <= 8'd32 && Character_Layer3_ena);
reg [7:0] char3_fifo_count; //현재 FIFO에 채워진 데이터의 개수를 나타냄. 0-128의 범위이므로 그냥 8비트로 선언했음.
reg [7:0] char3_fifo_front; 
reg [7:0] char3_fifo_rear; 
wire char3_fifo_full = (char3_fifo_front[6:0] == char3_fifo_rear[6:0]) && (char3_fifo_front[7] != char3_fifo_rear[7]);
wire char3_fifo_empty = (char3_fifo_front[7:0] == char3_fifo_rear[7:0]);

wire char4_fifo_urgent = (char4_fifo_count[7:0] <= 8'd32 && Character_Layer4_ena);
reg [7:0] char4_fifo_count; //현재 FIFO에 채워진 데이터의 개수를 나타냄. 0-128의 범위이므로 그냥 8비트로 선언했음.
reg [7:0] char4_fifo_front; 
reg [7:0] char4_fifo_rear; 
wire char4_fifo_full = (char4_fifo_front[6:0] == char4_fifo_rear[6:0]) && (char4_fifo_front[7] != char4_fifo_rear[7]);
wire char4_fifo_empty = (char4_fifo_front[7:0] == char4_fifo_rear[7:0]);

wire back1_fifo_urgent = (back1_fifo_count[8:0] <= 9'd64 && Background_Layer1_ena); //background layer1은 FIFO 크기가 256줄 이므로 front, rear가 1비트씩 큼. 
reg [8:0] back1_fifo_count; //현재 FIFO에 채워진 데이터의 개수를 나타냄. 0-256의 범위이므로 그냥 9비트로 선언했음.
reg [8:0] back1_fifo_front; //하위 8비트는 실질적인 주소인덱스(0-255)를 나타내고 상위 1비트는 상태판별(full or empty)에 사용됨 
reg [8:0] back1_fifo_rear; //하위 8비트는 실질적인 주소인덱스(0-255)를 나타내고 상위 1비트는 상태판별(full or empty)에 사용됨 
wire back1_fifo_full = (back1_fifo_front[7:0] == back1_fifo_rear[7:0]) && (back1_fifo_front[8] != back1_fifo_rear[8]);
wire back1_fifo_empty = (back1_fifo_front[8:0] == back1_fifo_rear[8:0]);

wire back2_fifo_urgent = (back2_fifo_count[8:0] <= 9'd64 && Background_Layer2_ena); //background layer2은 FIFO 크기가 256줄 이므로 front, rear가 1비트씩 큼. 
reg [8:0] back2_fifo_count; //현재 FIFO에 채워진 데이터의 개수를 나타냄. 0-256의 범위이므로 그냥 9비트로 선언했음.
reg [8:0] back2_fifo_front; //하위 8비트는 실질적인 주소인덱스(0-255)를 나타내고 상위 1비트는 상태판별(full or empty)에 사용됨 
reg [8:0] back2_fifo_rear; //하위 8비트는 실질적인 주소인덱스(0-255)를 나타내고 상위 1비트는 상태판별(full or empty)에 사용됨 
wire back2_fifo_full = (back2_fifo_front[7:0] == back2_fifo_rear[7:0]) && (back2_fifo_front[8] != back2_fifo_rear[8]);
wire back2_fifo_empty = (back2_fifo_front[8:0] == back2_fifo_rear[8:0]);

reg back1_fifo_inc_want; //하나의 FIFO의 inc_want 와 dec_want에 의해서 fifo_count가 증가하거나, 감소하거나, 변화가 없거나가 결정됨.
reg back1_fifo_dec_want;
reg back2_fifo_inc_want;
reg back2_fifo_dec_want;
reg char1_fifo_inc_want;
reg char1_fifo_dec_want;
reg char2_fifo_inc_want;
reg char2_fifo_dec_want;
reg char3_fifo_inc_want;
reg char3_fifo_dec_want;
reg char4_fifo_inc_want;
reg char4_fifo_dec_want;
reg script_fifo_inc_want;
reg script_fifo_dec_want;
reg status_fifo_inc_want;
reg status_fifo_dec_want;
reg uni1_fifo_inc_want;
reg uni1_fifo_dec_want;
reg uni2_fifo_inc_want;
reg uni2_fifo_dec_want;

//FIFO를 쓰는것은 라운드로빈 방식으로 하나의 FIFO에 50MHz로 쓰기가 일어나고, FIFO를 읽는것은 시분할로 12.5MHz로 각각의 FIFO가 독립적으로 읽는것이 가능함.
reg [1:0] clk_counter; // 50MHz에 맞춰서 0 - 1 - 2 - 3 - 0 - 1 - 2 - 3 - 0 를 반복함.

wire uni1_fifo_r_master = (clk_counter == 0); //이 신호가 1이어야지 BRAM에서 해당 FIFO를 읽기가 가능함.
wire uni2_fifo_r_master = (clk_counter == 1);
wire script_fifo_r_master = (clk_counter == 2);
wire status_fifo_r_master = (clk_counter == 3);

wire char1_fifo_r_master = (clk_counter == 0);
wire char2_fifo_r_master = (clk_counter == 1);
wire char3_fifo_r_master = (clk_counter == 2);
wire char4_fifo_r_master = (clk_counter == 3);

wire back1_fifo_r_master = (clk_counter == 0) | (clk_counter == 1); //BRAM9에는 background layer1, 2 총 2개의 FIFO만 들어가 있으므로 각각의 레이어가 시분할로 25MHz로 읽을 수 있음.
wire back2_fifo_r_master = (clk_counter == 2) | (clk_counter == 3);

reg [3:0] main_state; //여기서 BRAM7-9 쓰기, 외부 메모리 읽기를 담당함.
reg [3:0] FIFO_read_state;
reg [3:0] FIFO_read_state_next;
parameter IDLE = 0, START = 1, EMEM_READ = 2;

reg [31:0] uni1_next_ad; //외부 메모리에서 데이터를 읽어올때 어디까지 읽었는지 알려주는 역할을 함.
reg [31:0] uni2_next_ad;
reg [31:0] script_next_ad;
reg [31:0] status_next_ad;
reg [31:0] char1_next_ad;
reg [31:0] char2_next_ad;
reg [31:0] char3_next_ad;
reg [31:0] char4_next_ad;
reg [31:0] back1_next_ad;
reg [31:0] back2_next_ad; 

//라운드 로빈 관련 신호들.
//bit 0: back1, bit 1: back2, bit 2: char1, bit 3: char2, bit 4: char3, bit 5: char4, bit 6: script, bit 7: status, bit 8: uni1, bit 9: uni2
reg [9:0] next_should_read_layer; //다음에 외부 메모리에서 읽어야 할 레이어를 나타냄.
reg [9:0] last_read_basic; //basic req로 인해서 특정 레이어의 외부 메모리 읽기가 일어났으면 1로 설정됨. 1바퀴가 다 돌면 싹 다 0으로 초기화 됨.
reg [9:0] last_read_urgent; //urgent req로 인해서 특정 레이어의 외부 메모리 읽기가 일어났으면 1로 설정.
reg [9:0] valid_req; 
reg [9:0] urgent_req; //각각의 레이어들이 urgent 신호를 발생시키면 해당하는 비트가 1이됨.
reg [9:0] basic_req; //input으로 들어오는 ena신호, fifo_count 신호들에 의해서 현재 각각의 레이어들이 외부 메모리 요청이 필요한지를 나타냄. 예를 들어 모든 레이어가 가득차면 10'b0000000000임.
reg [9:0] masked_req;
reg round_end;
reg is_urgent_mode; //urgent_req로 인해서 next_should_read_layer가 결정되면 1이 됨. 이때 외부메모리에서 값을 읽을때 last_read_urgent의 비트를 1로 설정해줘야 함. 만약 is_urgent_mode가 0이라면 last_read_basic의 비트를 1로 설정해야 함.

reg [9:0] should_read_layer; //본격적으로 읽기를 시작할때 last_read를 1로 설정하면 next_should_read_layer가 바뀌므로 직전값을 저장할 용도로 선언했음.

reg [7:0] emem_r_counter; //외부 메모리에서 burst로 32번(128byte)읽을 때 개수를 새어줄 레지스터임.
reg [31:0] tem_32_reg; //외부 메모리에서 32비트를 읽어오고, BRAM에서는 64비트로 저장해야하기 때문에 임시로 값을 저장해줄 레지스터임.

always @(*) begin
    back1_fifo_inc_want = 0;
    back1_fifo_dec_want = 0;
    back2_fifo_inc_want = 0;
    back2_fifo_dec_want = 0;
    char1_fifo_inc_want = 0;
    char1_fifo_dec_want = 0;
    char2_fifo_inc_want = 0;
    char2_fifo_dec_want = 0;
    char3_fifo_inc_want = 0;
    char3_fifo_dec_want = 0;
    char4_fifo_inc_want = 0;
    char4_fifo_dec_want = 0;
    script_fifo_inc_want = 0;
    script_fifo_dec_want = 0;
    status_fifo_inc_want = 0;
    status_fifo_dec_want = 0;
    uni1_fifo_inc_want = 0;
    uni1_fifo_dec_want = 0;
    uni2_fifo_inc_want = 0;
    uni2_fifo_dec_want = 0;

    BRAM7_en_a = 0;
    BRAM7_we_a = 0;
    BRAM7_din_a[63:0] = 0;
    BRAM7_addr_a[8:0] = 0;

    BRAM7_en_b = 0;
    BRAM7_addr_b[8:0] = 0;

    BRAM8_en_a = 0;
    BRAM8_we_a = 0;
    BRAM8_din_a[63:0] = 0;
    BRAM8_addr_a[8:0] = 0;

    BRAM8_en_b = 0;
    BRAM8_addr_b[8:0] = 0;

    BRAM9_en_a = 0;
    BRAM9_we_a = 0;
    BRAM9_din_a[63:0] = 0;
    BRAM9_addr_a[8:0] = 0;

    BRAM9_en_b = 0;
    BRAM9_addr_b[8:0] = 0;

    FIFO_read_state_next = 0;

    next_should_read_layer[9:0] = 10'b0; //기본적으로 싹 0으로 설정. 이후 코드에서 비트 하나만 바꿔줄거임.
    urgent_req[9:0] = {back1_fifo_urgent, back2_fifo_urgent, char1_fifo_urgent, char2_fifo_urgent, char3_fifo_urgent, char4_fifo_urgent, script_fifo_urgent, status_fifo_urgent, uni1_fifo_urgent, uni2_fifo_urgent};

    basic_req[0] = Background_Layer1_ena && (back1_fifo_count[8:0] <= 240); //한번에 16줄(64*16=1024bit=128byte)씩 읽어오기때문에 240줄을 초과하면 읽어온 데이터를 모두 FIFO에 넣을수 없음.
    basic_req[1] = Background_Layer2_ena && (back2_fifo_count[8:0] <= 240);
    basic_req[2] = Character_Layer1_ena && (char1_fifo_count[7:0] <= 112); //한번에 16줄(64*16=1024bit=128byte)씩 읽어오기때문에 112줄을 초과하면 읽어온 데이터를 모두 FIFO에 넣을수 없음.
    basic_req[3] = Character_Layer2_ena && (char2_fifo_count[7:0] <= 112);
    basic_req[4] = Character_Layer3_ena && (char3_fifo_count[7:0] <= 112);
    basic_req[5] = Character_Layer4_ena && (char4_fifo_count[7:0] <= 112);
    basic_req[6] = Script_Layer_ena && (script_fifo_count[7:0] <= 112);
    basic_req[7] = Status_Layer_ena && (status_fifo_count[7:0] <= 112);
    basic_req[8] = Universal_Layer1_ena && (uni1_fifo_count[7:0] <= 112);
    basic_req[9] = Universal_Layer2_ena && (uni2_fifo_count[7:0] <= 112);

    valid_req[10:0] = (urgent_req[9:0] == 10'b0) ? basic_req[9:0] : urgent_req[9:0]; //urgent 신호가 하나라도 있으면 urgent_req 중에서 라운드로빈이 일어남. urgent 신호가 없으면 basic_req 중에서 라운드 로빈.

    masked_req[0] = (~is_urgent_mode) ? valid_req[0] & ~last_read_basic[0] : valid_req[0] & ~last_read_urgent[0]; 
    masked_req[1] = (~is_urgent_mode) ? valid_req[1] & ~last_read_basic[1] : valid_req[1] & ~last_read_urgent[1];
    masked_req[2] = (~is_urgent_mode) ? valid_req[2] & ~last_read_basic[2] : valid_req[2] & ~last_read_urgent[2];
    masked_req[3] = (~is_urgent_mode) ? valid_req[3] & ~last_read_basic[3] : valid_req[3] & ~last_read_urgent[3];
    masked_req[4] = (~is_urgent_mode) ? valid_req[4] & ~last_read_basic[4] : valid_req[4] & ~last_read_urgent[4];
    masked_req[5] = (~is_urgent_mode) ? valid_req[5] & ~last_read_basic[5] : valid_req[5] & ~last_read_urgent[5];
    masked_req[6] = (~is_urgent_mode) ? valid_req[6] & ~last_read_basic[6] : valid_req[6] & ~last_read_urgent[6];
    masked_req[7] = (~is_urgent_mode) ? valid_req[7] & ~last_read_basic[7] : valid_req[7] & ~last_read_urgent[7];
    masked_req[8] = (~is_urgent_mode) ? valid_req[8] & ~last_read_basic[8] : valid_req[8] & ~last_read_urgent[8];
    masked_req[9] = (~is_urgent_mode) ? valid_req[9] & ~last_read_basic[9] : valid_req[9] & ~last_read_urgent[9];

    case(1'b1)
        (masked_req[0] == 1'b1): next_should_read_layer[0] = 1'b1;
        (masked_req[1:0] == 2'b10): next_should_read_layer[1] = 1'b1;
        (masked_req[2:0] == 3'b100): next_should_read_layer[2] = 1'b1;
        (masked_req[3:0] == 4'b1000): next_should_read_layer[3] = 1'b1;
        (masked_req[4:0] == 5'b10000): next_should_read_layer[4] = 1'b1;
        (masked_req[5:0] == 6'b100000): next_should_read_layer[5] = 1'b1;
        (masked_req[6:0] == 7'b1000000): next_should_read_layer[6] = 1'b1;
        (masked_req[7:0] == 8'b10000000): next_should_read_layer[7] = 1'b1;
        (masked_req[8:0] == 9'b100000000): next_should_read_layer[8] = 1'b1;
        (masked_req[9:0] == 9'b1000000000): next_should_read_layer[9] = 1'b1;
    endcase

    round_end = (valid_req[9:0] != 10'b0 ) && (masked_req[9:0] == 10'b0); //이 신호가 1이고 is_urgent_mode가 1이면 last_read_urgent를 초기화해야 함.
    is_urgent_mode = (urgent_req[9:0] != 10'b0); //round_end가 1이고 is_urgent_mode가 0이면 last_read_basic을 초기화해야 함.

    case(FIFO_read_state)
        0: begin
        end
        1: begin
            Background_Layer1_data[63:0] = BRAM9_dout_b[63:0];
        end
        2: begin
            Background_Layer2_data[63:0] = BRAM9_dout_b[63:0];
        end
        3: begin
            Character_Layer1_data[63:0] = BRAM8_dout_b[63:0];
        end
        4: begin
            Character_Layer2_data[63:0] = BRAM8_dout_b[63:0];
        end
        5: begin
            Character_Layer3_data[63:0] = BRAM8_dout_b[63:0];
        end
        6: begin
            Character_Layer4_data[63:0] = BRAM8_dout_b[63:0];
        end
        7: begin
            Script_Layer_data[63:0] = BRAM7_dout_b[63:0];
        end
        8: begin
            Status_Layer_data[63:0] = BRAM7_dout_b[63:0];
        end
        9: begin
            Universal_Layer1_data[63:0] = BRAM7_dout_b[63:0];
        end
        10: begin
            Universal_Layer2_data[63:0] = BRAM7_dout_b[63:0];
        end
    endcase
    //BRAM7: addr 0-127: universal layer1, 128-255: universal layer2, 256-383: script layer, 384-511: status layer
    //BRAM8: addr 0-127: character layer1, 128-255: character layer2, 256-383: character layer3, 384-511: character layer4
    //BRAM9: addr 0-255: background layer1, 256-511: background layer2

    if(Background_Layer1_dequeue && (back1_fifo_count != 0) && back1_fifo_r_master) begin //읽을 때는 b port 사용해야 함.
        back1_fifo_dec_want = 1;
        BRAM9_en_b = 1;
        BRAM9_addr_b[8:0] = back1_fifo_front[7:0]; //클럭에지때 front를 1 증가시키고 dout을 output으로 줘야 함.
        FIFO_read_state_next = 1;
    end
    if(Background_Layer2_dequeue && (back2_fifo_count != 0) && back2_fifo_r_master) begin
        back2_fifo_dec_want = 1;
        BRAM9_en_b = 1;
        BRAM9_addr_b[8:0] = 9'd256 + back2_fifo_front[7:0]; //클럭에지때 front를 1 증가시켜야 함.
        FIFO_read_state_next = 2;
    end
    if(Character_Layer1_dequeue && (char1_fifo_count != 0) && char1_fifo_r_master) begin
        char1_fifo_dec_want = 1;
        BRAM8_en_b = 1;
        BRAM8_addr_b[8:0] = char1_fifo_front[6:0]; //클럭에지때 front를 1 증가시키고 dout을 output으로 줘야 함.
        FIFO_read_state_next = 3;
    end
    if(Character_Layer2_dequeue && (char2_fifo_count != 0) && char2_fifo_r_master) begin
        char2_fifo_dec_want = 1;
        BRAM8_en_b = 1;
        BRAM8_addr_b[8:0] = 9'd128 + char2_fifo_front[6:0]; //클럭에지때 front를 1 증가시키고 dout을 output으로 줘야 함.
        FIFO_read_state_next = 4;
    end
    if(Character_Layer3_dequeue && (char3_fifo_count != 0) && char3_fifo_r_master) begin
        char3_fifo_dec_want = 1;
        BRAM8_en_b = 1;
        BRAM8_addr_b[8:0] = 9'd256 + char3_fifo_front[6:0];
        FIFO_read_state_next = 5;
    end
    if(Character_Layer4_dequeue && (char4_fifo_count != 0) && char4_fifo_r_master) begin
        char4_fifo_dec_want = 1;
        BRAM8_en_b = 1;
        BRAM8_addr_b[8:0] = 9'd384 + char4_fifo_front[6:0];
        FIFO_read_state_next = 6;
    end
    if(Script_Layer_dequeue && (script_fifo_count != 0) && script_fifo_r_master) begin
        script_fifo_dec_want = 1;
        BRAM7_en_b = 1;
        BRAM7_addr_b[8:0] = 9'd256 + script_fifo_front[6:0];
        FIFO_read_state_next = 7;
    end
    if(Status_Layer_dequeue && (status_fifo_count != 0) && status_fifo_r_master) begin
        status_fifo_dec_want = 1;
        BRAM7_en_b = 1;
        BRAM7_addr_b[8:0] = 9'd384 + status_fifo_front[6:0];
        FIFO_read_state_next = 8;
    end
    if(Universal_Layer1_dequeue && (uni1_fifo_count != 0) && uni1_fifo_r_master) begin
        uni1_fifo_dec_want = 1;
        BRAM7_en_b = 1;
        BRAM7_addr_b[8:0] = uni1_fifo_front[6:0];
        FIFO_read_state_next = 9;
    end
    if(Universal_Layer2_dequeue && (uni2_fifo_count != 0) && uni2_fifo_r_master) begin
        uni2_fifo_dec_want = 1;
        BRAM7_en_b = 1;
        BRAM7_addr_b[8:0] = 9'd128 + uni2_fifo_front[6:0];
        FIFO_read_state_next = 10;
    end

    case(main_state)
    IDLE: begin
    end
    START: begin
    end
    EMEM_READ: begin
        if(EMEM_ready && (emem_r_counter[0] == 1'b1)) begin
            case(1'b1)
                should_read_layer[0]: begin //background 1
                    back1_fifo_inc_want = 1;
                    BRAM9_en_a = 1;
                    BRAM9_we_a = 1;
                    BRAM9_din_a[63:0] = {EMEM_rdata[31:0], tem_32_reg[31:0]}; //RISC-V는 Little Endian방식이고 하위 바이트의 주소가 낮음. 
                    BRAM9_addr_a[8:0] = back1_fifo_rear[7:0]; //0-255사이의 값(하위 8비트만 사용)이어야 하는데 나중에 front, rear 등의 레지스터랑 같이 생각하고 작성해놔야 함.
                end
                should_read_layer[1]: begin //background 2
                    back2_fifo_inc_want = 1;
                    BRAM9_en_a = 1;
                    BRAM9_we_a = 1;
                    BRAM9_din_a[63:0] = {EMEM_rdata[31:0], tem_32_reg[31:0]}; //RISC-V는 Little Endian방식이고 하위 바이트의 주소가 낮음. 
                    BRAM9_addr_a[8:0] = 9'd256 + back2_fifo_rear[7:0]; //주소는 256부터 시작하므로 꼭 더해줘야 함.
                end
                should_read_layer[2]: begin //character 1
                    char1_fifo_inc_want = 1;
                    BRAM8_en_a = 1;
                    BRAM8_we_a = 1;
                    BRAM8_din_a[63:0] = {EMEM_rdata[31:0], tem_32_reg[31:0]}; //RISC-V는 Little Endian방식이고 하위 바이트의 주소가 낮음. 
                    BRAM8_addr_a[8:0] = char1_fifo_rear[6:0]; //하위 7비트(0-127)만 주소 인덱싱에 사용됨
                end
                should_read_layer[3]: begin //character 2
                    char2_fifo_inc_want = 1;
                    BRAM8_en_a = 1;
                    BRAM8_we_a = 1;
                    BRAM8_din_a[63:0] = {EMEM_rdata[31:0], tem_32_reg[31:0]}; //RISC-V는 Little Endian방식이고 하위 바이트의 주소가 낮음. 
                    BRAM8_addr_a[8:0] = 9'd128 + char2_fifo_rear[6:0]; //주소는 128부터 시작하므로 꼭 더해줘야 함.
                end
                should_read_layer[4]: begin //character 3
                    char3_fifo_inc_want = 1;
                    BRAM8_en_a = 1;
                    BRAM8_we_a = 1;
                    BRAM8_din_a[63:0] = {EMEM_rdata[31:0], tem_32_reg[31:0]}; //RISC-V는 Little Endian방식이고 하위 바이트의 주소가 낮음. 
                    BRAM8_addr_a[8:0] = 9'd256 + char3_fifo_rear[6:0]; //주소는 256부터 시작하므로 꼭 더해줘야 함.
                end
                should_read_layer[5]: begin //character 4
                    char4_fifo_inc_want = 1;
                    BRAM8_en_a = 1;
                    BRAM8_we_a = 1;
                    BRAM8_din_a[63:0] = {EMEM_rdata[31:0], tem_32_reg[31:0]}; 
                    BRAM8_addr_a[8:0] = 9'd384 + char4_fifo_rear[6:0]; //주소는 384부터 시작하므로 꼭 더해줘야 함.
                end
                should_read_layer[6]: begin //script 
                    script_fifo_inc_want = 1;
                    BRAM7_en_a = 1;
                    BRAM7_we_a = 1;
                    BRAM7_din_a[63:0] = {EMEM_rdata[31:0], tem_32_reg[31:0]}; 
                    BRAM7_addr_a[8:0] = 9'd256 + script_fifo_rear[6:0]; 
                end
                should_read_layer[7]: begin //status
                    status_fifo_inc_want = 1;
                    BRAM7_en_a = 1;
                    BRAM7_we_a = 1;
                    BRAM7_din_a[63:0] = {EMEM_rdata[31:0], tem_32_reg[31:0]}; 
                    BRAM7_addr_a[8:0] = 9'd384 + status_fifo_rear[6:0]; 
                end
                should_read_layer[8]: begin //universal 1
                    uni1_fifo_inc_want = 1;
                    BRAM7_en_a = 1;
                    BRAM7_we_a = 1;
                    BRAM7_din_a[63:0] = {EMEM_rdata[31:0], tem_32_reg[31:0]}; 
                    BRAM7_addr_a[8:0] = uni1_fifo_rear[6:0];  //주소는 0 부터 시작.
                end
                should_read_layer[9]: begin //universal 2
                    uni2_fifo_inc_want = 1;
                    BRAM7_en_a = 1;
                    BRAM7_we_a = 1;
                    BRAM7_din_a[63:0] = {EMEM_rdata[31:0], tem_32_reg[31:0]}; 
                    BRAM7_addr_a[8:0] = 9'd128 + uni2_fifo_rear[6:0];  //주소는 128 부터 시작.
                end
            endcase
        end
    end
    endcase
end

always @(posedge clk negedge reset) begin
    if(!reset) begin
        clk_counter[1:0] <= 0;
        main_state <= IDLE;
        uni1_next_ad <= 0;
        uni2_next_ad <= 0;
        status_next_ad <= 0;
        script_next_ad <= 0;
        char1_next_ad <= 0;
        char2_next_ad <= 0;
        char3_next_ad <= 0;
        char4_next_ad <= 0;
        back1_next_ad <= 0;
        back2_next_ad <= 0;

        EMEM_valid <= 0;
        EMEM_addr[31:0] <= 0;
        EMEM_wdata[31:0] <= 0;
        EMEM_wstrb[3:0] <= 4'b1111;
        EMEM_burst_en <= 0;
        EMEM_burst_len[7:0] <= 0;

        uni1_fifo_front[7:0] <= 0;
        uni1_fifo_rear[7:0] <= 0;
        uni1_fifo_count[7:0] <= 0;

        uni2_fifo_front[7:0] <= 0;
        uni2_fifo_rear[7:0] <= 0;
        uni2_fifo_count[7:0] <= 0;

        script_fifo_front[7:0] <= 0;
        script_fifo_rear[7:0] <= 0;
        script_fifo_count[7:0] <= 0;

        status_fifo_front[7:0] <= 0;
        status_fifo_rear[7:0] <= 0;
        status_fifo_count[7:0] <= 0;

        char1_fifo_front[7:0] <= 0;
        char1_fifo_rear[7:0] <= 0;
        char1_fifo_count[7:0] <= 0;

        char2_fifo_front[7:0] <= 0;
        char2_fifo_rear[7:0] <= 0;
        char2_fifo_count[7:0] <= 0;

        char3_fifo_front[7:0] <= 0;
        char3_fifo_rear[7:0] <= 0;
        char3_fifo_count[7:0] <= 0;

        char4_fifo_front[7:0] <= 0;
        char4_fifo_rear[7:0] <= 0;
        char4_fifo_count[7:0] <= 0;

        back1_fifo_front[8:0] <= 0;
        back1_fifo_rear[8:0] <= 0;
        back1_fifo_count[8:0] <= 0;

        back2_fifo_front[8:0] <= 0;
        back2_fifo_rear[8:0] <= 0;
        back2_fifo_count[8:0] <= 0;

        last_read_basic[9:0] <= 0;
        last_read_urgent[9:0] <= 0;
        should_read_layer[9:0] <= 0;

        emem_r_counter[7:0] <= 0;
        tem_32_reg[31:0] <= 0;

        FIFO_read_state[3:0] <= 0;
    end
    else begin
        clk_counter[1:0] <= clk_counter[1:0] + 1; // 50MHz에 맞춰서 0 - 1 - 2 - 3 - 0 - 1 - 2 - 3 - 0 를 반복
        FIFO_read_state[3:0] <= FIFO_read_state_next[3:0];

        if(is_urgent_mode && round_end) last_read_urgent[9:0] <= 10'b0; //round가 끝났을때 초기화해줌.
        if(~is_urgent_mode && round_end) last_read_basic[9:0] <= 10'b0;

        //BRAM7: addr 0-127: universal layer1, 128-255: universal layer2, 256-383: script layer, 384-511: status layer
        //BRAM8: addr 0-127: character layer1, 128-255: character layer2, 256-383: character layer3, 384-511: character layer4
        //BRAM9: addr 0-255: background layer1, 256-511: background layer2

        case(1'b1) //fifo_count가 1 증가하려면 클럭에지때 BRAM에 쓰기만 일어나야 함. 마찬가지로 fifo_count가 1 감소하려면 클럭에지때 BRAM에 읽기만 일어나야 함. front와 rear은 그냥 독립적으로 동시에 갱신해도 상관없음.
            (back1_fifo_inc_want & ~back1_fifo_dec_want): back1_fifo_count[8:0] <= back1_fifo_count[8:0] + 1; 
            (~back1_fifo_inc_want & back1_fifo_dec_want): back1_fifo_count[8:0] <= back1_fifo_count[8:0] - 1;
            (back2_fifo_inc_want & ~back2_fifo_dec_want): back2_fifo_count[8:0] <= back2_fifo_count[8:0] + 1;
            (~back2_fifo_inc_want & back2_fifo_dec_want): back2_fifo_count[8:0] <= back2_fifo_count[8:0] - 1;
            (char1_fifo_inc_want & ~char1_fifo_dec_want): char1_fifo_count[8:0] <= char1_fifo_count[8:0] + 1;
            (~char1_fifo_inc_want & char1_fifo_dec_want): char1_fifo_count[8:0] <= char1_fifo_count[8:0] - 1;
            (char2_fifo_inc_want & ~char2_fifo_dec_want): char2_fifo_count[8:0] <= char2_fifo_count[8:0] + 1;
            (~char2_fifo_inc_want & char2_fifo_dec_want): char2_fifo_count[8:0] <= char2_fifo_count[8:0] - 1;
            (char3_fifo_inc_want & ~char3_fifo_dec_want): char3_fifo_count[8:0] <= char3_fifo_count[8:0] + 1;
            (~char3_fifo_inc_want & char3_fifo_dec_want): char3_fifo_count[8:0] <= char3_fifo_count[8:0] - 1;
            (char4_fifo_inc_want & ~char4_fifo_dec_want): char4_fifo_count[8:0] <= char4_fifo_count[8:0] + 1;
            (~char4_fifo_inc_want & char4_fifo_dec_want): char4_fifo_count[8:0] <= char4_fifo_count[8:0] - 1;
            (script_fifo_inc_want & ~script_fifo_dec_want): script_fifo_count[8:0] <= script_fifo_count[8:0] + 1;
            (~script_fifo_inc_want & script_fifo_dec_want): script_fifo_count[8:0] <= script_fifo_count[8:0] - 1;
            (status_fifo_inc_want & ~status_fifo_dec_want): status_fifo_count[8:0] <= status_fifo_count[8:0] + 1;
            (~status_fifo_inc_want & status_fifo_dec_want): status_fifo_count[8:0] <= status_fifo_count[8:0] - 1;
            (uni1_fifo_inc_want & ~uni1_fifo_dec_want): uni1_fifo_count[8:0] <= uni1_fifo_count[8:0] + 1;
            (~uni1_fifo_inc_want & uni1_fifo_dec_want): uni1_fifo_count[8:0] <= uni1_fifo_count[8:0] - 1;
            (uni2_fifo_inc_want & ~uni2_fifo_dec_want): uni2_fifo_count[8:0] <= uni2_fifo_count[8:0] + 1;
            (~uni2_fifo_inc_want & uni2_fifo_dec_want): uni2_fifo_count[8:0] <= uni2_fifo_count[8:0] - 1;
        endcase

        if(back1_fifo_dec_want) back1_fifo_front[8:0] <= back1_fifo_front[8:0] + 1;
        if(back2_fifo_dec_want) back2_fifo_front[8:0] <= back2_fifo_front[8:0] + 1;
        if(char1_fifo_dec_want) char1_fifo_front[7:0] <= char1_fifo_front[7:0] + 1;
        if(char2_fifo_dec_want) char2_fifo_front[7:0] <= char2_fifo_front[7:0] + 1;
        if(char3_fifo_dec_want) char3_fifo_front[7:0] <= char3_fifo_front[7:0] + 1;
        if(char4_fifo_dec_want) char4_fifo_front[7:0] <= char4_fifo_front[7:0] + 1;
        if(script_fifo_dec_want) script_fifo_front[7:0] <= script_fifo_front[7:0] + 1;
        if(status_fifo_dec_want) status_fifo_front[7:0] <= status_fifo_front[7:0] + 1;
        if(uni1_fifo_dec_want) uni1_fifo_front[7:0] <= uni1_fifo_front[7:0] + 1;
        if(uni2_fifo_dec_want) uni2_fifo_front[7:0] <= uni2_fifo_front[7:0] + 1;

        case(main_state)
            IDLE: begin
                if(PPU_start) begin //input으로 PPU_start가 들어오면 작동을 시작함. 프레임단위로 프레임 생성을 시작할때 PPU_start가 들어오면 될듯. 
                    main_start <= START;
                    uni1_next_ad[31:0] <= Universal_Layer1_Address[31:0]; //uni_next_ad를 초기화 해줌.
                    uni2_next_ad[31:0] <= Universal_Layer2_Address[31:0];
                    status_next_ad[31:0] <= Status_Layer_Address[31:0];
                    script_next_ad[31:0] <= Script_Layer_Address[31:0];
                    char1_next_ad[31:0] <= Character_Layer1_Address[31:0];
                    char2_next_ad[31:0] <= Character_Layer2_Address[31:0];
                    char3_next_ad[31:0] <= Character_Layer3_Address[31:0];
                    char4_next_ad[31:0] <= Character_Layer4_Address[31:0];
                    back1_next_ad[31:0] <= Background_Layer1_Address[31:0];
                    back2_next_ad[31:0] <= Background_Layer2_Address[31:0];
                    uni1_fifo_front[7:0] <= 0; //FIFO 관련 레지스터들 싹 초기화 해줌.
                    uni1_fifo_rear[7:0] <= 0;
                    uni1_fifo_count[7:0] <= 0;
                    uni2_fifo_front[7:0] <= 0;
                    uni2_fifo_rear[7:0] <= 0;
                    uni2_fifo_count[7:0] <= 0;
                    script_fifo_front[7:0] <= 0;
                    script_fifo_rear[7:0] <= 0;
                    script_fifo_count[7:0] <= 0;
                    status_fifo_front[7:0] <= 0;
                    status_fifo_rear[7:0] <= 0;
                    status_fifo_count[7:0] <= 0;
                    char1_fifo_front[7:0] <= 0;
                    char1_fifo_rear[7:0] <= 0;
                    char1_fifo_count[7:0] <= 0;
                    char2_fifo_front[7:0] <= 0;
                    char2_fifo_rear[7:0] <= 0;
                    char2_fifo_count[7:0] <= 0;
                    char3_fifo_front[7:0] <= 0;
                    char3_fifo_rear[7:0] <= 0;
                    char3_fifo_count[7:0] <= 0;
                    char4_fifo_front[7:0] <= 0;
                    char4_fifo_rear[7:0] <= 0;
                    char4_fifo_count[7:0] <= 0;
                    back1_fifo_front[8:0] <= 0;
                    back1_fifo_rear[8:0] <= 0;
                    back1_fifo_count[8:0] <= 0;
                    back2_fifo_front[8:0] <= 0;
                    back2_fifo_rear[8:0] <= 0;
                    back2_fifo_count[8:0] <= 0;

                    last_read_basic[9:0] <= 0;
                    last_read_urgent[9:0] <= 0;
                    should_read_layer[9:0] <= 0;

                    emem_r_counter[9:0] <= 0;
                    tem_32_reg[31:0] <= 0;
                end
                else begin
                    main_state <= IDLE;
                end
            end
            START: begin
                if(next_should_read_layer[9:0] != 10'b0) begin
                    case(is_urgent_mode)
                    1'b0: begin //basic 
                        main_state <= EMEM_READ;
                        should_read_layer[9:0] <= next_should_read_layer[9:0]; //next_should_read_layer를 외부메모리 읽기 직전에 저장해줌. 
                        emem_r_counter[7:0] <= 0; //카운터를 초기화 해줌.
                        tem_32_reg[31:0] <= 0;
                        case(1'b1) //next_should_read_layer는 10개의 비트중 한개만 1로 설정될 수 있음. 따라서 동시에 여러개의 last_read_urgent가 1로 설정되는것은 불가능함.
                            next_should_read_layer[0]: begin //background 1
                                last_read_basic[0] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= back1_next_ad[31:0]; //IDLE -> START로 가는 과정에서 back1_next_ad는 input으로 들어온 Background_Layer_Address로 초기화되어 있음.
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[1]: begin //background 1
                                last_read_basic[1] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= back2_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[2]: begin //character 1
                                last_read_basic[2] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= char1_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[3]: begin //character 2
                                last_read_basic[3] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= char2_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[4]: begin //character 3
                                last_read_basic[4] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= char3_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[5]: begin //character 4
                                last_read_basic[5] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= char4_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[6]: begin //script 
                                last_read_basic[6] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= script_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[7]: begin //status
                                last_read_basic[7] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= status_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[8]: begin //universal 1
                                last_read_basic[8] <= 1'b1; 
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= uni1_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[9]: begin //universal 2
                                last_read_basic[9] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= uni2_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                        endcase
                    end
                    1'b1: begin //urgent
                        main_state <= EMEM_READ;
                        should_read_layer[9:0] <= next_should_read_layer[9:0]; //next_should_read_layer를 외부메모리 읽기 직전에 저장해줌. 
                        emem_r_counter[7:0] <= 0; //카운터를 초기화 해줌.
                        tem_32_reg[31:0] <= 0;
                        case(1'b1) //next_should_read_layer는 10개의 비트중 한개만 1로 설정될 수 있음. 따라서 동시에 여러개의 last_read_urgent가 1로 설정되는것은 불가능함.
                            next_should_read_layer[0]: begin //background 1
                                last_read_urgent[0] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= back1_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[1]: begin //background 2
                                last_read_urgent[1] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= back2_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[2]: begin //character 1
                                last_read_urgent[2] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= char1_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[3]: begin //character 2
                                last_read_urgent[3] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= char2_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[4]: begin //character 3
                                last_read_urgent[4] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= char3_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[5]: begin //character 4
                                last_read_urgent[5] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= char4_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[6]: begin //script 
                                last_read_urgent[6] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= script_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[7]: begin //status
                                last_read_urgent[7] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= status_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[8]: begin //universal 1
                                last_read_urgent[8] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= uni1_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                            next_should_read_layer[9]: begin //universal 2
                                last_read_urgent[9] <= 1'b1;
                                EMEM_valid <= 1;
                                EMEM_addr[31:0] <= uni2_next_ad[31:0];
                                EMEM_wstrb[3:0] <= 4'b0000; //읽기는 4'b0000임.
                                EMEM_wdata[31:0] <= 0; //읽기니까 그냥 0으로 설정.
                                EMEM_burst_en <= 1;
                                EMEM_burst_len[7:0] <= 31; //32bit(4byte)씩 32번 연속으로 읽음.(총 128byte. 전체 128줄(64*128) 중에 16줄을 한번에 읽어옴.)
                            end
                        endcase
                    end
                    endcase
                end
                else if(next_should_read_layer[9:0] == 10'b0) begin 
                    //모든 FIFO가 다 채워졌거나 모든 레이어의 데이터를 전부 읽었을 때. 혹은 잠시 대기상태. 
                    if(PPU_start == 1) begin
                        main_state <= START;
                    end
                    else if(PPU_start == 0) begin //프레임이 완성되고 잠시 대기시간에 PPU_start를 0으로 설정하고, 제어 레지스터들을 바꾼 후 다시 프레임을 만들 시간에 1로 설정하면 다음 프레임을 만들기 위한 작업이 시작됨. 
                        main_state <= IDLE;
                    end
                end
            end
            EMEM_READ: begin //main_state가 EMEM_READ로 가면서 EMEM_valid는 1로 설정된 상황임. 또한 should_read_layer안에 현재 읽기 시도중인 레이어가 표시되어 있음. emem_r_counter, tem_32_reg 초기화되어 있음.
                if(EMEM_ready) begin
                    if(emem_r_counter[7:0] == 31) begin //32번째 데이터가 왔을때.
                        main_state <= START; //다시 start로 가서 다음 메모리 읽기를 시작함.
                        emem_r_counter[7:0] <= 0;
                        EMEM_valid <= 0; //전송이 완료되었으므로 valid신호를 꺼줌. 
                        EMEM_addr[31:0] <= 0;
                        EMEM_wstrb[3:0] <= 4'b0000;
                        EMEM_wdata[31:0] <= 0;
                        EMEM_burst_en <= 0;
                        EMEM_burst_len[7:0] <= 0;
                    end
                    else begin
                        main_state <= EMEM_READ;
                        emem_r_counter[7:0] <= emem_r_counter[7:0] + 1;
                    end
                    
                    if((emem_r_counter[0] == 1'b0)) begin //emem_r_counter가 0, 2, 4, 6, 8같은 짝수번째에서 tem_32_reg에 저장해두고, 1, 3, 5, 7, 9같은 홀수번째에서 BRAM에 64비트로 저장함.
                        tem_32_reg[31:0] <= EMEM_rdata[31:0];
                    end
                    else if(emem_r_counter[0] == 1'b1) begin //홀수번째. 참고로 FIFO가 가득 찼는지는 상관하지 않아도 됨. 그러면 어차피 basic_req 신호가 발생하지 않음. 또한 현재 조건일때 always@(*)문 안에서 inc_want 신호가 발생해서 dec_want 신호와 조합해서 fifo_count가 변화함.
                        case(1'b1) //여기서 그냥 next_ad[31:0]들도 같이 증가시켜 주자!!!!!!!!! 홀수번째에만 증가시키므로 8씩 증가시켜야 함!!!!!!!! 마지막인 emem_r_counter가 31일때도 마찬가지로 증가하므로 문제없음.
                            should_read_layer[0]: begin //backgound 1. a port(write port) 이용해서 64비트씩 write 해야함.
                                //BRAM7: addr 0-127: universal layer1, 128-255: universal layer2, 256-383: script layer, 384-511: status layer
                                //BRAM8: addr 0-127: character layer1, 128-255: character layer2, 256-383: character layer3, 384-511: character layer4
                                //BRAM9: addr 0-255: background layer1, 256-511: background layer2
                                back1_next_ad[31:0] <= back1_next_ad[31:0] + 8;
                                back1_fifo_rear[8:0] <= back1_fifo_rear[8:0] + 1; //FIFO에 값을 넣을 때 꼭 증가시켜 줘야 함!!!! back1_fifo_count 같은 경우에는 동시에 넣고, 뺄때도 고려해야 해서 여기서 직접적으로 증가시키지 않음.
                            end
                            should_read_layer[1]: begin //background 2
                                back2_next_ad[31:0] <= back2_next_ad[31:0] + 8;
                                back2_fifo_rear[8:0] <= back2_fifo_rear[8:0] + 1; //FIFO에 값을 넣을 때 꼭 증가시켜 줘야 함!!!! fifo_count는 위에서 dec_want와 조합되어서 설정됨.
                            end
                            should_read_layer[2]: begin //character 1
                                char1_next_ad[31:0] <= char1_next_ad[31:0] + 8;
                                char1_fifo_rear[7:0] <= char1_fifo_rear[7:0] + 1; //FIFO에 값을 넣을 때 꼭 증가시켜 줘야 함!!!! fifo_count는 위에서 dec_want와 조합되어서 설정됨.
                            end
                            should_read_layer[3]: begin //character 2
                                char2_next_ad[31:0] <= char2_next_ad[31:0] + 8;
                                char2_fifo_rear[7:0] <= char2_fifo_rear[7:0] + 1; //FIFO에 값을 넣을 때 꼭 증가시켜 줘야 함!!!! fifo_count는 위에서 dec_want와 조합되어서 설정됨.
                            end
                            should_read_layer[4]: begin //character 3
                                char3_next_ad[31:0] <= char3_next_ad[31:0] + 8;
                                char3_fifo_rear[7:0] <= char3_fifo_rear[7:0] + 1; //FIFO에 값을 넣을 때 꼭 증가시켜 줘야 함!!!! fifo_count는 위에서 dec_want와 조합되어서 설정됨.
                            end
                            should_read_layer[5]: begin //character 4
                                char4_next_ad[31:0] <= char4_next_ad[31:0] + 8;
                                char4_fifo_rear[7:0] <= char4_fifo_rear[7:0] + 1; 
                            end
                            should_read_layer[6]: begin //script 
                                script_next_ad[31:0] <= script_next_ad[31:0] + 8;
                                script_fifo_rear[7:0] <= script_fifo_rear[7:0] + 1;
                            end
                            should_read_layer[7]: begin //status
                                status_next_ad[31:0] <= status_next_ad[31:0] + 8;
                                status_fifo_rear[7:0] <= status_fifo_rear[7:0] + 1;
                            end
                            should_read_layer[8]: begin //universal 1
                                uni1_next_ad[31:0] <= uni1_next_ad[31:0] + 8;
                                uni1_fifo_rear[7:0] <= uni1_fifo_rear[7:0] + 1;
                            end
                            should_read_layer[9]: begin //universal 2
                                uni2_next_ad[31:0] <= uni2_next_ad[31:0] + 8;
                                uni2_fifo_rear[7:0] <= uni2_fifo_rear[7:0] + 1;
                            end
                        endcase
                    end
                end
                else begin
                    main_state <= EMEM_READ;
                end
            end
        endcase
    end
end
endmodule