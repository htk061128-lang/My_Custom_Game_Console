module Pixel_Processer( //10개 레이어를 알파블랜딩, 합성해서 최종 픽셀을 산출함. 이후 Font_Processer 와 추가적으로 합성하고 페이드연산을 해서 마무리 함.
    input clk,
    input resetn,

    input [1:0] Clk_Counter, //0 - 1 - 2 - 3 - 0 - 1을 반복 함. Decompresser.sv 모듈과 동기화 되어있음.

    input PPU_start, // 0 -> 1 으로 변하면 연산이 시작됨. 

    input [15:0] Background1_SCX, //400 * 320 크기의 배경레이어 속에 320 * 240 크기의 화면만 표시되므로  0-80까지의 값을 가짐.
    input [15:0] Background1_SCY, // 0-80까지의 값을 가짐. 그 이상의 값은 사용되지 않음.
    input [7:0] Background1_a, //알파블랜딩 알파값. 0-16까지의 값을 가짐. 17이상의 값은 사용되지 않음.
    input [7:0] Background1_z, //우선순위를 나타내는 값으로 1 ~ 10까지의 값을 가짐. 작을수록 먼져 겹쳐지고 클 수록 나중에 겹쳐짐. 만약 0으로 설정되면 그 레이어는 사용되지 않는다는 것을 나타냄.

    input [15:0] Background2_SCX,
    input [15:0] Background2_SCY,
    input [7:0] Background2_a,
    input [7:0] Background2_z,

    input [15:0] Character1_WX, //320 * 240 화면속에 맨 위 왼쪽 픽셀의 위치의 x좌표를 나타내고 -320 ~ 320 까지의 값을 가짐. signed 값으로 해석해야 함!!
    input [15:0] Character1_WY, //320 * 240 화면속에 맨 위 왼쪽 픽셀의 위치의 y좌표를 나타내고 -240 ~ 240 까지의 값을 가짐. signed 값으로 해석해야 함!!
    input [7:0] Character1_a,
    input [7:0] Character1_z,

    input Background1_decomp_fifo_r_master,
    input Background1_decomp_fifo_empty,
    input [63:0] Background1_decomp_fifo_data,
    output Background1_decomp_fifo_dequeue, //r_master가 1일때 dequeue신호를 보내면 클럭에지때 decomp_fifo_data[63:0] 값이 나옴.

);
endmodule