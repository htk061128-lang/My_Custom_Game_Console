module Pixel_Processer( //10개 레이어를 알파블랜딩, 합성해서 최종 픽셀을 산출함. 이후 Font_Processer 와 추가적으로 합성하고 페이드연산을 해서 마무리 함.
    input clk,
    input resetn,

    input [1:0] Clk_Counter, //0 - 1 - 2 - 3 - 0 - 1을 반복 함. Decompresser.sv 모듈과 동기화 되어있음.

    input PPU_start, // 0 -> 1 으로 변하면 연산이 시작됨. 

    input [15:0] Background1_SCX, //400 * 320 크기의 배경레이어 속에 320 * 240 크기의 화면만 표시되므로  0-80까지의 값을 가짐.
    input [15:0] Background1_SCY, // 0-80까지의 값을 가짐. 그 이상의 값은 사용되지 않음.
    input [7:0] Background1_a, //알파블랜딩 알파값. 0-16까지의 값을 가짐. 17이상의 값은 사용되지 않음.
    input [7:0] Background1_z, //우선순위를 나타내는 값으로 1 ~ 10까지의 값을 가짐. 작을수록 먼져 겹쳐지고 클 수록 나중에 겹쳐짐. 만약 0으로 설정되면 그 레이어는 사용되지 않는다는 것을 나타냄.

    input Background1_pixel_valid,
    input [17:0] Background1_pixel_RGB,
    input Background1_pixel_is_trans,
    output Background1_pixel_ready,


    input [15:0] Background2_SCX,
    input [15:0] Background2_SCY,
    input [7:0] Background2_a,
    input [7:0] Background2_z,

    input Background2_pixel_valid,
    input [17:0] Background2_pixel_RGB,
    input Background2_pixel_is_trans,
    output Background2_pixel_ready,


    input [15:0] Character1_WX, //320 * 240 화면속에 맨 위 왼쪽 픽셀의 위치의 x좌표를 나타내고 -320 ~ 320 까지의 값을 가짐. signed 값으로 해석해야 함!!
    input [15:0] Character1_WY, //320 * 240 화면속에 맨 위 왼쪽 픽셀의 위치의 y좌표를 나타내고 -240 ~ 240 까지의 값을 가짐. signed 값으로 해석해야 함!!
    input [7:0] Character1_a,
    input [7:0] Character1_z,

    input Character1_pixel_valid,
    input [17:0] Character1_pixel_RGB,
    input Character1_pixel_is_trans,
    output Character1_pixel_ready,


    input [15:0] Character2_WX,
    input [15:0] Character2_WY,
    input [7:0] Character2_a,
    input [7:0] Character2_z,

    input Character2_pixel_valid,
    input [17:0] Character2_pixel_RGB,
    input Character2_pixel_is_trans,
    output Character2_pixel_ready,


    input [15:0] Character3_WX,
    input [15:0] Character3_WY,
    input [7:0] Character3_a,
    input [7:0] Character3_z,

    input Character3_pixel_valid,
    input [17:0] Character3_pixel_RGB,
    input Character3_pixel_is_trans,
    output Character3_pixel_ready,


    input [15:0] Character4_WX,
    input [15:0] Character4_WY,
    input [7:0] Character4_a,
    input [7:0] Character4_z,

    input Character4_pixel_valid,
    input [17:0] Character4_pixel_RGB,
    input Character4_pixel_is_trans,
    output Character4_pixel_ready,


    input [15:0] Script_WX,
    input [15:0] Script_WY,
    input [7:0] Script_a,
    input [7:0] Script_z,

    input Script_pixel_valid,
    input [17:0] Script_pixel_RGB,
    input Script_pixel_is_trans,
    output Script_pixel_ready,


    input [15:0] Status_WX,
    input [15:0] Status_WY,
    input [7:0] Status_a,
    input [7:0] Status_z,

    input Status_pixel_valid,
    input [17:0] Status_pixel_RGB,
    input Status_pixel_is_trans,
    output Status_pixel_ready,


    input [15:0] Universal1_WX,
    input [15:0] Universal1_WY,
    input [7:0] Universal1_a,
    input [7:0] Universal1_z,

    input Universal1_pixel_valid,
    input [17:0] Universal1_pixel_RGB,
    input Universal1_pixel_is_trans,
    output Universal1_pixel_ready,


    input [15:0] Universal2_WX,
    input [15:0] Universal2_WY,
    input [7:0] Universal2_a,
    input [7:0] Universal2_z,

    input Universal2_pixel_valid,
    input [17:0] Universal2_pixel_RGB,
    input Universal2_pixel_is_trans,
    output Universal2_pixel_ready,

    //외부 모듈로 최종 픽셀 RGB값을 전달하는 신호들. 
    output reg Final_pixel_valid,
    output reg [17:0] Final_pixel_RGB,
    input Final_pixel_ready //이 신호가 1이어서 핸드세이킹이 완료되어야 파이프라인이 이어서 진행함.
);

assign Background1_pixel_ready = layer_ready[1];
assign Background2_pixel_ready = layer_ready[2];
assign Character1_pixel_ready = layer_ready[3];
assign Character2_pixel_ready = layer_ready[4];
assign Character3_pixel_ready = layer_ready[5];
assign Character4_pixel_ready = layer_ready[6];
assign Script_pixel_ready = layer_ready[7];
assign Status_pixel_ready = layer_ready[8];
assign Universal1_pixel_ready = layer_ready[9];
assign Universal2_pixel_ready = layer_ready[10];

reg [17:0] Z1_RGB; //우선순위 1인 레이어의 RGB값을 저장하는 레지스터.
reg Z1_is_trans; //우선순위 1인 레이어의 투명도 여부를 저장하는 레지스터.
reg [7:0] Z1_a; //우선순위 1인 레이어의 알파값을 저장하는 레지스터. 여기 a값은 무시됨.
reg Z1_valid; //Pixel_Reader 에서 값을 읽어서 여기에 저장할때 1로 설정.
reg Z1_ready; //파이프라인 레지스터에 값을 넘겨줄때 1로 설정해주어서 다음 픽셀을 저장을 시작하게 할 예정.

reg [17:0] Z2_RGB; //우선순위 2인 레이어의 RGB값을 저장하는 레지스터.
reg Z2_is_trans; //우선순위 2인 레이어의 투명도 여부를 저장하는 레지스터.
reg [7:0] Z2_a; //우선순위 2인 레이어의 알파값을 저장하는 레지스터.
reg Z2_valid; 
reg Z2_ready;

reg [17:0] Z3_RGB; //우선순위 3인 레이어의 RGB값을 저장하는 레지스터.
reg Z3_is_trans; //우선순위 3인 레이어의 투명도 여부를 저장하는 레지스터.
reg [7:0] Z3_a; //우선순위 3인 레이어의 알파값을 저장하는 레지스터.
reg Z3_valid; //우선순위 3인 레이어의 유효성 여부를 저장하는 레지스터.
reg Z3_ready; 

reg [17:0] Z4_RGB; //우선순위 4인 레이어의 RGB값을 저장하는 레지스터.
reg Z4_is_trans; //우선순위 4인 레이어의 투명도 여부를 저장하는 레지스터.
reg [7:0] Z4_a; //우선순위 4인 레이어의 알파값을 저장하는 레지스터.
reg Z4_valid; 
reg Z4_ready;

reg [17:0] Z5_RGB; //우선순위 5인 레이어의 RGB값을 저장하는 레지스터.
reg Z5_is_trans; //우선순위 5인 레이어의 투명도 여부를 저장하는 레지스터.
reg [7:0] Z5_a; //우선순위 5인 레이어의 알파값을 저장하는 레지스터.
reg Z5_valid; 
reg Z5_ready;

reg [17:0] Z6_RGB; //우선순위 6인 레이어의 RGB값을 저장하는 레지스터.
reg Z6_is_trans; //우선순위 6인 레이어의 투명도 여부를 저장하는 레지스터.
reg [7:0] Z6_a; //우선순위 6인 레이어의 알파값을 저장하는 레지스터.
reg Z6_valid; 
reg Z6_ready;

reg [17:0] Z7_RGB; //우선순위 7인 레이어의 RGB값을 저장하는 레지스터.
reg Z7_is_trans; //우선순위 7인 레이어의 투명도 여부를 저장하는 레지스터.
reg [7:0] Z7_a; //우선순위 7인 레이어의 알파값을 저장하는 레지스터.
reg Z7_valid; 
reg Z7_ready;

reg [17:0] Z8_RGB; //우선순위 8인 레이어의 RGB값을 저장하는 레지스터.
reg Z8_is_trans; //우선순위 8인 레이어의 투명도 여부를 저장하는 레지스터.
reg [7:0] Z8_a; //우선순위 8인 레이어의 알파값을 저장하는 레지스터.
reg Z8_valid;
reg Z8_ready;

reg [17:0] Z9_RGB; //우선순위 9인 레이어의 RGB값을 저장하는 레지스터.
reg Z9_is_trans; //우선순위 9인 레이어의 투명도 여부를 저장하는 레지스터.
reg [7:0] Z9_a; //우선순위 9인 레이어의 알파값을 저장하는 레지스터.
reg Z9_valid; 
reg Z9_ready;

reg [17:0] Z10_RGB; //우선순위 10인 레이어의 RGB값을 저장하는 레지스터.
reg Z10_is_trans; //우선순위 10인 레이어의 투명도 여부를 저장하는 레지스터.
reg [7:0] Z10_a; //우선순위 10인 레이어의 알파값을 저장하는 레지스터.
reg Z10_valid; 
reg Z10_ready;

reg Pipeline_move; //이 신호가 1이어야지 파이프라인이 1단계 진행함. 제어신호임.

//파이프라인 1번 레지스터들. Z1, Z2 레지스터들을 알파블랜딩 연산한 후 저장함. 
reg [14:0] Pipe1_R; //6비트 값을 15비트로 확장함. {5'b00000, 6비트 R값, 4'b0000}.
reg [14:0] Pipe1_G;
reg [14:0] Pipe1_B;
reg Pipe1_valid; //이 값이 1이어야지 다음 파이프라인 레지스터로 다음 연산값이 넘어감.

//파이프라인 2번 레지스터들. 파이프라인 1번이랑 Z3 레지스터를 알파블랜딩 연산한 후 저장함.
reg [14:0] Pipe2_R; //6비트 값을 15비트로 확장해서 연산 후 저장함. 
reg [14:0] Pipe2_G;
reg [14:0] Pipe2_B;
reg Pipe2_valid;

//파이프라인 3번 레지스터들. 파이프라인 2번이랑 Z4 레지스터를 알파블랜딩 연산한 후 저장함.
reg [14:0] Pipe3_R; //6비트 값을 15비트로 확장해서 연산 후 저장함. 
reg [14:0] Pipe3_G;
reg [14:0] Pipe3_B;
reg Pipe3_valid;

//파이프라인 4번 레지스터들. 파이프라인 3번이랑 Z5 레지스터를 알파블랜딩 연산한 후 저장함.
reg [14:0] Pipe4_R; //6비트 값을 15비트로 확장해서 연산 후 저장함. 
reg [14:0] Pipe4_G;
reg [14:0] Pipe4_B;
reg Pipe4_valid;

//파이프라인 5번 레지스터들. 파이프라인 4번이랑 Z6 레지스터를 알파블랜딩 연산한 후 저장함.
reg [14:0] Pipe5_R; //6비트 값을 15비트로 확장해서 연산 후 저장함. 
reg [14:0] Pipe5_G;
reg [14:0] Pipe5_B;
reg Pipe5_valid;

//파이프라인 6번 레지스터들. 파이프라인 5번이랑 Z7 레지스터를 알파블랜딩 연산한 후 저장함.
reg [14:0] Pipe6_R; //6비트 값을 15비트로 확장해서 연산 후 저장함. 
reg [14:0] Pipe6_G;
reg [14:0] Pipe6_B;
reg Pipe6_valid;

//파이프라인 7번 레지스터들. 파이프라인 6번이랑 Z8 레지스터를 알파블랜딩 연산한 후 저장함.
reg [14:0] Pipe7_R; //6비트 값을 15비트로 확장해서 연산 후 저장함. 
reg [14:0] Pipe7_G;
reg [14:0] Pipe7_B;
reg Pipe7_valid;

//파이프라인 8번 레지스터들. 파이프라인 7번이랑 Z9 레지스터를 알파블랜딩 연산한 후 저장함.
reg [14:0] Pipe8_R; //6비트 값을 15비트로 확장해서 연산 후 저장함. 
reg [14:0] Pipe8_G;
reg [14:0] Pipe8_B;
reg Pipe8_valid;

//파이프라인 9번 레지스터들. 파이프라인 8번이랑 Z10 레지스터를 알파블랜딩 연산한 후 저장함. 이 값을 각각 8비트씩 잘라서 최종 RGB값으로 만들어서 출력함.
reg [14:0] Pipe9_R; //6비트 값을 15비트로 확장해서 연산 후 저장함. 
reg [14:0] Pipe9_G;
reg [14:0] Pipe9_B;
reg Pipe9_valid;

reg all_fsm_reset; //이 신호가 1이 되면 Z1 ~ Z10까지의 FSM이 모두 IDLE로 초기화됨. 이후 PPU_start 신호가 1이되면 다시 진행을 시작하게 됨.

//이 배열에 각각의 레이어의 값들을 할당함. [0]: 사용되지 않음.[1]: Background1, [2]: Background2, [3]: Character1, [4]: Character2, [5]: Character3, [6]: Character4, [7]: Script, [8]: Status, [9]: Universal1, [10]: Universal2
//[0]: 사용되지 않음. [1]: Background1, [2]: Background2, [3]: Character1, [4]: Character2, [5]: Character3, [6]: Character4, [7]: Script, [8]: Status, [9]: Universal1, [10]: Universal2
wire [17:0] layer_RGB [10:0]; 
wire layer_is_trans [10:0];
wire layer_valid [10:0];
wire [7:0] layer_z [10:0]; //일반적으로 1 ~ 10까지의 값을 가짐. 절대 겹쳐서는 안됨. 0이면 그 레이어는 사용되지 않는다는 것을 나타냄.
wire [7:0] layer_a [10:0];

reg layer_ready [10:0];

//이 배열의 index는 [1]: Z1, [2]: Z2, [3]: Z3, [4]: Z4, [5]: Z5, [6]: Z6, [7]: Z7, [8]: Z8, [9]: Z9, [10]: Z10임. 해당하는 값은 0 ~ 10 까지의 레이어 번호임. 예를 들어 1이면 Background1 이고 10이면 Universal2임. 0이면 사용되지 않는다는 뜻임.
reg [3:0] z_index_map [10:1];

//이 배열들도 마찬가지로 [1]: Z1, [2]: Z2, [3]: Z3, [4]: Z4, [5]: Z5, [6]: Z6, [7]: Z7, [8]: Z8, [9]: Z9, [10]: Z10임
reg [17:0] z_input_RGB [10:1];
reg z_input_is_trans [10:1];
reg [7:0] z_input_a [10:1];
reg z_input_valid [10:1];
reg z_input_ready [10:1]; //이것만 따로 FSM에서 결정해 주면 됨. 

assign layer_RGB[0] = 0; //사용되지 않는 레이어이므로 RGB값을 0으로 고정함.
assign layer_RGB[1] = Background1_pixel_RGB;
assign layer_RGB[2] = Background2_pixel_RGB;
assign layer_RGB[3] = Character1_pixel_RGB;
assign layer_RGB[4] = Character2_pixel_RGB;
assign layer_RGB[5] = Character3_pixel_RGB;
assign layer_RGB[6] = Character4_pixel_RGB;
assign layer_RGB[7] = Script_pixel_RGB;
assign layer_RGB[8] = Status_pixel_RGB;
assign layer_RGB[9] = Universal1_pixel_RGB;
assign layer_RGB[10] = Universal2_pixel_RGB;

assign layer_is_trans[0] = 1; //사용되지 않는 레이어이므로 투명하다고 가정함.
assign layer_is_trans[1] = Background1_pixel_is_trans;
assign layer_is_trans[2] = Background2_pixel_is_trans;
assign layer_is_trans[3] = Character1_pixel_is_trans;
assign layer_is_trans[4] = Character2_pixel_is_trans;
assign layer_is_trans[5] = Character3_pixel_is_trans;
assign layer_is_trans[6] = Character4_pixel_is_trans;
assign layer_is_trans[7] = Script_pixel_is_trans;
assign layer_is_trans[8] = Status_pixel_is_trans;
assign layer_is_trans[9] = Universal1_pixel_is_trans;
assign layer_is_trans[10] = Universal2_pixel_is_trans;

assign layer_valid[0] = 1; //사용되지 않는 레이어이므로 항상 vaild와 is_trans를 1로 설정함. 이렇게 하면 자동으로 투명한 픽셀로 처리되어서 최종 픽셀에 영향이 없게 됨.
assign layer_valid[1] = Background1_pixel_valid;
assign layer_valid[2] = Background2_pixel_valid;
assign layer_valid[3] = Character1_pixel_valid;
assign layer_valid[4] = Character2_pixel_valid;
assign layer_valid[5] = Character3_pixel_valid;
assign layer_valid[6] = Character4_pixel_valid;
assign layer_valid[7] = Script_pixel_valid;
assign layer_valid[8] = Status_pixel_valid;
assign layer_valid[9] = Universal1_pixel_valid;
assign layer_valid[10] = Universal2_pixel_valid;

assign layer_z[0] = 0;
assign layer_z[1] = Background1_z;
assign layer_z[2] = Background2_z;
assign layer_z[3] = Character1_z;
assign layer_z[4] = Character2_z;
assign layer_z[5] = Character3_z;
assign layer_z[6] = Character4_z;
assign layer_z[7] = Script_z;
assign layer_z[8] = Status_z;
assign layer_z[9] = Universal1_z;
assign layer_z[10] = Universal2_z;

assign layer_a[0] = 0;
assign layer_a[1] = Background1_a;
assign layer_a[2] = Background2_a;
assign layer_a[3] = Character1_a;
assign layer_a[4] = Character2_a;
assign layer_a[5] = Character3_a;
assign layer_a[6] = Character4_a;
assign layer_a[7] = Script_a;
assign layer_a[8] = Status_a;
assign layer_a[9] = Universal1_a;
assign layer_a[10] = Universal2_a;

integer i, j;

always @(*) begin
    for (i = 1; i <= 10; i = i + 1) begin //초기화. 이렇게 하면 밑의 for문에서 할당이 안되면 자동으로 0번 레이어가 들어있게 되어서 싹다 투명픽셀인걸로 취급됨.
        z_index_map[i] = 4'd0; 
    end

    // 각 레이어의 Z-index(1~10)를 확인하여 정렬 맵 생성
    // 변수 z값이 1이면 Z1_input으로, 2면 Z2_input으로 바로 꽂히도록 설계
    for (i = 1; i <= 10; i = i + 1) begin
        if (layer_z[i] >= 8'd1 && layer_z[i] <= 8'd10) begin
            z_index_map[layer_z[i]] = i; // 해당 Z-index 위치에 레이어 번호 저장
        end
    end
end

always @(*) begin
    for (j = 1; j <= 10; j = j + 1) begin
        z_input_RGB[j]      = layer_RGB[z_index_map[j]];
        z_input_is_trans[j] = layer_is_trans[z_index_map[j]];
        z_input_valid[j]    = layer_valid[z_index_map[j]];
        z_input_a[j]      = layer_a[z_index_map[j]];
    end
end

always @(*) begin
    layer_ready[0] = 0;
    layer_ready[1] = 0;
    layer_ready[2] = 0;
    layer_ready[3] = 0;
    layer_ready[4] = 0;
    layer_ready[5] = 0;
    layer_ready[6] = 0;
    layer_ready[7] = 0;
    layer_ready[8] = 0;
    layer_ready[9] = 0;
    layer_ready[10] = 0;

    if(z_input_ready[1] == 1) begin
        layer_ready[z_index_map[1]] = 1;
    end
    if(z_input_ready[2] == 1) begin
        layer_ready[z_index_map[2]] = 1;
    end
    if(z_input_ready[3] == 1) begin
        layer_ready[z_index_map[3]] = 1;
    end
    if(z_input_ready[4] == 1) begin
        layer_ready[z_index_map[4]] = 1;
    end
    if(z_input_ready[5] == 1) begin
        layer_ready[z_index_map[5]] = 1;
    end
    if(z_input_ready[6] == 1) begin
        layer_ready[z_index_map[6]] = 1;
    end
    if(z_input_ready[7] == 1) begin
        layer_ready[z_index_map[7]] = 1;
    end
    if(z_input_ready[8] == 1) begin
        layer_ready[z_index_map[8]] = 1;
    end
    if(z_input_ready[9] == 1) begin
        layer_ready[z_index_map[9]] = 1;
    end
    if(z_input_ready[10] == 1) begin
        layer_ready[z_index_map[10]] = 1;
    end
end



reg [1:0] Z1_state;
reg [1:0] Z1_state_next;
reg [1:0] Z2_state;
reg [1:0] Z2_state_next;
reg [1:0] Z3_state;
reg [1:0] Z3_state_next;
reg [1:0] Z4_state;
reg [1:0] Z4_state_next;
reg [1:0] Z5_state;
reg [1:0] Z5_state_next;
reg [1:0] Z6_state;
reg [1:0] Z6_state_next;
reg [1:0] Z7_state;
reg [1:0] Z7_state_next;
reg [1:0] Z8_state;
reg [1:0] Z8_state_next;
reg [1:0] Z9_state;
reg [1:0] Z9_state_next;
reg [1:0] Z10_state;
reg [1:0] Z10_state_next;

always @(*) begin
    Z1_state_next = Z1_state;
    z_input_ready[1] = 0; 

    Z2_state_next = Z2_state;
    z_input_ready[2] = 0;

    Z3_state_next = Z3_state;
    z_input_ready[3] = 0;

    Z4_state_next = Z4_state;
    z_input_ready[4] = 0;

    Z5_state_next = Z5_state;
    z_input_ready[5] = 0;

    Z6_state_next = Z6_state;
    z_input_ready[6] = 0;

    Z7_state_next = Z7_state;
    z_input_ready[7] = 0;

    Z8_state_next = Z8_state;
    z_input_ready[8] = 0;

    Z9_state_next = Z9_state;
    z_input_ready[9] = 0;

    Z10_state_next = Z10_state;
    z_input_ready[10] = 0;

    case(Z1_state[1:0])
        2'b00: begin //IDLE 상태
            if(PPU_start) begin
                Z1_state_next = 2'b01; //IDLE 상태에서 PPU_start 신호가 들어오면 READ 상태로 전이함.
            end
            else begin
                Z1_state_next = 2'b00; //IDLE 상태에서 PPU_start 신호가 들어오지 않으면 계속 IDLE 상태 유지함.
            end
        end
        2'b01: begin //READ 상태
            if(z_input_valid[1]) begin //클럭에지떄 Z1_valid가 1로 설정됨.
                Z1_state_next = 2'b10; 
                z_input_ready[1] = 1;
            end
            else begin
                Z1_state_next = 2'b01; //계속 대기
                z_input_ready[1] = 0;
            end
        end
        2'b10: begin
            if(Z1_ready && z_input_valid[1]) begin //클럭에지때 Z1_valid 1로 설정.
                Z1_state_next = 2'b10; //이 상태를 한번 더 유지함.
                z_input_ready[1] = 1; 
            end
            else if(Z1_ready && !z_input_valid[1]) begin //클럭에지때 Z1_valid 0으로 설정.
                Z1_state_next = 2'b01; //READ 상태로 돌아가서 z_input_valid가 1이 될때까지 대기함.
                z_input_ready[1] = 0;
            end
            else begin
                Z1_state_next = 2'b10; //계속 대기
                z_input_ready[1] = 0;
            end
        end
        2'b11: begin
        end
    endcase

    case(Z2_state[1:0])
        2'b00: begin //IDLE 상태
            if(PPU_start) begin
                Z2_state_next = 2'b01; //IDLE 상태에서 PPU_start 신호가 들어오면 READ 상태로 전이함.
            end
            else begin
                Z2_state_next = 2'b00; //IDLE 상태에서 PPU_start 신호가 들어오지 않으면 계속 IDLE 상태 유지함.
            end
        end
        2'b01: begin //READ 상태
            if(z_input_valid[2]) begin //클럭에지떄 Z2_valid가 1로 설정됨.
                Z2_state_next = 2'b10; 
                z_input_ready[2] = 1;
            end
            else begin
                Z2_state_next = 2'b01; //계속 대기
                z_input_ready[2] = 0;
            end
        end
        2'b10: begin
            if(Z2_ready && z_input_valid[2]) begin //클럭에지때 Z2_valid 1로 설정.
                Z2_state_next = 2'b10; //이 상태를 한번 더 유지함.
                z_input_ready[2] = 1; 
            end
            else if(Z2_ready && !z_input_valid[2]) begin //클럭에지때 Z2_valid 0으로 설정.
                Z2_state_next = 2'b01; //READ 상태로 돌아가서 z_input_valid가 1이 될때까지 대기함.
                z_input_ready[2] = 0;
            end
            else begin
                Z2_state_next = 2'b10; //계속 대기
                z_input_ready[2] = 0;
            end
        end
        2'b11: begin
        end
    endcase

    case(Z3_state[1:0])
        2'b00: begin //IDLE 상태
            if(PPU_start) begin
                Z3_state_next = 2'b01; //IDLE 상태에서 PPU_start 신호가 들어오면 READ 상태로 전이함.
            end
            else begin
                Z3_state_next = 2'b00; //IDLE 상태에서 PPU_start 신호가 들어오지 않으면 계속 IDLE 상태 유지함.
            end
        end
        2'b01: begin //READ 상태
            if(z_input_valid[3]) begin //클럭에지떄 Z3_valid가 1로 설정됨.
                Z3_state_next = 2'b10; 
                z_input_ready[3] = 1;
            end
            else begin
                Z3_state_next = 2'b01; //계속 대기
                z_input_ready[3] = 0;
            end
        end
        2'b10: begin
            if(Z3_ready && z_input_valid[3]) begin //클럭에지때 Z3_valid 1로 설정.
                Z3_state_next = 2'b10; //이 상태를 한번 더 유지함.
                z_input_ready[3] = 1; 
            end
            else if(Z3_ready && !z_input_valid[3]) begin //클럭에지때 Z3_valid 0으로 설정.
                Z3_state_next = 2'b01; //READ 상태로 돌아가서 z_input_valid가 1이 될때까지 대기함.
                z_input_ready[3] = 0;
            end
            else begin
                Z3_state_next = 2'b10; //계속 대기
                z_input_ready[3] = 0;
            end
        end
        2'b11: begin
        end
    endcase

    case(Z4_state[1:0])
        2'b00: begin //IDLE 상태
            if(PPU_start) begin
                Z4_state_next = 2'b01; //IDLE 상태에서 PPU_start 신호가 들어오면 READ 상태로 전이함.
            end
            else begin
                Z4_state_next = 2'b00; //IDLE 상태에서 PPU_start 신호가 들어오지 않으면 계속 IDLE 상태 유지함.
            end
        end
        2'b01: begin //READ 상태
            if(z_input_valid[4]) begin //클럭에지떄 Z4_valid가 1로 설정됨.
                Z4_state_next = 2'b10; 
                z_input_ready[4] = 1;
            end
            else begin
                Z4_state_next = 2'b01; //계속 대기
                z_input_ready[4] = 0;
            end
        end
        2'b10: begin
            if(Z4_ready && z_input_valid[4]) begin //클럭에지때 Z4_valid 1로 설정.
                Z4_state_next = 2'b10; //이 상태를 한번 더 유지함.
                z_input_ready[4] = 1; 
            end
            else if(Z4_ready && !z_input_valid[4]) begin //클럭에지때 Z4_valid 0으로 설정.
                Z4_state_next = 2'b01; //READ 상태로 돌아가서 z_input_valid가 1이 될때까지 대기함.
                z_input_ready[4] = 0;
            end
            else begin
                Z4_state_next = 2'b10; //계속 대기
                z_input_ready[4] = 0;
            end
        end
        2'b11: begin
        end
    endcase

    case(Z5_state[1:0])
        2'b00: begin //IDLE 상태
            if(PPU_start) begin
                Z5_state_next = 2'b01; //IDLE 상태에서 PPU_start 신호가 들어오면 READ 상태로 전이함.
            end
            else begin
                Z5_state_next = 2'b00; //IDLE 상태에서 PPU_start 신호가 들어오지 않으면 계속 IDLE 상태 유지함.
            end
        end
        2'b01: begin //READ 상태
            if(z_input_valid[5]) begin //클럭에지떄 Z5_valid가 1로 설정됨.
                Z5_state_next = 2'b10; 
                z_input_ready[5] = 1;
            end
            else begin
                Z5_state_next = 2'b01; //계속 대기
                z_input_ready[5] = 0;
            end
        end
        2'b10: begin
            if(Z5_ready && z_input_valid[5]) begin //클럭에지때 Z5_valid 1로 설정.
                Z5_state_next = 2'b10; //이 상태를 한번 더 유지함.
                z_input_ready[5] = 1; 
            end
            else if(Z5_ready && !z_input_valid[5]) begin //클럭에지때 Z5_valid 0으로 설정.
                Z5_state_next = 2'b01; //READ 상태로 돌아가서 z_input_valid가 1이 될때까지 대기함.
                z_input_ready[5] = 0;
            end
            else begin
                Z5_state_next = 2'b10; //계속 대기
                z_input_ready[5] = 0;
            end
        end
        2'b11: begin
        end
    endcase

    case(Z6_state[1:0])
        2'b00: begin //IDLE 상태
            if(PPU_start) begin
                Z6_state_next = 2'b01; //IDLE 상태에서 PPU_start 신호가 들어오면 READ 상태로 전이함.
            end
            else begin
                Z6_state_next = 2'b00; //IDLE 상태에서 PPU_start 신호가 들어오지 않으면 계속 IDLE 상태 유지함.
            end
        end
        2'b01: begin //READ 상태
            if(z_input_valid[6]) begin //클럭에지떄 Z6_valid가 1로 설정됨.
                Z6_state_next = 2'b10; 
                z_input_ready[6] = 1;
            end
            else begin
                Z6_state_next = 2'b01; //계속 대기
                z_input_ready[6] = 0;
            end
        end
        2'b10: begin
            if(Z6_ready && z_input_valid[6]) begin //클럭에지때 Z6_valid 1로 설정.
                Z6_state_next = 2'b10; //이 상태를 한번 더 유지함.
                z_input_ready[6] = 1; 
            end
            else if(Z6_ready && !z_input_valid[6]) begin //클럭에지때 Z6_valid 0으로 설정.
                Z6_state_next = 2'b01; //READ 상태로 돌아가서 z_input_valid가 1이 될때까지 대기함.
                z_input_ready[6] = 0;
            end
            else begin
                Z6_state_next = 2'b10; //계속 대기
                z_input_ready[6] = 0;
            end
        end
        2'b11: begin
        end
    endcase

    case(Z7_state[1:0])
        2'b00: begin //IDLE 상태
            if(PPU_start) begin
                Z7_state_next = 2'b01; //IDLE 상태에서 PPU_start 신호가 들어오면 READ 상태로 전이함.
            end
            else begin
                Z7_state_next = 2'b00; //IDLE 상태에서 PPU_start 신호가 들어오지 않으면 계속 IDLE 상태 유지함.
            end
        end
        2'b01: begin //READ 상태
            if(z_input_valid[7]) begin //클럭에지떄 Z7_valid가 1로 설정됨.
                Z7_state_next = 2'b10; 
                z_input_ready[7] = 1;
            end
            else begin
                Z7_state_next = 2'b01; //계속 대기
                z_input_ready[7] = 0;
            end
        end
        2'b10: begin
            if(Z7_ready && z_input_valid[7]) begin //클럭에지때 Z7_valid 1로 설정.
                Z7_state_next = 2'b10; //이 상태를 한번 더 유지함.
                z_input_ready[7] = 1; 
            end
            else if(Z7_ready && !z_input_valid[7]) begin //클럭에지때 Z7_valid 0으로 설정.
                Z7_state_next = 2'b01; //READ 상태로 돌아가서 z_input_valid가 1이 될때까지 대기함.
                z_input_ready[7] = 0;
            end
            else begin
                Z7_state_next = 2'b10; //계속 대기
                z_input_ready[7] = 0;
            end
        end
        2'b11: begin
        end
    endcase

    case(Z8_state[1:0])
        2'b00: begin //IDLE 상태
            if(PPU_start) begin
                Z8_state_next = 2'b01; //IDLE 상태에서 PPU_start 신호가 들어오면 READ 상태로 전이함.
            end
            else begin
                Z8_state_next = 2'b00; //IDLE 상태에서 PPU_start 신호가 들어오지 않으면 계속 IDLE 상태 유지함.
            end
        end
        2'b01: begin //READ 상태
            if(z_input_valid[8]) begin //클럭에지떄 Z8_valid가 1로 설정됨.
                Z8_state_next = 2'b10; 
                z_input_ready[8] = 1;
            end
            else begin
                Z8_state_next = 2'b01; //계속 대기
                z_input_ready[8] = 0;
            end
        end
        2'b10: begin
            if(Z8_ready && z_input_valid[8]) begin //클럭에지때 Z8_valid 1로 설정.
                Z8_state_next = 2'b10; //이 상태를 한번 더 유지함.
                z_input_ready[8] = 1; 
            end
            else if(Z8_ready && !z_input_valid[8]) begin //클럭에지때 Z8_valid 0으로 설정.
                Z8_state_next = 2'b01; //READ 상태로 돌아가서 z_input_valid가 1이 될때까지 대기함.
                z_input_ready[8] = 0;
            end
            else begin
                Z8_state_next = 2'b10; //계속 대기
                z_input_ready[8] = 0;
            end
        end
        2'b11: begin
        end
    endcase

    case(Z9_state[1:0])
        2'b00: begin //IDLE 상태
            if(PPU_start) begin
                Z9_state_next = 2'b01; //IDLE 상태에서 PPU_start 신호가 들어오면 READ 상태로 전이함.
            end
            else begin
                Z9_state_next = 2'b00; //IDLE 상태에서 PPU_start 신호가 들어오지 않으면 계속 IDLE 상태 유지함.
            end
        end
        2'b01: begin //READ 상태
            if(z_input_valid[9]) begin //클럭에지떄 Z9_valid가 1로 설정됨.
                Z9_state_next = 2'b10; 
                z_input_ready[9] = 1;
            end
            else begin
                Z9_state_next = 2'b01; //계속 대기
                z_input_ready[9] = 0;
            end
        end
        2'b10: begin
            if(Z9_ready && z_input_valid[9]) begin //클럭에지때 Z9_valid 1로 설정.
                Z9_state_next = 2'b10; //이 상태를 한번 더 유지함.
                z_input_ready[9] = 1; 
            end
            else if(Z9_ready && !z_input_valid[9]) begin //클럭에지때 Z9_valid 0으로 설정.
                Z9_state_next = 2'b01; //READ 상태로 돌아가서 z_input_valid가 1이 될때까지 대기함.
                z_input_ready[9] = 0;
            end
            else begin
                Z9_state_next = 2'b10; //계속 대기
                z_input_ready[9] = 0;
            end
        end
        2'b11: begin
        end
    endcase

    case(Z10_state[1:0])
        2'b00: begin //IDLE 상태
            if(PPU_start) begin
                Z10_state_next = 2'b01; //IDLE 상태에서 PPU_start 신호가 들어오면 READ 상태로 전이함.
            end
            else begin
                Z10_state_next = 2'b00; //IDLE 상태에서 PPU_start 신호가 들어오지 않으면 계속 IDLE 상태 유지함.
            end
        end
        2'b01: begin //READ 상태
            if(z_input_valid[10]) begin //클럭에지떄 Z10_valid가 1로 설정됨.
                Z10_state_next = 2'b10; 
                z_input_ready[10] = 1;
            end
            else begin
                Z10_state_next = 2'b01; //계속 대기
                z_input_ready[10] = 0;
            end
        end
        2'b10: begin
            if(Z10_ready && z_input_valid[10]) begin //클럭에지때 Z10_valid 1로 설정.
                Z10_state_next = 2'b10; //이 상태를 한번 더 유지함.
                z_input_ready[10] = 1; 
            end
            else if(Z10_ready && !z_input_valid[10]) begin //클럭에지때 Z10_valid 0으로 설정.
                Z10_state_next = 2'b01; //READ 상태로 돌아가서 z_input_valid가 1이 될때까지 대기함.
                z_input_ready[10] = 0;
            end
            else begin
                Z10_state_next = 2'b10; //계속 대기
                z_input_ready[10] = 0;
            end
        end
        2'b11: begin
        end
    endcase
end

always @(posedge clk or negedge resetn) begin
    if (!resetn) begin
        Z1_state[1:0] <= 0;
        Z2_state[1:0] <= 0;
        Z3_state[1:0] <= 0;
        Z4_state[1:0] <= 0;
        Z5_state[1:0] <= 0;
        Z6_state[1:0] <= 0;
        Z7_state[1:0] <= 0;
        Z8_state[1:0] <= 0;
        Z9_state[1:0] <= 0;
        Z10_state[1:0] <= 0;

        Z1_RGB <= 0;
        Z1_is_trans <= 0;
        Z1_a <= 0;
        Z1_valid <= 0;

        Z2_RGB <= 0;
        Z2_is_trans <= 0;
        Z2_a <= 0;
        Z2_valid <= 0;

        Z3_RGB <= 0;
        Z3_is_trans <= 0;
        Z3_a <= 0;
        Z3_valid <= 0;

        Z4_RGB <= 0;
        Z4_is_trans <= 0;
        Z4_a <= 0;
        Z4_valid <= 0;

        Z5_RGB <= 0;
        Z5_is_trans <= 0;
        Z5_a <= 0;
        Z5_valid <= 0;

        Z6_RGB <= 0;
        Z6_is_trans <= 0;
        Z6_a <= 0;
        Z6_valid <= 0;

        Z7_RGB <= 0;
        Z7_is_trans <= 0;
        Z7_a <= 0;
        Z7_valid <= 0;

        Z8_RGB <= 0;
        Z8_is_trans <= 0;
        Z8_a <= 0;
        Z8_valid <= 0;

        Z9_RGB <= 0;
        Z9_is_trans <= 0;
        Z9_a <= 0;
        Z9_valid <= 0;

        Z10_RGB <= 0;
        Z10_is_trans <= 0;
        Z10_a <= 0;
        Z10_valid <= 0;

        Pipe1_R[14:0] <= 0;
        Pipe1_G[14:0] <= 0;
        Pipe1_B[14:0] <= 0;
        Pipe1_valid <= 0;

        Pipe2_R[14:0] <= 0;
        Pipe2_G[14:0] <= 0;
        Pipe2_B[14:0] <= 0;
        Pipe2_valid <= 0;

        Pipe3_R[14:0] <= 0;
        Pipe3_G[14:0] <= 0;
        Pipe3_B[14:0] <= 0;
        Pipe3_valid <= 0;

        Pipe4_R[14:0] <= 0;
        Pipe4_G[14:0] <= 0;
        Pipe4_B[14:0] <= 0;
        Pipe4_valid <= 0;

        Pipe5_R[14:0] <= 0;
        Pipe5_G[14:0] <= 0;
        Pipe5_B[14:0] <= 0;
        Pipe5_valid <= 0;

        Pipe6_R[14:0] <= 0;
        Pipe6_G[14:0] <= 0;
        Pipe6_B[14:0] <= 0;
        Pipe6_valid <= 0;

        Pipe7_R[14:0] <= 0;
        Pipe7_G[14:0] <= 0;
        Pipe7_B[14:0] <= 0;
        Pipe7_valid <= 0;

        Pipe8_R[14:0] <= 0;
        Pipe8_G[14:0] <= 0;
        Pipe8_B[14:0] <= 0;
        Pipe8_valid <= 0;

        Pipe9_R[14:0] <= 0;
        Pipe9_G[14:0] <= 0;
        Pipe9_B[14:0] <= 0;
        Pipe9_valid <= 0;
    end
    else begin
        Z1_state[1:0] <= Z1_state_next;
        Z2_state[1:0] <= Z2_state_next;
        Z3_state[1:0] <= Z3_state_next;
        Z4_state[1:0] <= Z4_state_next;
        Z5_state[1:0] <= Z5_state_next;
        Z6_state[1:0] <= Z6_state_next;
        Z7_state[1:0] <= Z7_state_next;
        Z8_state[1:0] <= Z8_state_next;
        Z9_state[1:0] <= Z9_state_next;
        Z10_state[1:0] <= Z10_state_next;

        if(all_fsm_reset) begin //모두 IDLE 상태로 강제로 이동함. 한 프레임 연산이 끝나면 이 신호를 활성화 해주면 됨.
            Z1_state[1:0] <= 0;
            Z2_state[1:0] <= 0;
            Z3_state[1:0] <= 0;
            Z4_state[1:0] <= 0;
            Z5_state[1:0] <= 0;
            Z6_state[1:0] <= 0;
            Z7_state[1:0] <= 0;
            Z8_state[1:0] <= 0;
            Z9_state[1:0] <= 0;
            Z10_state[1:0] <= 0;
        end

        case(Z1_state[1:0])
            2'b00: begin //IDLE 상태
                if(PPU_start) begin //READ 상태로 이동. 레지스터 초기화.
                    Z1_valid <= 0;
                    Z1_RGB[17:0] <= 0;
                    Z1_is_trans <= 0;
                    Z1_a <= 0;
                end
            end
            2'b01: begin //READ 상태
                if(z_input_valid[1]) begin //이떄 다음 state로 넘어감.
                    Z1_RGB[17:0] <= z_input_RGB[1][17:0];
                    Z1_is_trans <= z_input_is_trans[1];
                    Z1_a <= z_input_a[1];
                    Z1_valid <= 1;
                end
            end
            2'b10: begin
                if(Z1_ready && z_input_valid[1]) begin //새로운 픽셀값 넣고 Z1_valid를 1로 설정하고 같은 state에서 대기.
                    Z1_RGB[17:0] <= z_input_RGB[1][17:0];
                    Z1_is_trans <= z_input_is_trans[1];
                    Z1_a <= z_input_a[1];
                    Z1_valid <= 1;
                end
                else if(Z1_ready && !z_input_valid[1]) begin //Z1_valid 0으로 설정하면서 READ 상태로 이동.
                    Z1_valid <= 0;
                end
                else begin //값 유지하면서 대기.
                    Z1_valid <= 1;
                end
            end
        endcase

        case(Z2_state[1:0])
            2'b00: begin //IDLE 상태
                if(PPU_start) begin //READ 상태로 이동. 레지스터 초기화.
                    Z2_valid <= 0;
                    Z2_RGB[17:0] <= 0;
                    Z2_is_trans <= 0;
                    Z2_a <= 0;
                end
            end
            2'b01: begin //READ 상태
                if(z_input_valid[2]) begin //이떄 다음 state로 넘어감.
                    Z2_RGB[17:0] <= z_input_RGB[2][17:0];
                    Z2_is_trans <= z_input_is_trans[2];
                    Z2_a <= z_input_a[2];
                    Z2_valid <= 1;
                end
            end
            2'b10: begin
                if(Z2_ready && z_input_valid[2]) begin //새로운 픽셀값 넣고 Z2_valid를 1로 설정하고 같은 state에서 대기.
                    Z2_RGB[17:0] <= z_input_RGB[2][17:0];
                    Z2_is_trans <= z_input_is_trans[2];
                    Z2_a <= z_input_a[2];
                    Z2_valid <= 1;
                end
                else if(Z2_ready && !z_input_valid[2]) begin //Z2_valid 0으로 설정하면서 READ 상태로 이동.
                    Z2_valid <= 0;
                end
                else begin //값 유지하면서 대기.
                    Z2_valid <= 1;
                end
            end
        endcase

        case(Z3_state[1:0])
            2'b00: begin //IDLE 상태
                if(PPU_start) begin //READ 상태로 이동. 레지스터 초기화.
                    Z3_valid <= 0;
                    Z3_RGB[17:0] <= 0;
                    Z3_is_trans <= 0;
                    Z3_a <= 0;
                end
            end
            2'b01: begin //READ 상태
                if(z_input_valid[3]) begin //이떄 다음 state로 넘어감.
                    Z3_RGB[17:0] <= z_input_RGB[3][17:0];
                    Z3_is_trans <= z_input_is_trans[3];
                    Z3_a <= z_input_a[3];
                    Z3_valid <= 1;
                end
            end
            2'b10: begin
                if(Z3_ready && z_input_valid[3]) begin //새로운 픽셀값 넣고 Z3_valid를 1로 설정하고 같은 state에서 대기.
                    Z3_RGB[17:0] <= z_input_RGB[3][17:0];
                    Z3_is_trans <= z_input_is_trans[3];
                    Z3_a <= z_input_a[3];
                    Z3_valid <= 1;
                end
                else if(Z3_ready && !z_input_valid[3]) begin //Z3_valid 0으로 설정하면서 READ 상태로 이동.
                    Z3_valid <= 0;
                end
                else begin //값 유지하면서 대기.
                    Z3_valid <= 1;
                end
            end
        endcase

        case(Z4_state[1:0])
            2'b00: begin //IDLE 상태
                if(PPU_start) begin //READ 상태로 이동. 레지스터 초기화.
                    Z4_valid <= 0;
                    Z4_RGB[17:0] <= 0;
                    Z4_is_trans <= 0;
                    Z4_a <= 0;
                end
            end
            2'b01: begin //READ 상태
                if(z_input_valid[4]) begin //이떄 다음 state로 넘어감.
                    Z4_RGB[17:0] <= z_input_RGB[4][17:0];
                    Z4_is_trans <= z_input_is_trans[4];
                    Z4_a <= z_input_a[4];
                    Z4_valid <= 1;
                end
            end
            2'b10: begin
                if(Z4_ready && z_input_valid[4]) begin //새로운 픽셀값 넣고 Z4_valid를 1로 설정하고 같은 state에서 대기.
                    Z4_RGB[17:0] <= z_input_RGB[4][17:0];
                    Z4_is_trans <= z_input_is_trans[4];
                    Z4_a <= z_input_a[4];
                    Z4_valid <= 1;
                end
                else if(Z4_ready && !z_input_valid[4]) begin //Z4_valid 0으로 설정하면서 READ 상태로 이동.
                    Z4_valid <= 0;
                end
                else begin //값 유지하면서 대기.
                    Z4_valid <= 1;
                end
            end
        endcase

        case(Z5_state[1:0])
            2'b00: begin //IDLE 상태
                if(PPU_start) begin //READ 상태로 이동. 레지스터 초기화.
                    Z5_valid <= 0;
                    Z5_RGB[17:0] <= 0;
                    Z5_is_trans <= 0;
                    Z5_a <= 0;
                end
            end
            2'b01: begin //READ 상태
                if(z_input_valid[5]) begin //이떄 다음 state로 넘어감.
                    Z5_RGB[17:0] <= z_input_RGB[5][17:0];
                    Z5_is_trans <= z_input_is_trans[5];
                    Z5_a <= z_input_a[5];
                    Z5_valid <= 1;
                end
            end
            2'b10: begin
                if(Z5_ready && z_input_valid[5]) begin //새로운 픽셀값 넣고 Z5_valid를 1로 설정하고 같은 state에서 대기.
                    Z5_RGB[17:0] <= z_input_RGB[5][17:0];
                    Z5_is_trans <= z_input_is_trans[5];
                    Z5_a <= z_input_a[5];
                    Z5_valid <= 1;
                end
                else if(Z5_ready && !z_input_valid[5]) begin //Z5_valid 0으로 설정하면서 READ 상태로 이동.
                    Z5_valid <= 0;
                end
                else begin //값 유지하면서 대기.
                    Z5_valid <= 1;
                end
            end
        endcase

        case(Z6_state[1:0])
            2'b00: begin //IDLE 상태
                if(PPU_start) begin //READ 상태로 이동. 레지스터 초기화.
                    Z6_valid <= 0;
                    Z6_RGB[17:0] <= 0;
                    Z6_is_trans <= 0;
                    Z6_a <= 0;
                end
            end
            2'b01: begin //READ 상태
                if(z_input_valid[6]) begin //이떄 다음 state로 넘어감.
                    Z6_RGB[17:0] <= z_input_RGB[6][17:0];
                    Z6_is_trans <= z_input_is_trans[6];
                    Z6_a <= z_input_a[6];
                    Z6_valid <= 1;
                end
            end
            2'b10: begin
                if(Z6_ready && z_input_valid[6]) begin //새로운 픽셀값 넣고 Z6_valid를 1로 설정하고 같은 state에서 대기.
                    Z6_RGB[17:0] <= z_input_RGB[6][17:0];
                    Z6_is_trans <= z_input_is_trans[6];
                    Z6_a <= z_input_a[6];
                    Z6_valid <= 1;
                end
                else if(Z6_ready && !z_input_valid[6]) begin //Z6_valid 0으로 설정하면서 READ 상태로 이동.
                    Z6_valid <= 0;
                end
                else begin //값 유지하면서 대기.
                    Z6_valid <= 1;
                end
            end
        endcase

        case(Z7_state[1:0])
            2'b00: begin //IDLE 상태
                if(PPU_start) begin //READ 상태로 이동. 레지스터 초기화.
                    Z7_valid <= 0;
                    Z7_RGB[17:0] <= 0;
                    Z7_is_trans <= 0;
                    Z7_a <= 0;
                end
            end
            2'b01: begin //READ 상태
                if(z_input_valid[7]) begin //이떄 다음 state로 넘어감.
                    Z7_RGB[17:0] <= z_input_RGB[7][17:0];
                    Z7_is_trans <= z_input_is_trans[7];
                    Z7_a <= z_input_a[7];
                    Z7_valid <= 1;
                end
            end
            2'b10: begin
                if(Z7_ready && z_input_valid[7]) begin //새로운 픽셀값 넣고 Z7_valid를 1로 설정하고 같은 state에서 대기.
                    Z7_RGB[17:0] <= z_input_RGB[7][17:0];
                    Z7_is_trans <= z_input_is_trans[7];
                    Z7_a <= z_input_a[7];
                    Z7_valid <= 1;
                end
                else if(Z7_ready && !z_input_valid[7]) begin //Z7_valid 0으로 설정하면서 READ 상태로 이동.
                    Z7_valid <= 0;
                end
                else begin //값 유지하면서 대기.
                    Z7_valid <= 1;
                end
            end
        endcase

        case(Z8_state[1:0])
            2'b00: begin //IDLE 상태
                if(PPU_start) begin //READ 상태로 이동. 레지스터 초기화.
                    Z8_valid <= 0;
                    Z8_RGB[17:0] <= 0;
                    Z8_is_trans <= 0;
                    Z8_a <= 0;
                end
            end
            2'b01: begin //READ 상태
                if(z_input_valid[8]) begin //이떄 다음 state로 넘어감.
                    Z8_RGB[17:0] <= z_input_RGB[8][17:0];
                    Z8_is_trans <= z_input_is_trans[8];
                    Z8_a <= z_input_a[8];
                    Z8_valid <= 1;
                end
            end
            2'b10: begin
                if(Z8_ready && z_input_valid[8]) begin //새로운 픽셀값 넣고 Z8_valid를 1로 설정하고 같은 state에서 대기.
                    Z8_RGB[17:0] <= z_input_RGB[8][17:0];
                    Z8_is_trans <= z_input_is_trans[8];
                    Z8_a <= z_input_a[8];
                    Z8_valid <= 1;
                end
                else if(Z8_ready && !z_input_valid[8]) begin //Z8_valid 0으로 설정하면서 READ 상태로 이동.
                    Z8_valid <= 0;
                end
                else begin //값 유지하면서 대기.
                    Z8_valid <= 1;
                end
            end
        endcase

        case(Z9_state[1:0])
            2'b00: begin //IDLE 상태
                if(PPU_start) begin //READ 상태로 이동. 레지스터 초기화.
                    Z9_valid <= 0;
                    Z9_RGB[17:0] <= 0;
                    Z9_is_trans <= 0;
                    Z9_a <= 0;
                end
            end
            2'b01: begin //READ 상태
                if(z_input_valid[9]) begin //이떄 다음 state로 넘어감.
                    Z9_RGB[17:0] <= z_input_RGB[9][17:0];
                    Z9_is_trans <= z_input_is_trans[9];
                    Z9_a <= z_input_a[9];
                    Z9_valid <= 1;
                end
            end
            2'b10: begin
                if(Z9_ready && z_input_valid[9]) begin //새로운 픽셀값 넣고 Z9_valid를 1로 설정하고 같은 state에서 대기.
                    Z9_RGB[17:0] <= z_input_RGB[9][17:0];
                    Z9_is_trans <= z_input_is_trans[9];
                    Z9_a <= z_input_a[9];
                    Z9_valid <= 1;
                end
                else if(Z9_ready && !z_input_valid[9]) begin //Z9_valid 0으로 설정하면서 READ 상태로 이동.
                    Z9_valid <= 0;
                end
                else begin //값 유지하면서 대기.
                    Z9_valid <= 1;
                end
            end
        endcase

        case(Z10_state[1:0])
            2'b00: begin //IDLE 상태
                if(PPU_start) begin //READ 상태로 이동. 레지스터 초기화.
                    Z10_valid <= 0;
                    Z10_RGB[17:0] <= 0;
                    Z10_is_trans <= 0;
                    Z10_a <= 0;
                end
            end
            2'b01: begin //READ 상태
                if(z_input_valid[10]) begin //이떄 다음 state로 넘어감.
                    Z10_RGB[17:0] <= z_input_RGB[10][17:0];
                    Z10_is_trans <= z_input_is_trans[10];
                    Z10_a <= z_input_a[10];
                    Z10_valid <= 1;
                end
            end
            2'b10: begin
                if(Z10_ready && z_input_valid[10]) begin //새로운 픽셀값 넣고 Z10_valid를 1로 설정하고 같은 state에서 대기.
                    Z10_RGB[17:0] <= z_input_RGB[10][17:0];
                    Z10_is_trans <= z_input_is_trans[10];
                    Z10_a <= z_input_a[10];
                    Z10_valid <= 1;
                end
                else if(Z10_ready && !z_input_valid[10]) begin //Z10_valid 0으로 설정하면서 READ 상태로 이동.
                    Z10_valid <= 0;
                end
                else begin //값 유지하면서 대기.
                    Z10_valid <= 1;
                end
            end
        endcase
    end
end


endmodule