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
    input Decomp_fifo_r_master,
    input Decomp_fifo_empty,
    input [63:0] Decomp_fifo_data,
    output Decomp_fifo_dequeue, //r_master가 1일때 dequeue신호를 보내면 클럭에지때 decomp_fifo_data[63:0] 값이 나옴.

    //RGB_Converter에서 값을 읽기위한 인터페이스.
    output Lookup_ena, //ena신호와 pixel값을 주면 end신호와 RGB가 올때까지 대기하고 나온값을 바로 플립플롭에 저장해주면 됨.
    output [7:0] Lookup_pixel,
    input Lookup_end,
    input [17:0] Lookup_RGB
);
reg [63:0] decomp_pixel_reg;
reg [17:0] RGB_reg; 
reg RGB_reg_w_ena;
reg RGB_reg_valid;
reg RGB_reg_ready;

reg [8:0] personal_counter_x; //Pixel_Processer에게 값을 주고 ready를 받을때마다 1씩 증가함. 증가하면서 318 - 319 - 0으로 가면서 personal_counter_y가 1 증가함.
reg [8:0] personal_counter_y;

reg [3:0] main_state;
parameter IDLE = 0, BG_START = 1, NO_BG_START = 2, START = 3;

reg [3:0] fifo_r_state;
reg [3:0] fifo_r_state_next;
reg [3:0] fifo_r_state_counter;
reg [3:0] fifo_r_state_counter_next;

reg [7:0] valid_pixel_check; //Decompressed FIFO에서 읽어온 64비트 8개의 픽셀중 실제 화면에 나타나는 유효한 픽셀을 표시함.
reg [5:0] read_pixel_x; //BG인 경우에는 0 ~ 49, 아닌 경우에는 0 - 39. ****꼭 63으로 초기화 해야 함!!!****
reg [8:0] read_pixel_y; ////BG인 경우에는 0 ~ 319, 아닌 경우에는 0 - 239. ****꼭 511으로 초기화 해야 함!!!****

reg [3:0] rgb_r_state;
reg [3:0] rgb_r_state_next;
reg [3:0] rgb_r_state_counter;
reg [3:0] rgb_r_state_counter_next;

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

reg rgb_convert_req; //fifo_r_state가 rgb_r_state에게 보내는 요청하는 신호.
reg rgb_convert_end; //rgb_r_state가 fifo_r_state에게 보내는 답변신호.


always @(*) begin
    Decomp_fifo_dequeue = 0;
    fifo_r_state_counter_next = fifo_r_state_counter; //매 클럭 fifo_r_state_counter가 next로 갱신되므로 이 문장이 꼭 필요함.
    fifo_r_state_next = fifo_r_state;
    valid_pixel_check[7:0] = 0;
    rgb_convert_req = 0;

    if(is_background) begin //SCX, SCY (0 ~ 80)
        if((read_pixel_y[8:0] >= SCY[8:0]) && (read_pixel_y[8:0] <= SCY[8:0] + 239)) begin
            valid_pixel_check[0] = ({read_pixel_x, 3'b000} >= SCX[8:0]) && ({read_pixel_x, 3'b000} <= SCX[8:0] + 319); //SCX는 0 ~ 80까지의 값이기 때문에 319를 더해도 9비트 안에 충분히 들어감.
            valid_pixel_check[1] = ({read_pixel_x, 3'b001} >= SCX[8:0]) && ({read_pixel_x, 3'b001} <= SCX[8:0] + 319);
            valid_pixel_check[2] = ({read_pixel_x, 3'b010} >= SCX[8:0]) && ({read_pixel_x, 3'b010} <= SCX[8:0] + 319);
            valid_pixel_check[3] = ({read_pixel_x, 3'b011} >= SCX[8:0]) && ({read_pixel_x, 3'b011} <= SCX[8:0] + 319);
            valid_pixel_check[4] = ({read_pixel_x, 3'b100} >= SCX[8:0]) && ({read_pixel_x, 3'b100} <= SCX[8:0] + 319);
            valid_pixel_check[5] = ({read_pixel_x, 3'b101} >= SCX[8:0]) && ({read_pixel_x, 3'b101} <= SCX[8:0] + 319);
            valid_pixel_check[6] = ({read_pixel_x, 3'b110} >= SCX[8:0]) && ({read_pixel_x, 3'b110} <= SCX[8:0] + 319);
            valid_pixel_check[7] = ({read_pixel_x, 3'b111} >= SCX[8:0]) && ({read_pixel_x, 3'b111} <= SCX[8:0] + 319);
        end
        else begin
            valid_pixel_check[7:0] = 8'b00000000;
        end
    end
    else begin //WX, WY (전부 signed로 해석해야 함!!!)
        case(1'b1)
            (is_character || is_status): begin //160 * 240
            end
            (is_script): begin //320 * 120
            end
            (is_universal): begin //320 * 240
            end
        endcase
    end

    case(fifo_r_state) 
        IDLE: begin
            fifo_r_state_counter_next = 0;
        end
        BG_START: begin //BG Layer일때는 굳이 처음부터 RGB변환을 할 필요가 없음. SCX, SCY값에 따라서 화면에 나오는 부분만 RGB변환이 필요함.
            case(fifo_r_state_counter)
                0: begin
                    if(Decomp_fifo_r_master && ~Decomp_fifo_empty) begin
                        Decomp_fifo_dequeue = 1;
                        fifo_r_state_counter_next = 1;
                        fifo_r_state_next = BG_START;
                    end
                    else begin
                        fifo_r_state_counter_next = 0;
                        fifo_r_state_next = BG_START;
                    end
                end
                1: begin //fifo_r_state_counter가 1 -> 2인 에지에서 read_pixel_x, read_pixel_y가 결정되고 decomp_pixel_reg[63:0]에 값이 저장됨.
                    fifo_r_state_counter_next = 2;
                    fifo_r_state_next = BG_START;
                end
                2: begin //
                    if(valid_pixel_check[7:0] == 8'b00000000) begin
                        fifo_r_state_counter_next = 0; //다시 Decompressed FIFO에서 값을 읽음.
                        fifo_r_state_next = BG_START;
                    end
                    else begin
                        rgb_convert_req = 1;
                        fifo_r_state_counter_next = 3;
                        fifo_r_state_next = BG_START;
                    end
                end
                3: begin
                    rgb_convert_req = 1; //rgb_r_state에게 end가 올때까지 요청신호를 유지함.
                    if(rgb_convert_end) begin
                        fifo_r_state_counter_next = 0; //Decompressed FIFO에서 새로운 값을 읽기를 시작함.
                        fifo_r_state_next = BG_START;
                    end
                    else begin //계속 현재상태 유지.
                        fifo_r_state_counter_next = 3;
                        fifo_r_state_next = BG_START;
                    end
                end
            endcase
        end
        NO_BG_START: begin //여기서도 WX, WY값에 따라서 화면에 나오는 부분만 RGB변환이 필요함. 그런데 그걸 계산하는 로직이 BG일때랑 아닐때가 다름.
        end
    endcase
end

always @(*) begin
    rgb_convert_end = 0;
    rgb_r_state_counter_next = rgb_r_state_counter;
    rgb_r_state_next = rgb_r_state;

    RGB_reg_w_ena = 0; //이 값이 1이면 클럭에지때 RGB_reg[17:0]에 Lookup_RGB[17:0]가 써짐.

    Lookup_ena = 0;
    Lookup_pixel[7:0] = 0;

    case(rgb_r_state) //rgb_r_state는 fifo_r_state에서 요청이 오면 그 픽셀을 RGB로 변환한 후 main_state에게 제공하고 제공이 끝나면 rgb_convert_end 신호를 fifo_r_state에게 보내서 다음 값을 읽게 유도함.
        IDLE: begin
        end
        START: begin
        end 
        READ: begin //rgb_convert_req 신호가 오면 이 state로 이동함.
            case(rgb_r_state_counter) //valid_pixel_check는 무조건 연속적임. 00001111, 11000000, 11111110 이런식임. 01010101이렇게는 나오지 않음.
                0: begin
                    if(valid_pixel_check[0] == 1) begin
                        Lookup_ena = 1;
                        Lookup_pixel[7:0] = decomp_pixel_reg[7:0];
                        if(Lookup_end) begin
                            RGB_reg_w_ena = 1; //RGB_reg에 값이 써지고 동시에 RGB_valid도 1이 저장됨.
                            rgb_r_state_counter_next = 1;
                            rgb_r_state_next = READ;
                        end
                        else begin
                            rgb_r_state_counter_next = 0;
                            rgb_r_state_next = READ;
                        end
                    end
                    else if(valid_pixel_check[1] == 1) begin
                        rgb_r_state_counter_next = 2;
                        rgb_r_state_next = READ;
                    end
                    else if(valid_pixel_check[2] == 1) begin
                        rgb_r_state_counter_next = 4;
                        rgb_r_state_next = READ;
                    end
                    else if(valid_pixel_check[3] == 1) begin
                        rgb_r_state_counter_next = 6;
                        rgb_r_state_next = READ;
                    end
                    else begin
                        rgb_r_state_counter_next = 8;
                        rgb_r_state_next = READ;
                    end
                end
                1: begin
                    if(RGB_reg_ready) begin
                        rgb_r_state_counter_next = 2;
                        rgb_r_state_next = READ;
                    end
                    else begin
                        rgb_r_state_counter_next = 1; //계속 대기
                        rgb_r_state_next = READ;
                    end
                end
                2: begin
                    if(valid_pixel_check[1] == 1) begin
                        Lookup_ena = 1;
                        Lookup_pixel[7:0] = decomp_pixel_reg[15:8];
                        if(Lookup_end) begin
                            RGB_reg_w_ena = 1; //RGB_reg에 값이 써지고 동시에 RGB_valid도 1이 저장됨.
                            rgb_r_state_counter_next = 3;
                            rgb_r_state_next = READ;
                        end
                        else begin
                            rgb_r_state_counter_next = 2;
                            rgb_r_state_next = READ;
                        end
                    end
                    else begin
                        rgb_r_state_counter_next = 0;
                        rgb_r_state_next = START;
                        rgb_convert_end = 1;
                    end
                end
                3: begin
                    if(RGB_reg_ready) begin
                        rgb_r_state_counter_next = 4;
                        rgb_r_state_next = READ;
                    end
                    else begin
                        rgb_r_state_counter_next = 3; //계속 대기
                        rgb_r_state_next = READ;
                    end
                end
                4: begin
                    if(valid_pixel_check[2] == 1) begin
                        Lookup_ena = 1;
                        Lookup_pixel[7:0] = decomp_pixel_reg[23:16];
                        if(Lookup_end) begin
                            RGB_reg_w_ena = 1; //RGB_reg에 값이 써지고 동시에 RGB_valid도 1이 저장됨.
                            rgb_r_state_counter_next = 5;
                            rgb_r_state_next = READ;
                        end
                        else begin
                            rgb_r_state_counter_next = 4;
                            rgb_r_state_next = READ;
                        end
                    end
                    else begin
                        rgb_r_state_counter_next = 0;
                        rgb_r_state_next = START;
                        rgb_convert_end = 1;
                    end
                end
                5: begin
                    if(RGB_reg_ready) begin
                        rgb_r_state_counter_next = 6;
                        rgb_r_state_next = READ;
                    end
                    else begin
                        rgb_r_state_counter_next = 5; //계속 대기
                        rgb_r_state_next = READ;
                    end
                end
                6: begin
                    if(valid_pixel_check[3] == 1) begin
                        Lookup_ena = 1;
                        Lookup_pixel[7:0] = decomp_pixel_reg[31:24];
                        if(Lookup_end) begin
                            RGB_reg_w_ena = 1; //RGB_reg에 값이 써지고 동시에 RGB_valid도 1이 저장됨.
                            rgb_r_state_counter_next = 7;
                            rgb_r_state_next = READ;
                        end
                        else begin
                            rgb_r_state_counter_next = 6;
                            rgb_r_state_next = READ;
                        end
                    end
                    else begin
                        rgb_r_state_counter_next = 0;
                        rgb_r_state_next = START;
                        rgb_convert_end = 1;
                    end
                end
                7: begin
                    if(RGB_reg_ready) begin
                        rgb_r_state_counter_next = 8;
                        rgb_r_state_next = READ;
                    end
                    else begin
                        rgb_r_state_counter_next = 7; //계속 대기
                        rgb_r_state_next = READ;
                    end
                end
                8: begin
                    if(valid_pixel_check[4] == 1) begin
                        Lookup_ena = 1;
                        Lookup_pixel[7:0] = decomp_pixel_reg[39:32];
                        if(Lookup_end) begin
                            RGB_reg_w_ena = 1; //RGB_reg에 값이 써지고 동시에 RGB_valid도 1이 저장됨.
                            rgb_r_state_counter_next = 9;
                            rgb_r_state_next = READ;
                        end
                        else begin
                            rgb_r_state_counter_next = 8;
                            rgb_r_state_next = READ;
                        end
                    end
                    else if(valid_pixel_check[5] == 1) begin
                        rgb_r_state_counter_next = 10;
                        rgb_r_state_next = READ;
                    end
                    else if(valid_pixel_check[6] == 1) begin
                        rgb_r_state_counter_next = 12;
                        rgb_r_state_next = READ;
                    end
                    else if(valid_pixel_check[7] == 1) begin
                        rgb_r_state_counter_next = 14;
                        rgb_r_state_next = READ;
                    end
                    else begin //valid_pixel_check가 8'b00000000인 경우는 애초에 fifo_r_state에서 rgb_convert_req를 주지를 않으므로 고려하지 않음.
                    end
                end
                9: begin
                    if(RGB_reg_ready) begin
                        rgb_r_state_counter_next = 10;
                        rgb_r_state_next = READ;
                    end
                    else begin
                        rgb_r_state_counter_next = 9; //계속 대기
                        rgb_r_state_next = READ;
                    end
                end
                10: begin
                    if(valid_pixel_check[5] == 1) begin
                        Lookup_ena = 1;
                        Lookup_pixel[7:0] = decomp_pixel_reg[47:40];
                        if(Lookup_end) begin
                            RGB_reg_w_ena = 1; //RGB_reg에 값이 써지고 동시에 RGB_valid도 1이 저장됨.
                            rgb_r_state_counter_next = 11;
                            rgb_r_state_next = READ;
                        end
                        else begin
                            rgb_r_state_counter_next = 10;
                            rgb_r_state_next = READ;
                        end
                    end
                    else begin
                        rgb_r_state_counter_next = 0;
                        rgb_r_state_next = START;
                        rgb_convert_end = 1;
                    end
                end
                11: begin
                    if(RGB_reg_ready) begin
                        rgb_r_state_counter_next = 12;
                        rgb_r_state_next = READ;
                    end
                    else begin
                        rgb_r_state_counter_next = 11; //계속 대기
                        rgb_r_state_next = READ;
                    end
                end
                12: begin
                    if(valid_pixel_check[6] == 1) begin
                        Lookup_ena = 1;
                        Lookup_pixel[7:0] = decomp_pixel_reg[55:48];
                        if(Lookup_end) begin
                            RGB_reg_w_ena = 1; //RGB_reg에 값이 써지고 동시에 RGB_valid도 1이 저장됨.
                            rgb_r_state_counter_next = 13;
                            rgb_r_state_next = READ;
                        end
                        else begin
                            rgb_r_state_counter_next = 12;
                            rgb_r_state_next = READ;
                        end
                    end
                    else begin
                        rgb_r_state_counter_next = 0;
                        rgb_r_state_next = START;
                        rgb_convert_end = 1;
                    end
                end
                13: begin
                    if(RGB_reg_ready) begin
                        rgb_r_state_counter_next = 14;
                        rgb_r_state_next = READ;
                    end
                    else begin
                        rgb_r_state_counter_next = 13; //계속 대기
                        rgb_r_state_next = READ;
                    end
                end
                14: begin
                    if(valid_pixel_check[7] == 1) begin
                        Lookup_ena = 1;
                        Lookup_pixel[7:0] = decomp_pixel_reg[63:56];
                        if(Lookup_end) begin
                            RGB_reg_w_ena = 1; //RGB_reg에 값이 써지고 동시에 RGB_valid도 1이 저장됨.
                            rgb_r_state_counter_next = 15;
                            rgb_r_state_next = READ;
                        end
                        else begin
                            rgb_r_state_counter_next = 14;
                            rgb_r_state_next = READ;
                        end
                    end
                    else begin
                        rgb_r_state_counter_next = 0;
                        rgb_r_state_next = START;
                        rgb_convert_end = 1;
                    end
                end
                15: begin
                    if(RGB_reg_ready) begin
                        rgb_r_state_counter_next = 0;
                        rgb_r_state_next = START;
                        rgb_convert_end = 1;
                    end
                    else begin
                        rgb_r_state_counter_next = 15; //계속 대기
                        rgb_r_state_next = READ;
                    end
                end
            endcase
        end
    endcase
end

always @(*) begin
    case(main_state) //main_state가 Pixel_Processer에게 RGB, valid를 보내고 ready를 받는 핸드쉐이크를 전담함.
        IDLE: begin
        end
        BG_START: begin

        end
        NO_BG_START: begin
        end
    endcase
end

always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        decomp_pixel_reg[63:0] <= 0;
        RGB_reg[17:0] <= 0;
        RGB_reg_valid <= 0;

        main_state[3:0] <= IDLE;
        fifo_r_state[3:0] <= IDLE;
        rgb_r_state[3:0] <= IDLE;

        rgb_r_state_counter[3:0] <= 0;

        fifo_r_state_counter[3:0] <= 0;
        read_pixel_x[5:0] <= 6'b111111; //63으로 초기화 해야 함!!!!
        read_pixel_y[8:0] <= 9'b111111111; //511으로 초기화 해야 함!!!

        personal_counter_x[8:0] <= 0;
        personal_counter_y[8:0] <= 0;
    end
    else begin
        fifo_r_state <= fifo_r_state_next;
        fifo_r_state_counter[3:0] <= fifo_r_state_counter_next[3:0];

        rgb_r_state_counter[3:0] <= rgb_r_state_counter_next[3:0];
        rgb_r_state <= rgb_r_state_next;

        if(RGB_reg_w_ena) begin
            RGB_reg[17:0] <= Lookup_RGB[17:0];
            RGB_reg_valid <= 1;
        end

        if(RGB_reg_ready) begin
            RGB_reg_valid <= 0;
        end

        case(main_state)
            IDLE: begin
                if(PPU_start) begin
                    if(is_background) main_state <= BG_START; //Background layer면 BG_START로 이동. 
                    else main_state <= NO_BG_START; //아니면 NO_BG_START로 이동.
                end
                else begin
                    main_state <= IDLE; //PPU_START가 1이 될때까지 현 상태 유지.
                end
            end
            BG_START: begin
            end
            NO_BG_START: begin
            end
        endcase

        case(fifo_r_state)
            IDLE: begin
                if(PPU_start) begin
                    if(is_background) fifo_r_state <= BG_START; //Background layer면 BG_START로 이동. 
                    else fifo_r_state <= NO_BG_START; //아니면 NO_BG_START로 이동.
                    read_pixel_x[5:0] <= 63; //사용되는 레지스터들 초기화.
                    read_pixel_y[8:0] <= 511;
                    fifo_r_state_counter[3:0] <= 0;
                end
                else begin
                    fifo_r_state <= IDLE; //PPU_START가 1이 될때까지 현 상태 유지.
                end
            end
            BG_START: begin
                case(fifo_r_state_counter)
                    0: begin
                    end
                    1: begin //fifo_r_state_counter가 0 -> 1로가는 에지에서 Decomp_fifo_data[63:0]가 나옴.
                        decomp_pixel_reg[63:0] <= Decomp_fifo_data[63:0]; //decomp_pixel_reg[63:0]에 읽은 값 저장.
                        if(read_pixel_x[5:0] == 49) begin //read_pixel_x, read_pixel_y 설정.
                            read_pixel_x[5:0] <= 0;
                            read_pixel_y[8:0] <= read_pixel_y[8:0] + 1; 
                        end
                        else if(read_pixel_x[5:0] == 63 && read_pixel_y[8:0] == 511) begin //read_pixel_x, read_pixel_y의 초기값은 사용되지 않는 각각 63, 511로 설정되어 있음. 주의!!
                            read_pixel_x[5:0] <= 0;
                            read_pixel_y[8:0] <= 0;
                        end
                        else begin
                            read_pixel_x[5:0] <= read_pixel_x[5:0] + 1;
                        end
                    end
                    2: begin
                    end
                    3: begin
                    end
                endcase
            end
            NO_BG_START: begin
            end
        endcase

        case(rgb_r_state)
            IDLE: begin
                if(PPU_start) begin
                    rgb_r_state <= START;
                    rgb_r_state_counter[3:0] <= 0;
                end
                else begin
                    rgb_r_state <= IDLE;
                end
            end
            START: begin
                if(rgb_convert_req) begin
                    rgb_r_state <= READ;
                    rgb_r_state_counter[3:0] <= 0;
                end
                else begin
                    rgb_r_state <= START; //현상유지
                end
            end
            READ: begin
            end
        endcase

    end
end

endmodule