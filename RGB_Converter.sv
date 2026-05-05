module RGB_Converter(
    input clk, 
    input resetn, //negedge resetn

    input [1:0] Clk_Counter, //Decompresser, Compressed_Data_FIFO 모듈과 연동되는 동일한 2비트짜리 클럭 카운터.

    input PPU_start,

    //256 * 18 bit, 쓰기포트 1개, 읽기포트 2개인 Distribute RAM 인터페이스. 비동기 메모리이므로 주소를 주면 즉시 데이터가 나옴.
    // [포트 A] 쓰기 전용 포트 (Write Port) //쓰기 포트는 CPU가 사용할 수 있게 해야하고 여기서는 사용하지는 않지만 일단 적어둠.
    output  wire        LUT_we,         // 쓰기 활성화 (Write Enable)
    output  wire [7:0]  LUT_addr_w,     // 쓰기 주소 (256깊이 = 8bit)
    output  wire [17:0] LUT_data_in,    // 쓸 데이터 (18bit 픽셀 데이터)

    // [포트 B] 읽기 전용 포트 1 (Read Port 1)
    output  wire [7:0]  LUT_addr_r1,    // 읽기 주소 1
    input wire [17:0] LUT_data_out1,  // 읽어온 데이터 1 (조합 논리 즉시 출력)

    // [포트 C] 읽기 전용 포트 2 (Read Port 2)
    output  wire [7:0]  LUT_addr_r2,    // 읽기 주소 2
    input wire [17:0] LUT_data_out2   // 읽어온 데이터 2 (조합 논리 즉시 출력)

    //10개의 레이어, 스트라이트기능 포함한다고 가정해서 최대 12개의 요청이 들어온다고 가정함. 읽은 RGB값을 플립플롭에 한번 저장한다음에 사용할 예정. 조합회로 너무 길어지는것 예방.
    input Req1_ena, //이 신호와 pixel값을 보내고 대기하면 end와 RGB값이 들어옴.
    input [7:0] Req1_pixel,
    output [17:0] Req1_RGB,
    output Req1_end,

    input Req2_ena,
    input [7:0] Req2_pixel,
    output [17:0] Req2_RGB,
    output Req2_end,

    input Req3_ena,
    input [7:0] Req3_pixel,
    output [17:0] Req3_RGB,
    output Req3_end,

    input Req4_ena,
    input [7:0] Req4_pixel,
    output [17:0] Req4_RGB,
    output Req4_end,

    input Req5_ena,
    input [7:0] Req5_pixel,
    output [17:0] Req5_RGB,
    output Req5_end,

    input Req6_ena,
    input [7:0] Req6_pixel,
    output [17:0] Req6_RGB,
    output Req6_end,

    input Req7_ena,
    input [7:0] Req7_pixel,
    output [17:0] Req7_RGB,
    output Req7_end,

    input Req8_ena,
    input [7:0] Req8_pixel,
    output [17:0] Req8_RGB,
    output Req8_end,

    input Req9_ena,
    input [7:0] Req9_pixel,
    output [17:0] Req9_RGB,
    output Req9_end,

    input Req10_ena,
    input [7:0] Req10_pixel,
    output [17:0] Req10_RGB,
    output Req10_end,

    input Req11_ena,
    input [7:0] Req11_pixel,
    output [17:0] Req11_RGB,
    output Req11_end,

    input Req12_ena,
    input [7:0] Req12_pixel,
    output [17:0] Req12_RGB,
    output Req12_end
);
reg [7:0] cache1_pixel; //여기있는 4개의 캐시값과 Req_pixel이 일치하면 Distribute Ram에 접근없이 RGB값을 줌.
reg [17:0] cache1_RGB;
reg cache1_valid;
reg [7:0] cache2_pixel;
reg [17:0] cache2_RGB;
reg cache2_valid;
reg [7:0] cache3_pixel;
reg [17:0] cache3_RGB;
reg cache3_valid;
reg [7:0] cache4_pixel;
reg [17:0] cache4_RGB;
reg cache4_valid;

reg [7:0] req1_exclusive_pixel; //Request 1 전용 독점 캐시. 위의 4개의 캐시들을 범용임.
reg [17:0] req1_exclusive_RGB;
reg req1_exclusive_valid;

reg [7:0] req2_exclusive_pixel; //Request 2 전용 독점 캐시. 위의 4개의 캐시들을 범용임.
reg [17:0] req2_exclusive_RGB;
reg req2_exclusive_valid;

reg [7:0] req3_exclusive_pixel; //Request 3 전용 독점 캐시. 위의 4개의 캐시들을 범용임.
reg [17:0] req3_exclusive_RGB;
reg req3_exclusive_valid;

reg [7:0] req4_exclusive_pixel; //Request 4 전용 독점 캐시. 위의 4개의 캐시들을 범용임.
reg [17:0] req4_exclusive_RGB;
reg req4_exclusive_valid;

reg [7:0] req5_exclusive_pixel; //Request 5 전용 독점 캐시. 위의 4개의 캐시들을 범용임.
reg [17:0] req5_exclusive_RGB;
reg req5_exclusive_valid;

reg [7:0] req6_exclusive_pixel; //Request 6 전용 독점 캐시. 위의 4개의 캐시들을 범용임.
reg [17:0] req6_exclusive_RGB;
reg req6_exclusive_valid;

reg [7:0] req7_exclusive_pixel; //Request 7 전용 독점 캐시. 위의 4개의 캐시들을 범용임.
reg [17:0] req7_exclusive_RGB;
reg req7_exclusive_valid;

reg [7:0] req8_exclusive_pixel; //Request 8 전용 독점 캐시. 위의 4개의 캐시들을 범용임.
reg [17:0] req8_exclusive_RGB;
reg req8_exclusive_valid;

reg [7:0] req9_exclusive_pixel; //Request 9 전용 독점 캐시. 위의 4개의 캐시들을 범용임.
reg [17:0] req9_exclusive_RGB;
reg req9_exclusive_valid;

reg [7:0] req10_exclusive_pixel; //Request 10 전용 독점 캐시. 위의 4개의 캐시들을 범용임.
reg [17:0] req10_exclusive_RGB;
reg req10_exclusive_valid;

reg [7:0] req11_exclusive_pixel; //Request 11 전용 독점 캐시. 위의 4개의 캐시들을 범용임.
reg [17:0] req11_exclusive_RGB;
reg req11_exclusive_valid;

reg [7:0] req12_exclusive_pixel; //Request 12 전용 독점 캐시. 위의 4개의 캐시들을 범용임.
reg [17:0] req12_exclusive_RGB;
reg req12_exclusive_valid;

wire req1_exclusive_hit = Req1_ena && (Req1_pixel[7:0] == req1_exclusive_pixel[7:0]) && req1_exclusive_valid;
wire req2_exclusive_hit = Req2_ena && (Req2_pixel[7:0] == req2_exclusive_pixel[7:0]) && req2_exclusive_valid;
wire req3_exclusive_hit = Req3_ena && (Req3_pixel[7:0] == req3_exclusive_pixel[7:0]) && req3_exclusive_valid;
wire req4_exclusive_hit = Req4_ena && (Req4_pixel[7:0] == req4_exclusive_pixel[7:0]) && req4_exclusive_valid;
wire req5_exclusive_hit = Req5_ena && (Req5_pixel[7:0] == req5_exclusive_pixel[7:0]) && req5_exclusive_valid;
wire req6_exclusive_hit = Req6_ena && (Req6_pixel[7:0] == req6_exclusive_pixel[7:0]) && req6_exclusive_valid;
wire req7_exclusive_hit = Req7_ena && (Req7_pixel[7:0] == req7_exclusive_pixel[7:0]) && req7_exclusive_valid;
wire req8_exclusive_hit = Req8_ena && (Req8_pixel[7:0] == req8_exclusive_pixel[7:0]) && req8_exclusive_valid;
wire req9_exclusive_hit = Req9_ena && (Req9_pixel[7:0] == req9_exclusive_pixel[7:0]) && req9_exclusive_valid;
wire req10_exclusive_hit = Req10_ena && (Req10_pixel[7:0] == req10_exclusive_pixel[7:0]) && req10_exclusive_valid;
wire req11_exclusive_hit = Req11_ena && (Req11_pixel[7:0] == req11_exclusive_pixel[7:0]) && req11_exclusive_valid;
wire req12_exclusive_hit = Req12_ena && (Req12_pixel[7:0] == req12_exclusive_pixel[7:0]) && req12_exclusive_valid;

wire req1_hit1 = Req1_ena && (Req1_pixel[7:0] == cache1_pixel[7:0]) && cache1_valid; //cache1 hit
wire req1_hit2 = Req1_ena && (Req1_pixel[7:0] == cache2_pixel[7:0]) && cache2_valid; //cache2 hit
wire req1_hit3 = Req1_ena && (Req1_pixel[7:0] == cache3_pixel[7:0]) && cache3_valid; //cache3 hit
wire req1_hit4 = Req1_ena && (Req1_pixel[7:0] == cache4_pixel[7:0]) && cache4_valid; //cache4 hit

wire req2_hit1 = Req2_ena && (Req2_pixel[7:0] == cache1_pixel[7:0]) && cache1_valid;
wire req2_hit2 = Req2_ena && (Req2_pixel[7:0] == cache2_pixel[7:0]) && cache2_valid;
wire req2_hit3 = Req2_ena && (Req2_pixel[7:0] == cache3_pixel[7:0]) && cache3_valid;
wire req2_hit4 = Req2_ena && (Req2_pixel[7:0] == cache4_pixel[7:0]) && cache4_valid;

wire req3_hit1 = Req3_ena && (Req3_pixel[7:0] == cache1_pixel[7:0]) && cache1_valid;
wire req3_hit2 = Req3_ena && (Req3_pixel[7:0] == cache2_pixel[7:0]) && cache2_valid;
wire req3_hit3 = Req3_ena && (Req3_pixel[7:0] == cache3_pixel[7:0]) && cache3_valid;
wire req3_hit4 = Req3_ena && (Req3_pixel[7:0] == cache4_pixel[7:0]) && cache4_valid;

wire req4_hit1 = Req4_ena && (Req4_pixel[7:0] == cache1_pixel[7:0]) && cache1_valid;
wire req4_hit2 = Req4_ena && (Req4_pixel[7:0] == cache2_pixel[7:0]) && cache2_valid;
wire req4_hit3 = Req4_ena && (Req4_pixel[7:0] == cache3_pixel[7:0]) && cache3_valid;
wire req4_hit4 = Req4_ena && (Req4_pixel[7:0] == cache4_pixel[7:0]) && cache4_valid;

wire req5_hit1 = Req5_ena && (Req5_pixel[7:0] == cache1_pixel[7:0]) && cache1_valid;
wire req5_hit2 = Req5_ena && (Req5_pixel[7:0] == cache2_pixel[7:0]) && cache2_valid;
wire req5_hit3 = Req5_ena && (Req5_pixel[7:0] == cache3_pixel[7:0]) && cache3_valid;
wire req5_hit4 = Req5_ena && (Req5_pixel[7:0] == cache4_pixel[7:0]) && cache4_valid;

wire req6_hit1 = Req6_ena && (Req6_pixel[7:0] == cache1_pixel[7:0]) && cache1_valid;
wire req6_hit2 = Req6_ena && (Req6_pixel[7:0] == cache2_pixel[7:0]) && cache2_valid;
wire req6_hit3 = Req6_ena && (Req6_pixel[7:0] == cache3_pixel[7:0]) && cache3_valid;
wire req6_hit4 = Req6_ena && (Req6_pixel[7:0] == cache4_pixel[7:0]) && cache4_valid;

wire req7_hit1 = Req7_ena && (Req7_pixel[7:0] == cache1_pixel[7:0]) && cache1_valid;
wire req7_hit2 = Req7_ena && (Req7_pixel[7:0] == cache2_pixel[7:0]) && cache2_valid;
wire req7_hit3 = Req7_ena && (Req7_pixel[7:0] == cache3_pixel[7:0]) && cache3_valid;
wire req7_hit4 = Req7_ena && (Req7_pixel[7:0] == cache4_pixel[7:0]) && cache4_valid;

wire req8_hit1 = Req8_ena && (Req8_pixel[7:0] == cache1_pixel[7:0]) && cache1_valid;
wire req8_hit2 = Req8_ena && (Req8_pixel[7:0] == cache2_pixel[7:0]) && cache2_valid;
wire req8_hit3 = Req8_ena && (Req8_pixel[7:0] == cache3_pixel[7:0]) && cache3_valid;
wire req8_hit4 = Req8_ena && (Req8_pixel[7:0] == cache4_pixel[7:0]) && cache4_valid;

wire req9_hit1 = Req9_ena && (Req9_pixel[7:0] == cache1_pixel[7:0]) && cache1_valid;
wire req9_hit2 = Req9_ena && (Req9_pixel[7:0] == cache2_pixel[7:0]) && cache2_valid;
wire req9_hit3 = Req9_ena && (Req9_pixel[7:0] == cache3_pixel[7:0]) && cache3_valid;
wire req9_hit4 = Req9_ena && (Req9_pixel[7:0] == cache4_pixel[7:0]) && cache4_valid;

wire req10_hit1 = Req10_ena && (Req10_pixel[7:0] == cache1_pixel[7:0]) && cache1_valid;
wire req10_hit2 = Req10_ena && (Req10_pixel[7:0] == cache2_pixel[7:0]) && cache2_valid;
wire req10_hit3 = Req10_ena && (Req10_pixel[7:0] == cache3_pixel[7:0]) && cache3_valid;
wire req10_hit4 = Req10_ena && (Req10_pixel[7:0] == cache4_pixel[7:0]) && cache4_valid;

wire req11_hit1 = Req11_ena && (Req11_pixel[7:0] == cache1_pixel[7:0]) && cache1_valid;
wire req11_hit2 = Req11_ena && (Req11_pixel[7:0] == cache2_pixel[7:0]) && cache2_valid;
wire req11_hit3 = Req11_ena && (Req11_pixel[7:0] == cache3_pixel[7:0]) && cache3_valid;
wire req11_hit4 = Req11_ena && (Req11_pixel[7:0] == cache4_pixel[7:0]) && cache4_valid;

wire req12_hit1 = Req12_ena && (Req12_pixel[7:0] == cache1_pixel[7:0]) && cache1_valid;
wire req12_hit2 = Req12_ena && (Req12_pixel[7:0] == cache2_pixel[7:0]) && cache2_valid;
wire req12_hit3 = Req12_ena && (Req12_pixel[7:0] == cache3_pixel[7:0]) && cache3_valid;
wire req12_hit4 = Req12_ena && (Req12_pixel[7:0] == cache4_pixel[7:0]) && cache4_valid;

reg [11:0] total_req; //12비트짜리 변수로 cache miss인 Req_ena가 왔으면 해당 비트가 1로 설정됨. 참고로 Req1은 [0], Req12는 [11]임. 햇갈리지 않게 주의해야 할듯.

reg [1:0] random_counter_0_3; //0 - 1 - 2 - 3 을 반복하는 카운터고, 어느 범용 캐시에 RGB값과 pixel값을 넣을지 결정함.
reg random_counter_0_1;
reg random_counter_0_2;

//읽기포트 1번에는 Request 1, 2, 3, 4, 5, 6 읽기포트 2번에는 Request 7, 8, 9, 10, 11, 12를 할당함.
//읽기포트 1에 경우 random_counter_0_1가 0일때는 Request 1, 2, 3으로 범위를 설정하고 random_counter_0_1가 1일때는 Request 4, 5, 6으로 범위를 설정함.
//범위에는 3개의 요청이 들어가고 random_counter_0_2의 값에 따라서 3개의 Request의 우선순위가 각각 결정됨.
//예를 들어 random_counter_0_2의 값이 1이면 우선순위는 1번: Request 2, 2번: Request 3, 3번: Request 1인 식임.
//우선순위가 높은것 먼저 total_req값으로 cache miss인 요청이 있는지 확인하고 있으면 Distribute RAM에서 값을 읽어옴. 없으면 2순위 체크, 그것도 없으면 3순위 체크임/
//만약 3개 다 total_req가 0이면 그때는 Distribute RAM 읽기가 일어나지 않음(ㅠㅠㅠㅠㅠ). 다음 클럭에 다시 우선순위가 설정되고 Distribute RAM 사용할 Request를 탐색함.

always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        cache1_pixel[7:0] <= 0;
        cache1_RGB[17:0] <= 0;
        cache1_valid <= 0;
        cache2_pixel[7:0] <= 0;
        cache2_RGB[17:0] <= 0;
        cache2_valid <= 0;
        cache3_pixel[7:0] <= 0;
        cache3_RGB[17:0] <= 0;
        cache3_valid <= 0;
        cache4_pixel[7:0] <= 0;
        cache4_RGB[17:0] <= 0;
        cache4_valid <= 0;

        req1_exclusive_pixel[7:0] <= 0;
        req1_exclusive_RGB[17:0] <= 0;
        req1_exclusive_valid <= 0;
        req2_exclusive_pixel[7:0] <= 0;
        req2_exclusive_RGB[17:0] <= 0;
        req2_exclusive_valid <= 0;
        req3_exclusive_pixel[7:0] <= 0;
        req3_exclusive_RGB[17:0] <= 0;
        req3_exclusive_valid <= 0;
        req4_exclusive_pixel[7:0] <= 0;
        req4_exclusive_RGB[17:0] <= 0;
        req4_exclusive_valid <= 0;
        req5_exclusive_pixel[7:0] <= 0;
        req5_exclusive_RGB[17:0] <= 0;
        req5_exclusive_valid <= 0;
        req6_exclusive_pixel[7:0] <= 0;
        req6_exclusive_RGB[17:0] <= 0;
        req6_exclusive_valid <= 0;
        req7_exclusive_pixel[7:0] <= 0;
        req7_exclusive_RGB[17:0] <= 0;
        req7_exclusive_valid <= 0;
        req8_exclusive_pixel[7:0] <= 0;
        req8_exclusive_RGB[17:0] <= 0;
        req8_exclusive_valid <= 0;
        req9_exclusive_pixel[7:0] <= 0;
        req9_exclusive_RGB[17:0] <= 0;
        req9_exclusive_valid <= 0;
        req10_exclusive_pixel[7:0] <= 0;
        req10_exclusive_RGB[17:0] <= 0;
        req10_exclusive_valid <= 0;
        req11_exclusive_pixel[7:0] <= 0;
        req11_exclusive_RGB[17:0] <= 0;
        req11_exclusive_valid <= 0;
        req12_exclusive_pixel[7:0] <= 0;
        req12_exclusive_RGB[17:0] <= 0;
        req12_exclusive_valid <= 0;

        random_counter_0_3[1:0] <= 0;
        random_counter_0_1 <= 0;
        random_counter_0_2 <= 0;
    end
    else begin
        random_counter_0_3[1:0] <= random_counter_0_3[1:0] + 1; // 0 - 1 - 2 - 3 - 0 - 1 - 2 - 3을 반복.
        random_counter_0_1 <= ~random_counter_0_1; //0 - 1 - 0 - 1 - 0을 반복.
        if(random_counter_0_2[1:0] == 2) random_counter_0_2[1:0] <= 0; // 0 - 1 - 2 - 0 - 1 - 2를 반복.
        else random_counter_0_2[1:0] <= random_counter_0_2[1:0] + 1;
    end
end

always @(*) begin
    Req1_end = 0;
    Req1_RGB[17:0] = 0;
    Req2_end = 0;
    Req2_RGB[17:0] = 0;
    Req3_end = 0;
    Req3_RGB[17:0] = 0;
    Req4_end = 0;
    Req4_RGB[17:0] = 0;
    Req5_end = 0;
    Req5_RGB[17:0] = 0;
    Req6_end = 0;
    Req6_RGB[17:0] = 0;
    Req7_end = 0;
    Req7_RGB[17:0] = 0;
    Req8_end = 0;
    Req8_RGB[17:0] = 0;
    Req9_end = 0;
    Req9_RGB[17:0] = 0;
    Req10_end = 0;
    Req10_RGB[17:0] = 0;
    Req11_end = 0;
    Req11_RGB[17:0] = 0;
    Req12_end = 0;
    Req12_RGB[17:0] = 0;

    total_req[0] = Req1_ena && ~req1_hit1 && ~req1_hit2 && ~req1_hit3 && ~req1_hit4 && ~req1_exclusive_hit;
    total_req[1] = Req2_ena && ~req2_hit1 && ~req2_hit2 && ~req2_hit3 && ~req2_hit4 && ~req2_exclusive_hit;
    total_req[2] = Req3_ena && ~req3_hit1 && ~req3_hit2 && ~req3_hit3 && ~req3_hit4 && ~req3_exclusive_hit;
    total_req[3] = Req4_ena && ~req4_hit1 && ~req4_hit2 && ~req4_hit3 && ~req4_hit4 && ~req4_exclusive_hit;
    total_req[4] = Req5_ena && ~req5_hit1 && ~req5_hit2 && ~req5_hit3 && ~req5_hit4 && ~req5_exclusive_hit;
    total_req[5] = Req6_ena && ~req6_hit1 && ~req6_hit2 && ~req6_hit3 && ~req6_hit4 && ~req6_exclusive_hit;
    total_req[6] = Req7_ena && ~req7_hit1 && ~req7_hit2 && ~req7_hit3 && ~req7_hit4 && ~req7_exclusive_hit;
    total_req[7] = Req8_ena && ~req8_hit1 && ~req8_hit2 && ~req8_hit3 && ~req8_hit4 && ~req8_exclusive_hit;
    total_req[8] = Req9_ena && ~req9_hit1 && ~req9_hit2 && ~req9_hit3 && ~req9_hit4 && ~req9_exclusive_hit;
    total_req[9] = Req10_ena && ~req10_hit1 && ~req10_hit2 && ~req10_hit3 && ~req10_hit4 && ~req10_exclusive_hit;
    total_req[10] = Req11_ena && ~req11_hit1 && ~req11_hit2 && ~req11_hit3 && ~req11_hit4 && ~req11_exclusive_hit;
    total_req[11] = Req12_ena && ~req12_hit1 && ~req12_hit2 && ~req12_hit3 && ~req12_hit4 && ~req12_exclusive_hit;

    //읽기 포트 1번
    case(random_counter_0_1)
        1'b0: begin //Request 1, 2, 3
            case(random_counter_0_2)
                2'd0: begin
                    if(total_req[0]) begin 
                        LUT_addr_r1[7:0] = Req1_pixel[7:0];
                        Req1_end = 1;
                        Req1_RGB[17:0] = LUT_data_out1[17:0];
                    end
                    else if(total_req[1]) begin
                        LUT_addr_r1[7:0] = Req2_pixel[7:0];
                        Req2_end = 1;
                        Req2_RGB[17:0] = LUT_data_out1[17:0];
                    end
                    else if(total_req[2]) begin
                        LUT_addr_r1[7:0] = Req3_pixel[7:0];
                        Req3_end = 1;
                        Req3_RGB[17:0] = LUT_data_out1[17:0];
                    end
                end
                2'd1: begin
                    if(total_req[1]) begin
                        LUT_addr_r1[7:0] = Req2_pixel[7:0];
                        Req2_end = 1;
                        Req2_RGB[17:0] = LUT_data_out1[17:0];
                    end
                    else if(total_req[2]) begin
                        LUT_addr_r1[7:0] = Req3_pixel[7:0];
                        Req3_end = 1;
                        Req3_RGB[17:0] = LUT_data_out1[17:0];
                    end
                    else if(total_req[0]) begin
                        LUT_addr_r1[7:0] = Req1_pixel[7:0];
                        Req1_end = 1;
                        Req1_RGB[17:0] = LUT_data_out1[17:0];
                    end
                end
                2'd2: begin
                    if(total_req[2]) begin
                        LUT_addr_r1[7:0] = Req3_pixel[7:0];
                        Req3_end = 1;
                        Req3_RGB[17:0] = LUT_data_out1[17:0];
                    end
                    else if(total_req[0]) begin
                        LUT_addr_r1[7:0] = Req1_pixel[7:0];
                        Req1_end = 1;
                        Req1_RGB[17:0] = LUT_data_out1[17:0];
                    end
                    else if(total_req[1]) begin
                        LUT_addr_r1[7:0] = Req2_pixel[7:0];
                        Req2_end = 1;
                        Req2_RGB[17:0] = LUT_data_out1[17:0];
                    end
                end
            endcase
        end
        1'b1: begin //Request 4, 5, 6
            case(random_counter_0_2)
                2'd0: begin
                    if(total_req[3]) begin 
                        LUT_addr_r1[7:0] = Req4_pixel[7:0];
                        Req4_end = 1;
                        Req4_RGB[17:0] = LUT_data_out1[17:0];
                    end
                    else if(total_req[4]) begin
                        LUT_addr_r1[7:0] = Req5_pixel[7:0];
                        Req5_end = 1;
                        Req5_RGB[17:0] = LUT_data_out1[17:0];
                    end
                    else if(total_req[5]) begin
                        LUT_addr_r1[7:0] = Req6_pixel[7:0];
                        Req6_end = 1;
                        Req6_RGB[17:0] = LUT_data_out1[17:0];
                    end
                end
                2'd1: begin
                    if(total_req[4]) begin
                        LUT_addr_r1[7:0] = Req5_pixel[7:0];
                        Req5_end = 1;
                        Req5_RGB[17:0] = LUT_data_out1[17:0];
                    end
                    else if(total_req[5]) begin
                        LUT_addr_r1[7:0] = Req6_pixel[7:0];
                        Req6_end = 1;
                        Req6_RGB[17:0] = LUT_data_out1[17:0];
                    end
                    else if(total_req[3]) begin
                        LUT_addr_r1[7:0] = Req4_pixel[7:0];
                        Req4_end = 1;
                        Req4_RGB[17:0] = LUT_data_out1[17:0];
                    end
                end
                2'd2: begin
                    if(total_req[5]) begin
                        LUT_addr_r1[7:0] = Req6_pixel[7:0];
                        Req6_end = 1;
                        Req6_RGB[17:0] = LUT_data_out1[17:0];
                    end
                    else if(total_req[3]) begin
                        LUT_addr_r1[7:0] = Req4_pixel[7:0];
                        Req4_end = 1;
                        Req4_RGB[17:0] = LUT_data_out1[17:0];
                    end
                    else if(total_req[4]) begin
                        LUT_addr_r1[7:0] = Req5_pixel[7:0];
                        Req5_end = 1;
                        Req5_RGB[17:0] = LUT_data_out1[17:0];
                    end
                end
            endcase
        end
    endcase

    //읽기 포트 2번
    case(random_counter_0_1)
        1'b0: begin //Request 7, 8, 9
            case(random_counter_0_2)
                2'd0: begin
                    if(total_req[6]) begin 
                        LUT_addr_r2[7:0] = Req7_pixel[7:0];
                        Req7_end = 1;
                        Req7_RGB[17:0] = LUT_data_out2[17:0];
                    end
                    else if(total_req[7]) begin
                        LUT_addr_r2[7:0] = Req8_pixel[7:0];
                        Req8_end = 1;
                        Req8_RGB[17:0] = LUT_data_out2[17:0];
                    end
                    else if(total_req[8]) begin
                        LUT_addr_r2[7:0] = Req9_pixel[7:0];
                        Req9_end = 1;
                        Req9_RGB[17:0] = LUT_data_out2[17:0];
                    end
                end
                2'd1: begin
                    if(total_req[7]) begin
                        LUT_addr_r2[7:0] = Req8_pixel[7:0];
                        Req8_end = 1;
                        Req8_RGB[17:0] = LUT_data_out2[17:0];
                    end
                    else if(total_req[8]) begin
                        LUT_addr_r2[7:0] = Req9_pixel[7:0];
                        Req9_end = 1;
                        Req9_RGB[17:0] = LUT_data_out2[17:0];
                    end
                    else if(total_req[6]) begin
                        LUT_addr_r2[7:0] = Req7_pixel[7:0];
                        Req7_end = 1;
                        Req7_RGB[17:0] = LUT_data_out2[17:0];
                    end
                end
                2'd2: begin
                    if(total_req[8]) begin
                        LUT_addr_r2[7:0] = Req9_pixel[7:0];
                        Req9_end = 1;
                        Req9_RGB[17:0] = LUT_data_out2[17:0];
                    end
                    else if(total_req[6]) begin
                        LUT_addr_r2[7:0] = Req7_pixel[7:0];
                        Req7_end = 1;
                        Req7_RGB[17:0] = LUT_data_out2[17:0];
                    end
                    else if(total_req[7]) begin
                        LUT_addr_r2[7:0] = Req8_pixel[7:0];
                        Req8_end = 1;
                        Req8_RGB[17:0] = LUT_data_out2[17:0];
                    end
                end
            endcase
        end
        1'b1: begin //Request 10, 11, 12
            case(random_counter_0_2)
                2'd0: begin
                    if(total_req[9]) begin 
                        LUT_addr_r2[7:0] = Req10_pixel[7:0];
                        Req10_end = 1;
                        Req10_RGB[17:0] = LUT_data_out2[17:0];
                    end
                    else if(total_req[10]) begin
                        LUT_addr_r2[7:0] = Req11_pixel[7:0];
                        Req11_end = 1;
                        Req11_RGB[17:0] = LUT_data_out2[17:0];
                    end
                    else if(total_req[11]) begin
                        LUT_addr_r2[7:0] = Req12_pixel[7:0];
                        Req12_end = 1;
                        Req12_RGB[17:0] = LUT_data_out2[17:0];
                    end
                end
                2'd1: begin
                    if(total_req[10]) begin
                        LUT_addr_r2[7:0] = Req11_pixel[7:0];
                        Req11_end = 1;
                        Req11_RGB[17:0] = LUT_data_out2[17:0];
                    end
                    else if(total_req[11]) begin
                        LUT_addr_r2[7:0] = Req12_pixel[7:0];
                        Req12_end = 1;
                        Req12_RGB[17:0] = LUT_data_out2[17:0];
                    end
                    else if(total_req[9]) begin
                        LUT_addr_r2[7:0] = Req10_pixel[7:0];
                        Req10_end = 1;
                        Req10_RGB[17:0] = LUT_data_out2[17:0];
                    end
                end
                2'd2: begin
                    if(total_req[11]) begin
                        LUT_addr_r2[7:0] = Req12_pixel[7:0];
                        Req12_end = 1;
                        Req12_RGB[17:0] = LUT_data_out2[17:0];
                    end
                    else if(total_req[9]) begin
                        LUT_addr_r2[7:0] = Req10_pixel[7:0];
                        Req10_end = 1;
                        Req10_RGB[17:0] = LUT_data_out2[17:0];
                    end
                    else if(total_req[10]) begin
                        LUT_addr_r2[7:0] = Req11_pixel[7:0];
                        Req11_end = 1;
                        Req11_RGB[17:0] = LUT_data_out2[17:0];
                    end
                end
            endcase
        end
    endcase
    
    case(1'b1)
        req1_exclusive_hit: begin
            Req1_end = 1;
            Req1_RGB[17:0] = req1_exclusive_RGB[17:0];
        end
        req1_hit1: begin
            Req1_end = 1;
            Req1_RGB[17:0] = cache1_RGB[17:0];
        end
        req1_hit2: begin
            Req1_end = 1;
            Req1_RGB[17:0] = cache2_RGB[17:0];
        end
        req1_hit3: begin
            Req1_end = 1;
            Req1_RGB[17:0] = cache3_RGB[17:0];
        end
        req1_hit4: begin
            Req1_end = 1;
            Req1_RGB[17:0] = cache4_RGB[17:0];
        end
    endcase

    case(1'b1)
        req2_exclusive_hit: begin
            Req2_end = 1;
            Req2_RGB[17:0] = req2_exclusive_RGB[17:0];
        end
        req2_hit1: begin
            Req2_end = 1;
            Req2_RGB[17:0] = cache1_RGB[17:0];
        end
        req2_hit2: begin
            Req2_end = 1;
            Req2_RGB[17:0] = cache2_RGB[17:0];
        end
        req2_hit3: begin
            Req2_end = 1;
            Req2_RGB[17:0] = cache3_RGB[17:0];
        end
        req2_hit4: begin
            Req2_end = 1;
            Req2_RGB[17:0] = cache4_RGB[17:0];
        end
    endcase

    case(1'b1)
        req3_exclusive_hit: begin
            Req3_end = 1;
            Req3_RGB[17:0] = req3_exclusive_RGB[17:0];
        end
        req3_hit1: begin
            Req3_end = 1;
            Req3_RGB[17:0] = cache1_RGB[17:0];
        end
        req3_hit2: begin
            Req3_end = 1;
            Req3_RGB[17:0] = cache2_RGB[17:0];
        end
        req3_hit3: begin
            Req3_end = 1;
            Req3_RGB[17:0] = cache3_RGB[17:0];
        end
        req3_hit4: begin
            Req3_end = 1;
            Req3_RGB[17:0] = cache4_RGB[17:0];
        end
    endcase

    case(1'b1)
        req4_exclusive_hit: begin
            Req4_end = 1;
            Req4_RGB[17:0] = req4_exclusive_RGB[17:0];
        end
        req4_hit1: begin
            Req4_end = 1;
            Req4_RGB[17:0] = cache1_RGB[17:0];
        end
        req4_hit2: begin
            Req4_end = 1;
            Req4_RGB[17:0] = cache2_RGB[17:0];
        end
        req4_hit3: begin
            Req4_end = 1;
            Req4_RGB[17:0] = cache3_RGB[17:0];
        end
        req4_hit4: begin
            Req4_end = 1;
            Req4_RGB[17:0] = cache4_RGB[17:0];
        end
    endcase

    case(1'b1)
        req5_exclusive_hit: begin
            Req5_end = 1;
            Req5_RGB[17:0] = req5_exclusive_RGB[17:0];
        end
        req5_hit1: begin
            Req5_end = 1;
            Req5_RGB[17:0] = cache1_RGB[17:0];
        end
        req5_hit2: begin
            Req5_end = 1;
            Req5_RGB[17:0] = cache2_RGB[17:0];
        end
        req5_hit3: begin
            Req5_end = 1;
            Req5_RGB[17:0] = cache3_RGB[17:0];
        end
        req5_hit4: begin
            Req5_end = 1;
            Req5_RGB[17:0] = cache4_RGB[17:0];
        end
    endcase

    case(1'b1)
        req6_exclusive_hit: begin
            Req6_end = 1;
            Req6_RGB[17:0] = req6_exclusive_RGB[17:0];
        end
        req6_hit1: begin
            Req6_end = 1;
            Req6_RGB[17:0] = cache1_RGB[17:0];
        end
        req6_hit2: begin
            Req6_end = 1;
            Req6_RGB[17:0] = cache2_RGB[17:0];
        end
        req6_hit3: begin
            Req6_end = 1;
            Req6_RGB[17:0] = cache3_RGB[17:0];
        end
        req6_hit4: begin
            Req6_end = 1;
            Req6_RGB[17:0] = cache4_RGB[17:0];
        end
    endcase

    case(1'b1)
        req7_exclusive_hit: begin
            Req7_end = 1;
            Req7_RGB[17:0] = req7_exclusive_RGB[17:0];
        end
        req7_hit1: begin
            Req7_end = 1;
            Req7_RGB[17:0] = cache1_RGB[17:0];
        end
        req7_hit2: begin
            Req7_end = 1;
            Req7_RGB[17:0] = cache2_RGB[17:0];
        end
        req7_hit3: begin
            Req7_end = 1;
            Req7_RGB[17:0] = cache3_RGB[17:0];
        end
        req7_hit4: begin
            Req7_end = 1;
            Req7_RGB[17:0] = cache4_RGB[17:0];
        end
    endcase

    case(1'b1)
        req8_exclusive_hit: begin
            Req8_end = 1;
            Req8_RGB[17:0] = req8_exclusive_RGB[17:0];
        end
        req8_hit1: begin
            Req8_end = 1;
            Req8_RGB[17:0] = cache1_RGB[17:0];
        end
        req8_hit2: begin
            Req8_end = 1;
            Req8_RGB[17:0] = cache2_RGB[17:0];
        end
        req8_hit3: begin
            Req8_end = 1;
            Req8_RGB[17:0] = cache3_RGB[17:0];
        end
        req8_hit4: begin
            Req8_end = 1;
            Req8_RGB[17:0] = cache4_RGB[17:0];
        end
    endcase

    case(1'b1)
        req9_exclusive_hit: begin
            Req9_end = 1;
            Req9_RGB[17:0] = req9_exclusive_RGB[17:0];
        end
        req9_hit1: begin
            Req9_end = 1;
            Req9_RGB[17:0] = cache1_RGB[17:0];
        end
        req9_hit2: begin
            Req9_end = 1;
            Req9_RGB[17:0] = cache2_RGB[17:0];
        end
        req9_hit3: begin
            Req9_end = 1;
            Req9_RGB[17:0] = cache3_RGB[17:0];
        end
        req9_hit4: begin
            Req9_end = 1;
            Req9_RGB[17:0] = cache4_RGB[17:0];
        end
    endcase

    case(1'b1)
        req10_exclusive_hit: begin
            Req10_end = 1;
            Req10_RGB[17:0] = req10_exclusive_RGB[17:0];
        end
        req10_hit1: begin
            Req10_end = 1;
            Req10_RGB[17:0] = cache1_RGB[17:0];
        end
        req10_hit2: begin
            Req10_end = 1;
            Req10_RGB[17:0] = cache2_RGB[17:0];
        end
        req10_hit3: begin
            Req10_end = 1;
            Req10_RGB[17:0] = cache3_RGB[17:0];
        end
        req10_hit4: begin
            Req10_end = 1;
            Req10_RGB[17:0] = cache4_RGB[17:0];
        end
    endcase

    case(1'b1)
        req11_exclusive_hit: begin
            Req11_end = 1;
            Req11_RGB[17:0] = req11_exclusive_RGB[17:0];
        end
        req11_hit1: begin
            Req11_end = 1;
            Req11_RGB[17:0] = cache1_RGB[17:0];
        end
        req11_hit2: begin
            Req11_end = 1;
            Req11_RGB[17:0] = cache2_RGB[17:0];
        end
        req11_hit3: begin
            Req11_end = 1;
            Req11_RGB[17:0] = cache3_RGB[17:0];
        end
        req11_hit4: begin
            Req11_end = 1;
            Req11_RGB[17:0] = cache4_RGB[17:0];
        end
    endcase

    case(1'b1)
        req12_exclusive_hit: begin
            Req12_end = 1;
            Req12_RGB[17:0] = req12_exclusive_RGB[17:0];
        end
        req12_hit1: begin
            Req12_end = 1;
            Req12_RGB[17:0] = cache1_RGB[17:0];
        end
        req12_hit2: begin
            Req12_end = 1;
            Req12_RGB[17:0] = cache2_RGB[17:0];
        end
        req12_hit3: begin
            Req12_end = 1;
            Req12_RGB[17:0] = cache3_RGB[17:0];
        end
        req12_hit4: begin
            Req12_end = 1;
            Req12_RGB[17:0] = cache4_RGB[17:0];
        end
    endcase
end
endmodule