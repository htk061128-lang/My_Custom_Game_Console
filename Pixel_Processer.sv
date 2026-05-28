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
reg [17:0] Z1_RGB; //우선순위 1인 레이어의 RGB값을 저장하는 레지스터.
reg Z1_is_trans; //우선순위 1인 레이어의 투명도 여부를 저장하는 레지스터.
reg Z1_a; //우선순위 1인 레이어의 알파값을 저장하는 레지스터. 여기 a값은 무시됨.
reg Z1_valid; //Pixel_Reader 에서 값을 읽어서 여기에 저장할때 1로 설정.
reg Z1_ready; //파이프라인 레지스터에 값을 넘겨줄때 1로 설정해주어서 다음 픽셀을 저장을 시작하게 할 예정.

reg [17:0] Z2_RGB; //우선순위 2인 레이어의 RGB값을 저장하는 레지스터.
reg Z2_is_trans; //우선순위 2인 레이어의 투명도 여부를 저장하는 레지스터.
reg Z2_a; //우선순위 2인 레이어의 알파값을 저장하는 레지스터.
reg Z2_valid; 
reg Z2_ready;

reg [17:0] Z3_RGB; //우선순위 3인 레이어의 RGB값을 저장하는 레지스터.
reg Z3_is_trans; //우선순위 3인 레이어의 투명도 여부를 저장하는 레지스터.
reg Z3_a; //우선순위 3인 레이어의 알파값을 저장하는 레지스터.
reg Z3_valid; //우선순위 3인 레이어의 유효성 여부를 저장하는 레지스터.
reg Z3_ready; 

reg [17:0] Z4_RGB; //우선순위 4인 레이어의 RGB값을 저장하는 레지스터.
reg Z4_is_trans; //우선순위 4인 레이어의 투명도 여부를 저장하는 레지스터.
reg Z4_a; //우선순위 4인 레이어의 알파값을 저장하는 레지스터.
reg Z4_valid; 
reg Z4_ready;

reg [17:0] Z5_RGB; //우선순위 5인 레이어의 RGB값을 저장하는 레지스터.
reg Z5_is_trans; //우선순위 5인 레이어의 투명도 여부를 저장하는 레지스터.
reg Z5_a; //우선순위 5인 레이어의 알파값을 저장하는 레지스터.
reg Z5_valid; 
reg Z5_ready;

reg [17:0] Z6_RGB; //우선순위 6인 레이어의 RGB값을 저장하는 레지스터.
reg Z6_is_trans; //우선순위 6인 레이어의 투명도 여부를 저장하는 레지스터.
reg Z6_a; //우선순위 6인 레이어의 알파값을 저장하는 레지스터.
reg Z6_valid; 
reg Z6_ready;

reg [17:0] Z7_RGB; //우선순위 7인 레이어의 RGB값을 저장하는 레지스터.
reg Z7_is_trans; //우선순위 7인 레이어의 투명도 여부를 저장하는 레지스터.
reg Z7_a; //우선순위 7인 레이어의 알파값을 저장하는 레지스터.
reg Z7_valid; 
reg Z7_ready;

reg [17:0] Z8_RGB; //우선순위 8인 레이어의 RGB값을 저장하는 레지스터.
reg Z8_is_trans; //우선순위 8인 레이어의 투명도 여부를 저장하는 레지스터.
reg Z8_a; //우선순위 8인 레이어의 알파값을 저장하는 레지스터.
reg Z8_valid;
reg Z8_ready;

reg [17:0] Z9_RGB; //우선순위 9인 레이어의 RGB값을 저장하는 레지스터.
reg Z9_is_trans; //우선순위 9인 레이어의 투명도 여부를 저장하는 레지스터.
reg Z9_a; //우선순위 9인 레이어의 알파값을 저장하는 레지스터.
reg Z9_valid; 
reg Z9_ready;

reg [17:0] Z10_RGB; //우선순위 10인 레이어의 RGB값을 저장하는 레지스터.
reg Z10_is_trans; //우선순위 10인 레이어의 투명도 여부를 저장하는 레지스터.
reg Z10_a; //우선순위 10인 레이어의 알파값을 저장하는 레지스터.
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


reg [1:0] Z1_state;
reg [1:0] Z2_state;
reg [1:0] Z3_state;
reg [1:0] Z4_state;
reg [1:0] Z5_state;
reg [1:0] Z6_state;
reg [1:0] Z7_state;
reg [1:0] Z8_state;
reg [1:0] Z9_state;
reg [1:0] Z10_state;

always @(*) begin
    
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
    end
end


endmodule