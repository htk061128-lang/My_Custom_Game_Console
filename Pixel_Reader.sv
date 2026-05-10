module Pixel_Reader( //Decompressed FIFO에서 값을 읽어서 RGB_Converter로부터 RGB값으로 변환한 후 Pixel_Processer에게 전달함. 이 모듈을 10개 복사해서 사용할 예정임.
    input clk,
    input resetn,

    input [1:0] Clk_Counter, //0 - 1 - 2 - 3 - 0 - 1을 반복 함. Decompresser.sv 모듈과 동기화 되어있음.
    input PPU_start,

    //
    input is_background, //Background1, 2 레이어는 SCX, SCY를 사용하고 나머지 Character, Status, Script, Universal 레이어들은 WX, WY를 사용하기 때문에 구분을 위해 이 신호를 만들었음.
    input is_character, //이 신호가 1이면 레이어 크기는 160 * 240임.
    input is_status, //이 신호가 1이면 레이어 크기는 160 * 240임.
    input is_script, //이 신호가 1이면 레이어 크기는 320 * 120임.
    input is_universal, //이 신호가 1이면 레이어 크기는 320 * 240임.

    input [15:0] WX, //320 * 240 화면속에 맨 위 왼쪽 픽셀의 위치의 x좌표를 나타내고 -320 ~ 320 까지의 값을 가짐. signed 값으로 해석해야 함!!
    input [15:0] WY, ////320 * 240 화면속에 맨 위 왼쪽 픽셀의 위치의 y좌표를 나타내고 -240 ~ 240 까지의 값을 가짐. signed 값으로 해석해야 함!!
    input [15:0] SCX, //400 * 320 크기의 배경레이어 속에 320 * 240 크기의 화면만 표시되므로  0-80까지의 값을 가짐.
    input [15:0] SCY,

    //Pixel_Processer과 상호작용하기 위한 인터페이스
    output Pixel_valid, //Pixel_RGB와 Pixel_valid 신호를 주고 ready를 받으면 전달이 완료된 것임. ready를 받을때마다 내부에 카운터를 증가시키고 레이어 외부 위치라면 Pixel_is_trans와 valid를 계속 주면 됨.
    output [17:0] Pixel_RGB,
    output Pixel_is_trans,  //이 신호가 1이면 해당 픽셀은 투명이라는 소리임. 따라서 Pixel_RGB 값은 Pixel_Processer에서 무시됨.
    input Pixel_ready,

    //Decompressed FIFO에서 값을 읽기위한 인터페이스.
    input Background1_decomp_fifo_r_master,
    input Background1_decomp_fifo_empty,
    input [63:0] Background1_decomp_fifo_data,
    output Background1_decomp_fifo_dequeue, //r_master가 1일때 dequeue신호를 보내면 클럭에지때 decomp_fifo_data[63:0] 값이 나옴.

    //RGB_Converter에서 값을 읽기위한 인터페이스.
    output Lookup_ena, //ena신호와 pixel값을 주면 end신호와 RGB가 올때까지 대기하고 나온값을 바로 플립플롭에 저장해주면 됨.
    output [7:0] Lookup_pixel,
    input Lookup_end,
    input [17:0] Lookup_RGB
);
reg [63:0] decomp_pixel_reg;
reg [17:0] RGB_reg;

reg [3:0] main_state;
parameter IDLE = 0, START = 1, WAIT = 2;

//일단 WX, WY부터 생각해보자. display_x(0~319), display_y(0~239), layer_x, layer_y로 정리함.

// ||레이어크기 320 * 240 일때 (Universal1, 2)||
// WY == -240 : 화면에 전혀 나오지 않음. 
// -240 < WY < 0 : layer_y = (-WY) ~ 239, display_y = layer_y + WY
// WY = 0 : layer_y = 0 ~ 239, display_y = layer_y,
// 0 < WY < 240 : layer_y = 0 ~ (239 - WY), display_y = layer_y + WY
// WY == 240 : 화면에 전혀 나오지 않음. 

// WX == -320 : 화면에 전혀 나오지않음.
// -320 < WX < 0 : layer_x = (-WX) ~ 319, display_x = layer_x + WX
// WX == 0 : layer_x = 0 ~ 319, display_x = layer_x
// 0 < WX < 320 : layer_x = 0 ~ (319 _ WX), display_x = layer_x + WX
// WX == 320 : 화면에 전혀 나오지 않음.


// ||레이어크기 160 * 240 일때(Character1, 2, 3, 4, Status)||
// WY == -240 : 화면에 전혀 나오지 않음. 
// -240 < WY < 0 : layer_y = (-WY) ~ 239, display_y = layer_y + WY
// WY = 0 : layer_y = 0 ~ 239, display_y = layer_y,
// 0 < WY < 240 : layer_y = 0 ~ (239 - WY), display_y = layer_y + WY
// WY == 240 : 화면에 전혀 나오지 않음. 

// WX <= -160 : 화면에 전혀 나오지 않음.
// -159 <= WX <= -1 : layer_x = (-WX) ~ 159, display_x = layer_x + WX
// 0 <= WX <= 160 : layer_x = 0 ~ 159, display_x = layer_x + WX
// 161 <= WX <= 319 : layer_x = 0 ~ (319 - WX), display_x = layer_x + WX
// WX == 320 : 화면에 전혀 나오지 않음.


// ||레이어크기 320 * 120 일때(Script)||
// WY <= -120 : 화면에 전혀 나오지 않음.
// -119 <= WY <= -1 : layer_y = (-WY) ~ 119, display_y = layer_y + WY
// 0 <= WY <= 120 : layer_y = 0 ~ 119, display_y = layer_y + WY
// 121 <= WY <= 239 : layer_y = 0 ~ (239 - WY), display_y = layer_y + WY
// WY == 240 : 화면에 전혀 나오지 않음. 

// WX == -320 : 화면에 전혀 나오지않음.
// -320 < WX < 0 : layer_x = (-WX) ~ 319, display_x = layer_x + WX
// WX == 0 : layer_x = 0 ~ 319, display_x = layer_x
// 0 < WX < 320 : layer_x = 0 ~ (319 _ WX), display_x = layer_x + WX
// WX == 320 : 화면에 전혀 나오지 않음.


//SCX, SCY 정리 (각각 0 ~ 80) 레이어 크기는 400 * 320
//0 <= SCY <= 80 : layer_y = SCY ~ (SCY + 239), display_x = layer_y - SCY 
//0 <= SCX <= 80 : layer_x = SCX ~ (SCX + 319), display_x = layer_x - SCX

always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        decomp_pixel_reg[63:0] <= 0;
        RGB_reg[17:0] <= 0;
    end
    else begin
    end
end

endmodule