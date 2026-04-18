module I_Cache_Controller (
    input clk, //50MHz로 CPU와 동기화할 예정.
    input resetn, //그냥 negedge reset으로 통일. 1->0으로 가면 리셋됨.
    //cpu와 상호작용하는 신호들.
    input CPU_valid,
    input CPU_instr,
    output reg CPU_ready,

    input [31:0] CPU_addr, //32비트 4GB의 메모리중 256MiB만 사용할 예정이라 상위 4비트는 0으로 고정되어야 함.
    input [31:0] CPU_wdata,
    input [3:0] CPU_wstrb, ////이게 4'b0000이면 읽기이고 4'b1111이면 4바이트 전체 쓰기임. 
    output reg [31:0] CPU_rdata,

    //EXternal Memory Interface. axi4로 변환한 뒤 DDR3 IP와 연결해야 함.
    output reg EMEM_valid,
    input EMEM_ready,

    output reg [31:0] EMEM_addr,
    output reg [31:0] EMEM_wdata,
    output reg [3:0] EMEM_wstrb,
    input [31:0] EMEM_rdata,

    output reg [7:0] EMEM_burst_len, //이 값이 0이면 1개읽기, 1이면 2개읽기임, 최대 256개의 word를 연속으로 읽을 수 있음.
    output reg EMEM_burst_en, //이 값이 1이면 burst읽기 임.

    // BRAM 0 (Way 0 Low) - Simple Dual Port
    // Write Port (Port A)
    output reg       BRAM0_wen,   // Write Enable (Master)
    output reg [7:0]  BRAM0_wstrb, // Byte-wide Write Enable (72비트 모드에선 8비트가 표준)
    output reg [8:0]  BRAM0_waddr, //width는 72비트, height는 512라서 주소가 9비트임.
    output reg [71:0] BRAM0_din,
    // Read Port (Port B)
    output reg       BRAM0_ren,   // Read Enable
    output reg [8:0]  BRAM0_raddr, //width는 72비트, height는 512라서 주소가 9비트임.
    input  [71:0] BRAM0_dout,

    //BRAM 1 (Way 0 High) - Simple Dual Port
    // Write Port (Port A)
    output reg       BRAM1_wen,   // Write Enable (Master)
    output reg [7:0]  BRAM1_wstrb, // Byte-wide Write Enable (72비트 모드에선 8비트가 표준)
    output reg [8:0]  BRAM1_waddr,
    output reg [71:0] BRAM1_din,
    // Read Port (Port B)
    output reg       BRAM1_ren,   // Read Enable
    output reg [8:0]  BRAM1_raddr,
    input  [71:0] BRAM1_dout,

    //BRAM 2 (Way 1 Low) - Simple Dual Port
    // Write Port (Port A)
    output reg      BRAM2_wen,   // Write Enable (Master)
    output reg [7:0]  BRAM2_wstrb, // Byte-wide Write Enable (72비트 모드에선 8비트가 표준)
    output reg [8:0]  BRAM2_waddr,
    output reg [71:0] BRAM2_din,
    // Read Port (Port B)
    output reg       BRAM2_ren,   // Read Enable
    output reg [8:0]  BRAM2_raddr,
    input  [71:0] BRAM2_dout,

    //BRAM 3 (Way 1 High) - Simple Dual Port
    // Write Port (Port A)
    output reg       BRAM3_wen,   // Write Enable (Master)
    output reg [7:0]  BRAM3_wstrb, // Byte-wide Write Enable (72비트 모드에선 8비트가 표준)
    output reg [8:0]  BRAM3_waddr,
    output reg [71:0] BRAM3_din,
    // Read Port (Port B)
    output reg       BRAM3_ren,   // Read Enable
    output reg [8:0]  BRAM3_raddr,
    input  [71:0] BRAM3_dout,

    output cache_hit
);

reg [3:0] main_state;
reg [3:0] main_next;
//reg [3:0] sub_state;
//reg [3:0] sub_next;

parameter IDLE = 0, CACHE_SEARCH = 1, DATA_REQ = 2, EMEM_READ = 3, EMEM_WRITE = 4, CACHE_MISS = 5, CACHE_WRITE = 6;

reg cpu_tag_save; //제어신호로 이 값이 1이면 클럭에지때 cpu_I_tag에 CPU_addr[27:13]이 저장됨.
reg [14:0] cpu_I_tag;

reg [3:0] burst_counter;
reg burst_counter_reset; //이 값이 1이면 burst_counter는 0으로 리셋됨.
reg burst_counter_plus; //이 값이 1이면 burst_counter는 1 증가함.

reg [31:0] word_buffer[3:0];
reg [31:0] word_buffer_wdata[3:0];
reg word_buffer_wen_0;
reg word_buffer_wen_1;
reg word_buffer_wen_2;
reg word_buffer_wen_3;

reg random_bit; //1비트짜리 레지스터로 매 클럭마다 0과 1을 반복함. 


always @(*) begin
    CPU_ready = 0;
    CPU_rdata[31:0] = 0;
    
    EMEM_valid = 0;
    EMEM_addr[31:0] = 0;
    EMEM_wstrb[3:0] = 4'b1111;
    EMEM_wdata[31:0] = 0;
    EMEM_burst_len[7:0] = 0; //기본 1word 읽기로 설정.
    EMEM_burst_en = 0; //기본 0으로 설정.

    //Way 0 Low. word1 + word0 + way0_tag[7:0]
    BRAM0_wen = 0;
    BRAM0_waddr[8:0] = 0;
    BRAM0_wstrb[7:0] = 8'b11111111; //초기값은 싹 1로 설정.
    BRAM0_din[71:0] = 0; //w_data
    BRAM0_ren = 0;
    BRAM0_raddr[8:0] = 0; //주소는 9비트임. width = 72bit, height = 512.

    //Way 0 High. word3 + word2 + way0_valid_bit + way0_tag[14:8]
    BRAM1_wen = 0;
    BRAM1_waddr[8:0] = 0;
    BRAM1_wstrb[7:0] = 8'b11111111; //초기값은 싹 1로 설정.
    BRAM1_din[71:0] = 0; //w_data
    BRAM1_ren = 0;
    BRAM1_raddr[8:0] = 0; //주소는 9비트임. width = 72bit, height = 512.

    //Way 1 Low. word1 + word0 + way1_tag[7:0]
    BRAM2_wen = 0;
    BRAM2_waddr[8:0] = 0;
    BRAM2_wstrb[7:0] = 8'b11111111; //초기값은 싹 1로 설정.
    BRAM2_din[71:0] = 0; //w_data
    BRAM2_ren = 0;
    BRAM2_raddr[8:0] = 0; //주소는 9비트임. width = 72bit, height = 512.

    //Way 1 High. word3 + word2 + way1_valid_bit + way1_tag[14:8]
    BRAM3_wen = 0;
    BRAM3_waddr[8:0] = 0;
    BRAM3_wstrb[7:0] = 8'b11111111; //초기값은 싹 1로 설정.
    BRAM3_din[71:0] = 0; //w_data
    BRAM3_ren = 0;
    BRAM3_raddr[8:0] = 0; //주소는 9비트임. width = 72bit, height = 512.

    main_next = main_next;

    cpu_tag_save = 0; //이 값이 1이면 cpu_I_tag에 CPU_addr[27:13]이 저장됨.

    burst_counter_reset = 0;
    burst_counter_plus = 0;

    word_buffer_wen_0 = 0; //이 값이 1이면 word_buffer[0][31:0]에 word_buffer_wdata[0][31:0]가 써짐.
    word_buffer_wen_1 = 0; //이 값이 1이면 word_buffer[1][31:0]에 word_buffer_wdata[1][31:0]가 써짐.
    word_buffer_wen_2 = 0; //이 값이 1이면 word_buffer[2][31:0]에 word_buffer_wdata[2][31:0]가 써짐.
    word_buffer_wen_3 = 0; //이 값이 1이면 word_buffer[3][31:0]에 word_buffer_wdata[3][31:0]가 써짐.
    word_buffer_wdata[0][31:0] = 0;
    word_buffer_wdata[1][31:0] = 0;
    word_buffer_wdata[2][31:0] = 0;
    word_buffer_wdata[3][31:0] = 0;

    cache_hit = 0;

    case(main_state)
        IDLE: begin
            if(CPU_valid & (CPU_wstrb[3:0] == 4'b0000) & (CPU_instr == 1)) begin //명령어 읽기 요청시
                main_next = CACHE_SEARCH;
                cpu_tag_save = 1;
                BRAM0_ren = 1;
                BRAM0_raddr[8:0] = CPU_addr[12:4]; //CPU_addr의 [27:13]은 tag, [12:4]는 index, [3:2]는 Cache line(4 word)의 word 번호, [1:0]는 byte 번호. 상위 4비트는 사용되지 않음.(256MiB만 사용)
                BRAM1_ren = 1;
                BRAM1_raddr[8:0] = CPU_addr[12:4];
                BRAM2_ren = 1;
                BRAM2_raddr[8:0] = CPU_addr[12:4];
                BRAM3_ren = 1;
                BRAM3_raddr[8:0] = CPU_addr[12:4];
            end
            else if(CPU_valid & (CPU_wstrb[3:0] == 4'b0000) & (CPU_instr == 0)) begin //데이터 읽기 요청시
                main_next = EMEM_READ;
                EMEM_valid = 1; //외부 메모리로 신호를 그대로 흘려보냄.
                EMEM_addr[31:0] = CPU_addr[31:0];
                EMEM_wdata[31:0] = CPU_wdata[31:0];
                EMEM_wstrb[3:0] = CPU_wstrb[3:0];
                EMEM_burst_en = 0;
                if(EMEM_ready) begin //만약 바로 EMEM_ready가 온다면 CPU에 전달하고 바로 IDLE로 넘어감. 
                    main_next = IDLE;
                    CPU_ready = 1;
                    CPU_rdata[31:0] = EMEM_rdata[31:0];
                end
            end
            else if(CPU_valid) begin //데이터 쓰기 요청시.
                main_next = EMEM_WRITE;
                EMEM_valid = 1; //외부 메모리로 신호를 그대로 흘려보냄.
                EMEM_addr[31:0] = CPU_addr[31:0];
                EMEM_wdata[31:0] = CPU_wdata[31:0];
                EMEM_wstrb[3:0] = CPU_wstrb[3:0];
                EMEM_burst_en = 0;
                if(EMEM_ready) begin //만약 바로 EMEM_ready가 온다면 CPU에 전달하고 바로 IDLE로 넘어감. 
                    main_next = IDLE;
                    CPU_ready = 1;
                end
            end
            else begin //그냥 아무런 메모리 요청이 없을 때.
                main_next = IDLE;
            end
        end
        CACHE_SEARCH: begin //클럭에지때 CACHE_SEARCH로 main_state가 바뀌면서 BRAM_dout[71:0]이 나옴.
            if((BRAM1_dout[7] == 1) && ({BRAM1_dout[6:0], BRAM0_dout[7:0]} == cpu_I_tag[14:0])) begin //Way 0 hit 상황.
                cache_hit = 1;
                case(CPU_addr[3:2])
                    2'b00: begin //Cache line의 0번 word
                        main_next = IDLE;
                        CPU_ready = 1;
                        CPU_rdata[31:0] = BRAM0_dout[39:8];
                    end
                    2'b01: begin //Cache line의 1번 word
                        main_next = IDLE;
                        CPU_ready = 1;
                        CPU_rdata[31:0] = BRAM0_dout[71:40];
                    end
                    2'b10: begin //Cache line의 2번 word
                        main_next = IDLE;
                        CPU_ready = 1;
                        CPU_rdata[31:0] = BRAM1_dout[39:8];
                    end
                    2'b11: begin //Cache line의 3번 word
                        main_next = IDLE;
                        CPU_ready = 1;
                        CPU_rdata[31:0] = BRAM1_dout[71:40];
                    end
                endcase
            end
            else if((BRAM3_dout[7] == 1) && ({BRAM3_dout[6:0], BRAM2_dout[7:0]} == cpu_I_tag[14:0])) begin //Way 1 hit 상황.
                cache_hit = 1;
                case(CPU_addr[3:2])
                    2'b00: begin //Cache line의 0번 word
                        main_next = IDLE;
                        CPU_ready = 1;
                        CPU_rdata[31:0] = BRAM2_dout[39:8];
                    end
                    2'b01: begin //Cache line의 1번 word
                        main_next = IDLE;
                        CPU_ready = 1;
                        CPU_rdata[31:0] = BRAM2_dout[71:40];
                    end
                    2'b10: begin //Cache line의 2번 word
                        main_next = IDLE;
                        CPU_ready = 1;
                        CPU_rdata[31:0] = BRAM3_dout[39:8];
                    end
                    2'b11: begin //Cache line의 3번 word
                        main_next = IDLE;
                        CPU_ready = 1;
                        CPU_rdata[31:0] = BRAM3_dout[71:40];
                    end
                endcase
            end
            else begin //캐시 miss 상황.
                EMEM_valid = 1;
                EMEM_addr[31:0] = {4'b0000, CPU_addr[27:4], 2'b00, 2'b00};
                EMEM_wdata[31:0] = CPU_wdata[31:0];
                EMEM_wstrb[3:0] = 4'b0000; //읽기 신호.
                EMEM_burst_en = 1;
                EMEM_burst_len[7:0] = 3; //4 word를 읽어와야 함. 만약에 CPU_addr[3:2]가 2'b00이 아니어도 순차적으로 4개 word를 읽어오는 구조임.
                if(EMEM_ready) begin //여기서 바로 EMEM_ready가 떴다면 0번 word를 저장해두면 됨.
                    main_next = CACHE_MISS;
                    burst_counter_plus = 1; //IDLE때부터 burst_counter는 0으로 초기화되어 있어야 함. 클럭에지때 burst_counter는 1이 됨.
                    word_buffer_wen_0 = 1;
                    word_buffer_wdata[0][31:0] = EMEM_rdata[31:0];
                end
                else begin
                    main_next = CACHE_MISS;
                    burst_counter_reset = 1; //혹시 모르니 한번 더 초기화 함.
                end
            end
        end
        CACHE_MISS: begin
            case(burst_counter) //burst_counter는 IDLE에서부터 0으로 초기화되어 있어야 함!!!!
                0: begin
                    EMEM_valid = 1;
                    EMEM_addr[31:0] = {4'b0000, CPU_addr[27:4], 2'b00, 2'b00};
                    EMEM_wdata[31:0] = CPU_wdata[31:0];
                    EMEM_wstrb[3:0] = 4'b0000; //읽기 신호.
                    EMEM_burst_en = 1;
                    EMEM_burst_len[7:0] = 3; //4 word를 읽어와야 함. 만약에 CPU_addr[3:2]가 2'b00이 아니어도 순차적으로 4개 word를 읽어오는 구조임.
                    if(EMEM_ready) begin
                        main_next = CACHE_MISS;
                        burst_counter_plus = 1;
                        word_buffer_wen_0 = 1;
                        word_buffer_wdata[0][31:0] = EMEM_rdata[31:0];
                    end
                    else begin
                        main_next = CACHE_MISS;
                    end
                end
                1: begin //만약 main_state가 CACHE_SEARCH인 상황에서 EMEM_ready가 1이었다면 여기서부터 시작함. 
                    EMEM_valid = 1;
                    EMEM_addr[31:0] = {4'b0000, CPU_addr[27:4], 2'b00, 2'b00};
                    EMEM_wdata[31:0] = CPU_wdata[31:0];
                    EMEM_wstrb[3:0] = 4'b0000; //읽기 신호.
                    EMEM_burst_en = 1;
                    EMEM_burst_len[7:0] = 3; //4 word를 읽어와야 함. 만약에 CPU_addr[3:2]가 2'b00이 아니어도 순차적으로 4개 word를 읽어오는 구조임.
                    if(EMEM_ready) begin
                        main_next = CACHE_MISS;
                        burst_counter_plus = 1;
                        word_buffer_wen_1 = 1;
                        word_buffer_wdata[1][31:0] = EMEM_rdata[31:0];
                    end
                    else begin
                        main_next = CACHE_MISS;
                    end
                end
                2: begin
                    EMEM_valid = 1;
                    EMEM_addr[31:0] = {4'b0000, CPU_addr[27:4], 2'b00, 2'b00};
                    EMEM_wdata[31:0] = CPU_wdata[31:0];
                    EMEM_wstrb[3:0] = 4'b0000; //읽기 신호.
                    EMEM_burst_en = 1;
                    EMEM_burst_len[7:0] = 3; //4 word를 읽어와야 함. 만약에 CPU_addr[3:2]가 2'b00이 아니어도 순차적으로 4개 word를 읽어오는 구조임.
                    if(EMEM_ready) begin
                        main_next = CACHE_MISS;
                        burst_counter_plus = 1;
                        word_buffer_wen_2 = 1;
                        word_buffer_wdata[2][31:0] = EMEM_rdata[31:0];
                    end
                    else begin
                        main_next = CACHE_MISS;
                    end
                end
                3: begin
                    EMEM_valid = 1;
                    EMEM_addr[31:0] = {4'b0000, CPU_addr[27:4], 2'b00, 2'b00};
                    EMEM_wdata[31:0] = CPU_wdata[31:0];
                    EMEM_wstrb[3:0] = 4'b0000; //읽기 신호.
                    EMEM_burst_en = 1;
                    EMEM_burst_len[7:0] = 3; //4 word를 읽어와야 함. 만약에 CPU_addr[3:2]가 2'b00이 아니어도 순차적으로 4개 word를 읽어오는 구조임.
                    if(EMEM_ready) begin
                        main_next = CACHE_WRITE;
                        burst_counter_reset = 1; //burst_counter 리셋!!
                        word_buffer_wen_3 = 1;
                        word_buffer_wdata[3][31:0] = EMEM_rdata[31:0];
                    end
                    else begin
                        main_next = CACHE_MISS;
                    end
                end
            endcase
        end
        CACHE_WRITE: begin //CACHE_WRITE로 main_state가 변경되면서 word_buffer에 4개의 word가 저장이 완료된 상황임.
            main_next = IDLE; //이제 IDLE로 이동해서 다시 캐시에 접근하면 cache hit가 발생함!!!
            case(random_bit)
            1'b0: begin //0번 way에 값을 씀.
                BRAM0_wen = 1;
                BRAM0_wstrb[7:0] = 8'hFF; //싹다 1로 설정.
                BRAM0_waddr[8:0] = CPU_addr[12:4];
                BRAM0_din[71:0] = {word_buffer[1][31:0], word_buffer[0][31:0], cpu_I_tag[7:0]};

                BRAM1_wen = 1;
                BRAM1_wstrb[7:0] = 8'hFF; //싹다 1로 설정.
                BRAM1_waddr[8:0] = CPU_addr[12:4];
                BRAM1_din[71:0] = {word_buffer[3][31:0], word_buffer[2][31:0], 1'b1, cpu_I_tag[14:8]}; //valid_bit는 1로 설정!!
            end
            1'b1: begin //1번 way에 값을 씀.
                BRAM2_wen = 1;
                BRAM2_wstrb[7:0] = 8'hFF; //싹다 1로 설정.
                BRAM2_waddr[8:0] = CPU_addr[12:4];
                BRAM2_din[71:0] = {word_buffer[1][31:0], word_buffer[0][31:0], cpu_I_tag[7:0]};

                BRAM3_wen = 1;
                BRAM3_wstrb[7:0] = 8'hFF; //싹다 1로 설정.
                BRAM3_waddr[8:0] = CPU_addr[12:4];
                BRAM3_din[71:0] = {word_buffer[3][31:0], word_buffer[2][31:0], 1'b1, cpu_I_tag[14:8]}; //valid_bit는 1로 설정!!
            end
            endcase
        end
        EMEM_READ: begin
            EMEM_valid = 1; //외부 메모리로 신호를 그대로 흘려보냄.
            EMEM_addr[31:0] = CPU_addr[31:0];
            EMEM_wdata[31:0] = CPU_wdata[31:0];
            EMEM_wstrb[3:0] = CPU_wstrb[3:0];
            EMEM_burst_en = 0;
            if(EMEM_ready) begin //만약 바로 EMEM_ready가 온다면 CPU에 전달하고 바로 IDLE로 넘어감. 
                main_next = IDLE;
                CPU_ready = 1;
                CPU_rdata[31:0] = EMEM_rdata[31:0];
            end
            else begin
                main_next = EMEM_READ;
                CPU_ready = 0;
                CPU_rdata[31:0] = 0;
            end
        end
        EMEM_WRITE: begin
            EMEM_valid = 1; //외부 메모리로 신호를 그대로 흘려보냄.
            EMEM_addr[31:0] = CPU_addr[31:0];
            EMEM_wdata[31:0] = CPU_wdata[31:0];
            EMEM_wstrb[3:0] = CPU_wstrb[3:0];
            EMEM_burst_en = 0;
            if(EMEM_ready) begin //만약 바로 EMEM_ready가 온다면 CPU에 전달하고 바로 IDLE로 넘어감. 
                main_next = IDLE;
                CPU_ready = 1;
            end
            else begin
                main_next = EMEM_WRITE;
                CPU_ready = 0;
            end
        end
    endcase
end

always @(posedge clk or negedge resetn) begin
    if(!resetn) begin
        main_state <= IDLE;
        burst_counter[3:0] <= 0;
        cpu_I_tag[14:0] <= 0;
        word_buffer[0][31:0] <= 0;
        word_buffer[1][31:0] <= 0;
        word_buffer[2][31:0] <= 0;
        word_buffer[3][31:0] <= 0;
        random_bit <= 0;
    end
    else begin
        main_state <= main_next;
        random_bit <= ~random_bit; //매 클럭마다 0 - 1 - 0 - 1로 값이 바뀜. 이 값을 참고함으로써 랜덤으로 2-way 캐시라인중 어느 하나를 선택할 수 있음.
        if(cpu_tag_save) begin
            cpu_I_tag[14:0] <= CPU_addr[27:13];
        end

        if(burst_counter_plus) begin
            burst_counter[3:0] <= burst_counter + 1;
        end
        if(burst_counter_reset) begin
            burst_counter[3:0] <= 0;
        end

        if(word_buffer_wen_0) begin
            word_buffer[0][31:0] <= word_buffer_wdata[0][31:0];
        end
        if(word_buffer_wen_1) begin
            word_buffer[1][31:0] <= word_buffer_wdata[1][31:0];
        end
        if(word_buffer_wen_2) begin
            word_buffer[2][31:0] <= word_buffer_wdata[2][31:0];
        end
        if(word_buffer_wen_3) begin
            word_buffer[3][31:0] <= word_buffer_wdata[3][31:0];
        end
    end
end

endmodule
