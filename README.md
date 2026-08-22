# Overview
![PPU 블록도](./imagefile/ppu_flowchart.png)

비주얼 노벨 장르 게임 구동을 목적으로 하는 게임 시스템의 PPU(Pixel Processing Unit)입니다. 320 * 240 픽셀 화면에 255개의 팔래트를 지원하며 외부 메모리에 RLC(Run Length Coding) 압축 저장된 10개의 레이어 이미지를 실시간 합성, 알파블랜딩, 폰트 합성하여 화면을 출력합니다. 


## System Features
* 클럭 속도: 
* 픽셀 수: 320 * 240
* 레이어 수: 10개 (400 * 320 2개, 320 * 240  2개, 160 * 240  5개, 320 *  120 1개 지원)
* 팔래트 수: 255개
* 10단계 레이어 알파 블랜딩 지원
* 한글, ASCII 폰트 랜더링 지원
* 커스텀 8 * 16 단색 타일 지원
* RLC(Run Length Coding) 압축 지원

## 256 MiB Memory Map
- **Total Address Space**: 256 MiB (`0x0000_0000` ~ `0x0FFF_FFFF`)
- **CPU Interface**: PicoRV32 (32-bit Word Aligned)
- **Top 4-bit Address**: Fixed to `4'b0000` (`ADDR[31:28] = 0x0`)

| Start Address | End Address | Allocated Size | Target Device | HW Type | Description |
| :--- | :--- | :---: | :--- | :--- | :--- |
| `0x0000_0000` | `0x0FEF_FFFF` | 255 MiB | DDR3 MEMORY | - | 외부에 연결된 256 MiB DDR3 메인 메모리 |
| `0x0FF0_0000` | `0x0FF0_03FF` | 1 KiB | PPU Control Regs | Register File | PPU 제어/좌표 레지스터 (최대 256개 32-bit 레지스터 수용) |
| `0x0FF0_0400` | `0x0FF0_07FF` | 1 KiB | RGB Lookup Table | Distribute RAM | 256 × 18-bit Color Palette Write Port |
| `0x0FF0_0800` | `0x0FF0_0FFF` | 2 KiB | *Reserved* | - | - |
| `0x0FF0_1000` | `0x0FF0_1FFF` | 4 KiB | Font Map (BRAM 14) | True Dual BRAM | 화면 텍스트 타일 배치 맵 (1024 × 32-bit) |
| `0x0FF0_2000` | `0x0FF0_2FFF` | 4 KiB | Font BRAM 4 | True Dual BRAM | 한글 초성 1~6벌 글리프 비트맵 (1024 × 32-bit) |
| `0x0FF0_3000` | `0x0FF0_3FFF` | 4 KiB | Font BRAM 5 | True Dual BRAM | 한글 초성 7~8벌 및 ASCII 글리프 (1024 × 32-bit) |
| `0x0FF0_4000` | `0x0FF0_4FFF` | 4 KiB | Font BRAM 6 | True Dual BRAM | 한글 중성 1~4벌 글리프 비트맵 (1024 × 32-bit) |
| `0x0FF0_5000` | `0x0FF0_5FFF` | 4 KiB | Font BRAM 13 | True Dual BRAM | 한글 종성 1~4벌 글리프 비트맵 (1024 × 32-bit) |
| `0x0FF0_6000` | `0x0FFF_FFFF` | 1000 KiB | *Reserved* | - | - |

## PPU Control Register Map Specification

- **CPU Bus Interface**: 32-bit Word Aligned
- **Address Space Size**: 164 Bytes (`0x000` ~ `0x0A0`)
- **Total Registers**: 41 Words (32-bit × 41)
- **Registers Base Address**: 
- **Base Offset Range**: `0x000` ~ `0x0A0`

### Register Memory Map Summary

| Offset | Register Name | Description | Access | Reset Value |
| :--- | :--- | :--- | :---: | :---: |
| `0x000` | `BG1_ADDR` | Background Layer 1 Base Address | R/W | `0x0000_0000` |
| `0x004` | `BG2_ADDR` | Background Layer 2 Base Address | R/W | `0x0000_0000` |
| `0x008` | `CHR1_ADDR` | Character Layer 1 Base Address | R/W | `0x0000_0000` |
| `0x00C` | `CHR2_ADDR` | Character Layer 2 Base Address | R/W | `0x0000_0000` |
| `0x010` | `CHR3_ADDR` | Character Layer 3 Base Address | R/W | `0x0000_0000` |
| `0x014` | `CHR4_ADDR` | Character Layer 4 Base Address | R/W | `0x0000_0000` |
| `0x018` | `SCR_ADDR` | Script Layer Base Address | R/W | `0x0000_0000` |
| `0x01C` | `STAT_ADDR` | Status Layer Base Address | R/W | `0x0000_0000` |
| `0x020` | `UNI1_ADDR` | Universal Layer 1 Base Address | R/W | `0x0000_0000` |
| `0x024` | `UNI2_ADDR` | Universal Layer 2 Base Address | R/W | `0x0000_0000` |
| `0x028` | `LUT_CACHE_PIX` | General LUT Cache Pixels (1~4) | R/W | `0x0000_0000` |
| `0x02C` | `BG1_POS` | Background 1 SCX / SCY | R/W | `0x0000_0000` |
| `0x030` | `BG1_ATTR` | Background 1 Alpha / Z-order | R/W | `0x0000_0000` |
| `0x034` | `BG2_POS` | Background 2 SCX / SCY | R/W | `0x0000_0000` |
| `0x038` | `BG2_ATTR` | Background 2 Alpha / Z-order | R/W | `0x0000_0000` |
| `0x03C` | `CHR1_POS` | Character 1 WX / WY | R/W | `0x0000_0000` |
| `0x040` | `CHR1_ATTR` | Character 1 Alpha / Z-order | R/W | `0x0000_0000` |
| `0x044` | `CHR2_POS` | Character 2 WX / WY | R/W | `0x0000_0000` |
| `0x048` | `CHR2_ATTR` | Character 2 Alpha / Z-order | R/W | `0x0000_0000` |
| `0x04C` | `CHR3_POS` | Character 3 WX / WY | R/W | `0x0000_0000` |
| `0x050` | `CHR3_ATTR` | Character 3 Alpha / Z-order | R/W | `0x0000_0000` |
| `0x054` | `CHR4_POS` | Character 4 WX / WY | R/W | `0x0000_0000` |
| `0x058` | `CHR4_ATTR` | Character 4 Alpha / Z-order | R/W | `0x0000_0000` |
| `0x05C` | `SCR_POS` | Script Layer WX / WY | R/W | `0x0000_0000` |
| `0x060` | `SCR_ATTR` | Script Layer Alpha / Z-order | R/W | `0x0000_0000` |
| `0x064` | `STAT_POS` | Status Layer WX / WY | R/W | `0x0000_0000` |
| `0x068` | `STAT_ATTR` | Status Layer Alpha / Z-order | R/W | `0x0000_0000` |
| `0x06C` | `UNI1_POS` | Universal Layer 1 WX / WY | R/W | `0x0000_0000` |
| `0x070` | `UNI1_ATTR` | Universal Layer 1 Alpha / Z-order | R/W | `0x0000_0000` |
| `0x074` | `UNI2_POS` | Universal Layer 2 WX / WY | R/W | `0x0000_0000` |
| `0x078` | `UNI2_ATTR` | Universal Layer 2 Alpha / Z-order | R/W | `0x0000_0000` |
| `0x07C` | `LINE_CFG_0_1` | Line 0 & 1 Config (16b + 16b) | R/W | `0x0000_0000` |
| `0x080` | `LINE_CFG_2_3` | Line 2 & 3 Config (16b + 16b) | R/W | `0x0000_0000` |
| `0x084` | `LINE_CFG_4_5` | Line 4 & 5 Config (16b + 16b) | R/W | `0x0000_0000` |
| `0x088` | `LINE_CFG_6_7` | Line 6 & 7 Config (16b + 16b) | R/W | `0x0000_0000` |
| `0x08C` | `LINE_CFG_8_9` | Line 8 & 9 Config (16b + 16b) | R/W | `0x0000_0000` |
| `0x090` | `LINE_CFG_10_11` | Line 10 & 11 Config (16b + 16b) | R/W | `0x0000_0000` |
| `0x094` | `LINE_CFG_12_13` | Line 12 & 13 Config (16b + 16b) | R/W | `0x0000_0000` |
| `0x098` | `LINE_CFG_14` | Line 14 Config (16b + Reserved) | R/W | `0x0000_0000` |
| `0x09C` | `LINE_ALPHA_0_7` | Line 0 ~ 7 Alpha (4b × 8) | R/W | `0x0000_0000` |
| `0x0A0` | `LINE_ALPHA_8_14` | Line 8 ~ 14 Alpha (4b × 7) | R/W | `0x0000_0000` |

---

### Register Bit Fields

#### Group 1: Layer Base Addresses (`0x000` ~ `0x024`)
- **`[31:0]` DDR3_ADDR**: 레이어 프레임 버퍼의 DDR3 메모리 시작 주소 (32-bit). 

*Note*: 32비트 주소의 상위 4비트는 절대 사용해서는 안됩니다. 하위 28바이트만 주소에 사용됩니다(256MiB).

#### Group 2: LUT Cache Pixel (`0x028`)
- **`[31:24]` CACHE4_PIXEL**: General RGB Cache 4 (8-bit)
- **`[23:16]` CACHE3_PIXEL**: General RGB Cache 3 (8-bit)
- **`[15:8]` CACHE2_PIXEL**: General RGB Cache 2 (8-bit)
- **`[7:0]` CACHE1_PIXEL**: General RGB Cache 1 (8-bit)

#### Group 3: Layer Coordinates & Attributes (`0x02C` ~ `0x078`)
- **`*_POS` Registers (`0x02C`, `0x034`, ...)**:
  - **`[31:16]` Y_POS**: SCY / WY (16-bit Signed Integer)
  - **`[15:0]` X_POS**: SCX / WX (16-bit Signed Integer)
- **`*_ATTR` Registers (`0x030`, `0x038`, ...)**:
  - **`[31:16]` Reserved**: Read as 0
  - **`[15:8]` ALPHA**: Layer Alpha Blending value (8-bit, 0~10)
  - **`[7:0]` Z_ORDER**: Layer Priority / Z-depth (8-bit, 0~10)

#### Group 4: Font Line Configuration (`0x07C` ~ `0x098`)
각 라인은 **16비트** 구조(`[15]` Reserved 1b + `[14:9]` VisNum 6b + `[8:0]` RGB 9b)로 정렬됩니다.
- **`LINE_CFG_2N_2N+1` (`0x07C` ~ `0x094`)**:
  - **`[31:16]` Line (2N+1) Config (홀수 라인)**:
    - `[31]` Reserved (0)
    - `[30:25]` LINE_(2N+1)_VIS_NUM (6-bit, 0~40)
    - `[24:16]` LINE_(2N+1)_RGB (9-bit: R3 G3 B3)
  - **`[15:0]` Line (2N) Config (짝수 라인)**:
    - `[15]` Reserved (0)
    - `[14:9]` LINE_(2N)_VIS_NUM (6-bit, 0~40)
    - `[8:0]` LINE_(2N)_RGB (9-bit: R3 G3 B3)
- **`LINE_CFG_14` (`0x098`)**:
  - **`[31:16]` Reserved**: Read as 0
  - **`[15:0]` Line 14 Config**:
    - `[15]` Reserved (0)
    - `[14:9]` LINE_14_VIS_NUM (6-bit, 0~40)
    - `[8:0]` LINE_14_RGB (9-bit: R3 G3 B3)

*Note*: 각 Line의 Visible_Number값은 0~40사이의 값만 저장해야 합니다.

#### Group 5: Font Line Alpha Registers (`0x09C`, `0x0A0`)
각 라인의 Alpha 값을 **4비트(0~15)** 단위로 저장합니다. 그렇지만 각 Line의 Alpha값은 0 ~ 3 값만 저장해야 합니다.
- **`LINE_ALPHA_0_7` (`0x09C`)**:
  - `[31:28]` L7_ALPHA (4-bit, 0~3)
  - `[27:24]` L6_ALPHA (4-bit, 0~3)
  - `[23:20]` L5_ALPHA (4-bit, 0~3)
  - `[19:16]` L4_ALPHA (4-bit, 0~3)
  - `[15:12]` L3_ALPHA (4-bit, 0~3)
  - `[11:8]` L2_ALPHA (4-bit, 0~3)
  - `[7:4]` L1_ALPHA (4-bit, 0~3)
  - `[3:0]` L0_ALPHA (4-bit, 0~3)
- **`LINE_ALPHA_8_14` (`0x0A0`)**:
  - `[31:28]` Reserved (0)
  - `[27:24]` L14_ALPHA (4-bit, 0~3)
  - `[23:20]` L13_ALPHA (4-bit, 0~3)
  - `[19:16]` L12_ALPHA (4-bit, 0~3)
  - `[15:12]` L11_ALPHA (4-bit, 0~3)
  - `[11:8]` L10_ALPHA (4-bit, 0~3)
  - `[7:4]` L9_ALPHA (4-bit, 0~3)
  - `[3:0]` L8_ALPHA (4-bit, 0~3)

## BRAM overview
### BRAM 4 (True Dual-Port)
|주소 범위(십진수)  |데이터 크기|데이터 항목       |비고|
| :--- | :--- | :--- | :--- |
|0 - 151            |32 bits    |한글 폰트 초성 1벌||
|152 - 303          |32 bits    |한글 폰트 초성 2벌||
|304 - 455          |32 bits    |한글 폰트 초성 3벌||
|456 - 607          |32 bits    |한글 폰트 초성 4벌||
|608 - 759          |32 bits    |한글 폰트 초성 5벌||
|760 - 911          |32 bits    |한글 폰트 초성 6벌||
|912 - 1023         |32 bits    |비어 있음         ||

### BRAM 5 (True Dual-Port)
|주소 범위(십진수)  |데이터 크기|데이터 항목       |비고|
| :--- | :--- | :--- | :--- |
|0 - 151            |32 bits    |한글 폰트 초성 7벌||
|152 - 303          |32 bits    |한글 폰트 초성 8벌||
|304 - 687          |32 bits    |ASCII 문자 폰트   ||
|688 - 1023         |32 bits    |Custom Tile 비트맵||

### BRAM 6 (True Dual-Port)
|주소 범위(십진수)  |데이터 크기|데이터 항목       |비고|
| :--- | :--- | :--- | :--- |
|0 - 167            |32 bits    |한글 폰트 중성 1벌||
|168 - 335          |32 bits    |한글 폰트 중성 2벌||
|336 - 503          |32 bits    |한글 폰트 중성 3벌||
|504 - 671          |32 bits    |한글 폰트 중성 4벌||
|672 - 1023         |32 bits    |Custom Tile 비트맵||

### BRAM 7 (Simple Dual-Port)
|주소 범위(십진수)  |데이터 크기|데이터 항목                          |비고|
| :--- | :--- | :--- | :--- |
|0 - 127            |64 bits    |Universal Layer1 Compressed Data FIFO|외부 메모리에서 읽어온 값 저장|
|128 - 255          |64 bits    |Universal Layer2 Compressed Data FIFO||
|256 - 383          |64 bits    |Script Layer Compressed Data FIFO    ||
|384 - 511          |64 bits    |Status Layer Compressed Data FIFO    ||

### BRAM 8 (Simple Dual-Port)
|주소 범위(십진수)  |데이터 크기|데이터 항목                          |비고|
| :--- | :--- | :--- | :--- |
|0 - 127            |64 bits    |Character Layer1 Compressed Data FIFO|외부 메모리에서 읽어온 값 저장|
|128 - 255          |64 bits    |Character Layer2 Compressed Data FIFO||
|256 - 383          |64 bits    |Character Layer3 Compressed Data FIFO||
|384 - 511          |64 bits    |Character Layer4 Compressed Data FIFO||

### BRAM 9 (Simple Dual-Port)
|주소 범위(십진수)  |데이터 크기|데이터 항목                           |비고|
| :--- | :--- | :--- | :--- |
|0 - 255            |64 bits    |Background Layer1 Compressed Data FIFO|외부 메모리에서 읽어온 값 저장|
|256 - 511          |64 bits    |Background Layer2 Compressed Data FIFO||

### BRAM 10 (Simple Dual-Port)
|주소 범위(십진수)  |데이터 크기|데이터 항목                            |비고|
| :--- | :--- | :--- | :--- |
|0 - 127            |64 bits    |Universal Layer1 Decompressed Data FIFO|RLC 압축해제 한 8비트 픽셀 값 8개씩 저장|
|128 - 255          |64 bits    |Universal Layer2 Decompressed Data FIFO||
|256 - 383          |64 bits    |Script Layer Decompressed Data FIFO    ||
|384 - 511          |64 bits    |Status Layer Decompressed Data FIFO    ||

### BRAM 11 (Simple Dual-Port)
|주소 범위(십진수)  |데이터 크기|데이터 항목                            |비고|
| :--- | :--- | :--- | :--- |
|0 - 127            |64 bits    |Character Layer1 Decompressed Data FIFO|RLC 압축해제 한 8비트 픽셀 값 8개씩 저장|
|128 - 255          |64 bits    |Character Layer2 Decompressed Data FIFO||
|256 - 383          |64 bits    |Character Layer3 Decompressed Data FIFO||
|384 - 511          |64 bits    |Character Layer4 Decompressed Data FIFO||

### BRAM 12 (Simple Dual-Port)
|주소 범위(십진수)  |데이터 크기|데이터 항목                             |비고|
| :--- | :--- | :--- | :--- |
|0 - 255            |64 bits    |Background Layer1 Decompressed Data FIFO|RLC 압축해제 한 8비트 픽셀 값 8개씩 저장|
|256 - 511          |64 bits    |Background Layer2 Decompressed Data FIFO||

### BRAM 13 (True Dual-Port)
|주소 범위(십진수)  |데이터 크기|데이터 항목       |비고|
| :--- | :--- | :--- | :--- |
|0 - 223            |32 bits    |한글 폰트 종성 1벌||
|224 - 447          |32 bits    |한글 폰트 종성 2벌||
|448 - 671          |32 bits    |한글 폰트 종성 3벌||
|672 - 895          |32 bits    |한글 폰트 종성 4벌||
|896 - 1023         |32 bits    |비어 있음         ||

### BRAM 14 (True Dual-Port)
|주소 범위(십진수)  |데이터 크기|데이터 항목       |비고|
| :--- | :--- | :--- | :--- |
|0 - 19           |32 bits    |Line0 Font Map|한 Line 당 최대 40개의 UTF-16 코드를 작성 가능함.|
|20 - 39          |32 bits    |Line1 Font Map||
|40 - 59          |32 bits    |Line2 Font Map||
|60 - 79          |32 bits    |Line3 Font Map||
|80 - 89          |32 bits    |Line4 Font Map||
|100 - 119        |32 bits    |Line5 Font Map||
|120 - 139        |32 bits    |Line6 Font Map||
|140 - 159        |32 bits    |Line7 Font Map||
|160 - 179        |32 bits    |Line8 Font Map||
|180 - 199        |32 bits    |Line9 Font Map||
|200 - 219        |32 bits    |Line10 Font Map||
|220 - 239        |32 bits    |Line11 Font Map||
|240 - 259        |32 bits    |Line12 Font Map||
|260 - 279        |32 bits    |Line13 Font Map||
|280 - 299        |32 bits    |Line14 Font Map||
|300 - 1023       |32 bits    |비어 있음      ||

## Sub-Module Specification

### Compressed_Data_FIFO.sv
10개 레이어의 압축 데이터(Compressed Data)를 외부 메모리 인터페이스로부터 전달받아 라운드 로빈(Round-Robin) 방식으로 읽어와 레이어별 FIFO에 저장하는 공유 FIFO 모듈입니다. 

#### External Memory Interface

| Signal Name | I/O | Width | Description |
| :--- | :---: | :---: | :--- |
| `EMEM_valid` | Output | 1 | **Request Valid**: 메모리 읽기/쓰기 요청 신호. 단일 또는 버스트 요청 시 Active-High를 유지하며, `EMEM_ready` 신호 수신 시 burst 일지라도 바로 Low(Deassert)로 변환함. |
| `EMEM_ready` | Input | 1 | **Response Ready**: 메모리 컨트롤러의 핸드셰이크 응답 신호. 읽기 요청 시 `EMEM_rdata` 데이터와 함께 Active-High로 입력됨. |
| `EMEM_addr` | Output | 32 | **Memory Address**: 읽기/쓰기 요청 시작 주소 (Byte-Addressable). |
| `EMEM_wdata` | Output | 32 | **Write Data**: 메모리에 쓸 32-bit 데이터. |
| `EMEM_wstrb` | Output | 4 | **Write Strobe**: 쓰기 바이트 인에이블 신호 (Bit 0: Byte 0 ~ Bit 3: Byte 3). 읽기일때는 4'b0000으로 설정.|
| `EMEM_rdata` | Input | 32 | **Read Data**: 메모리로부터 읽어온 32-bit 데이터. (`EMEM_ready == 1`일 때 유효) |
| `EMEM_burst_en` | Output | 1 | **Burst Enable**: 버스트 전송 요청 신호. `1`일 경우 단일 전송이 아닌 `EMEM_burst_len`에 설정된 크기만큼 연속 트랜잭션을 실행함. |
| `EMEM_burst_len` | Output | 8 | **Burst Length**: 연속으로 읽거나 쓸 데이터의 개수 - 1. (예: `8'd3` 설정 시 4번 읽기 수행. 총 128 bits) |

**Note**: Burst Mode를 사용할 경우 내부적인 Counter를 이용해서 EMEM_ready가 1클럭 활성화 되는 순간을 카운트 해야함. EMEM_valid는 하나의 EMEM_ready가 온 순간 바로 Low로 꺼줘야 함. 

#### 외부 메모리 읽기 알고리즘(Round-Robin)

![next_should_read_layer 구조](./imagefile/Com_FIFO_shouldread.png)

| Signal Name | Bit Width | Type | Description |
| :--- | :---: | :---: | :--- |
| `urgent_req` | 10-bit (`[9:0]`) | **Combinational** | 긴급(Urgent) 읽기 요청 신호. 해당 레이어의 Compressed Data FIFO의 데이터가 25%이하인 경우 해당 레이어의 비트가 1로 설정됨.|
| `basic_req` | 10-bit (`[9:0]`) | **Combinational** | 기본(Basic) 읽기 요청 신호. 10개 레이어 각각의 일반 요청 유무를 나타냄. |
| `valid_req` | 10-bit (`[9:0]`) | **Combinational** | `urgent_req[9:0] == 0`일 경우 `basic_req`, 그렇지 않을 경우 `urgent_req`로 선택된 유효 요청 신호. |
| `last_read_basic` | 10-bit (`[9:0]`) | **Sequential (FF)** | BASIC 모드에서 과거에 읽기를 수행한 레이어 이력을 저장하는 마스크 신호. |
| `last_read_urgent` | 10-bit (`[9:0]`) | **Sequential (FF)** | URGENT 모드에서 과거에 읽기를 수행한 레이어 이력을 저장하는 마스크 신호. |
| `masked_req` | 10-bit (`[9:0]`) | **Combinational** | 이전 읽기 이력을 제외(Masking)하여 라운드 로빈 기회를 보장하는 요청 신호.<br>• BASIC: `valid_req & ~last_read_basic`<br>• URGENT: `valid_req & ~last_read_urgent` |
| `next_should_read_layer` | 10-bit (`[9:0]`) | **Combinational** | `masked_req`에서 LSB(가장 하위 비트)부터 검출한 첫 번째 `1`의 위치를 One-hot 형태로 출력하는 최종 선택 신호 (10비트 중 1개 비트만 `1`로 설정). |

**Note**: `(valid_req[9:0] != 10'b0 ) && (masked_req[9:0] == 10'b0)`이면 `last_read_urgent`, `last_read_basic`은 초기화 됨.

#### BRAM 시분할 공유 구조
* 10개의 레이어 FIFO는 **BRAM 3개**에 분할하여 저장됩니다.
* **4개 레이어 공유 BRAM**: 4조각으로 시분할 접근 (4클럭 주기 중 1클럭 할당)
* **2개 레이어 공유 BRAM**: 2조각으로 시분할 접근 (2클럭 주기 중 1클럭 할당)

#### Interface Specification (Background Layer 1 기준 예시)

| Signal Name | I/O | Width | Description |
| :--- | :---: | :---: | :--- |
| `Background_Layer1_ena` | Input | 1 | **FIFO Fill Enable**: Active-High 유지 시 외부 메모리에 데이터 채움 요청 유지. Decompresser가 모든 데이터를 인출했을 때 `0`으로 내려 메모리 요청 중단. |
| `Background_Layer1_dequeue` | Input | 1 | **Read Pop**: FIFO 데이터 인출 요청. (`Background_Layer1_r_master == 1`일 때만 활성화 가능) |
| `Background_Layer1_r_master` | Output | 1 | **Time-slot Grant**: BRAM 접근 시분할 타이밍 신호. 매 클럭 증가하는 내부 카운터에 연결됨. (Background Layer 2와 BRAM 9을 공유하므로 2클럭에 1회 High) |
| `Background_Layer1_data` | Output | 64 | **FIFO Read Data**: 64-bit 압축 데이터 버스. |
| `Background_Layer1_count` | Output | 9 | **FIFO Entry Count**: 현재 FIFO에 저장된 데이터 개수. (`count == 0`일 때 Dequeue 금지) |

---

### Decompresser.sv
`Decompresser.sv` 모듈은 10개의 레이어에 1개씩 독립적으로 할당됩니다. 해당 레이어의 `Compressed Data FIFO`에서 64-bit 데이터를 읽어와 RLC(Run-Length Coding) 디코딩을 수행한 후 `Decompressed Data FIFO`에 픽셀 데이터를 저장합니다.

#### RLC (Run-Length Coding) Decoding Mechanism
외부 메모리에 저장된 압축 스트림은 **Control Byte**와 **Pixel Byte**로 구성되며, 항상 Control Byte로 시작합니다.

| Control Byte MSB (`[7]`) | Control Byte Payload (`[6:0]`) | Description |
| :---: | :---: | :--- |
| **`1`** | `N` (1~127) | **Run Mode**: 후속 1개 픽셀 바이트를 `N`회 반복 출력 |
| **`0`** | `N` (1~127) | **Literal Mode**: 후속 `N`개의 연속된 비반복 픽셀 바이트를 그대로 출력 |
| **`0` / `1`** | `000_0000` | **EOP (End of Packet)**: `8'h00` 또는 `8'h80`은 프레임 데이터의 끝을 의미 |

##### 디코딩 예시
* **Input Stream**: `8'b10000011`(Control Byte) --> `8'b11111111`(Pixel Byte) --> `8'b00000001`(Control Byte) --> `8'b00001111`(Pixel Byte) --> `8'b00000000`(EOP)
* **Decoded Output**: `8'b11111111` --> `8'b11111111` --> `8'b11111111` --> `8'b00001111`

#### RLE 방식 채택 배경 (Visual Novel 특성 반영)
* **Character Layers (160×240)**: 화면 중앙의 캐릭터 외 대다수 영역이 투명 픽셀(`0x00`)로 이루어져 있어 높은 압축률을 얻을 수 있습니다.
* **Script Layer (320×120)**: 텍스트 가독성을 위한 배경 영역이 대부분 단색으로 채워지므로 연속된 동일 픽셀이 자주 반복됩니다.
* **Background Layer (400×320)**: 가로로 픽셀이 여러개 반복되는 경우가 많은 단순한 배경이라면 압축률이 높지만 매우 복잡한 배경은 압축률이 낮을 수 있습니다.
* **8 bits Pixel Effect**: 255개의 색만 저장할 수 있으므로 특정 색을 표현 시 동일한 픽셀을 사용할 가능성이 높습니다.
* **시스템 효과**: 메모리 사용량을 대폭 절감하고, 10개 레이어를 동시에 읽어야 하는 `Compressed_Data_FIFO.sv` 및 외부 메모리 대역폭 부담을 줄여줍니다. 
---

### RGB_Converter.sv
최대 12개의 입력 포트로부터 8 bits pixel 데이터를 입력받아 미리 저장된 Lookup Table과 캐시 데이터를 이용하여 18 bits RGB 값으로 변환해주는 모듈입니다. 총 255가지의 RGB 변환 데이터는 FPGA 내부의 LUT으로 구성된 Asynchronous Distributed RAM에 저장되고 요청에 따라 접근하게 됩니다. CPU는 프레임 생성 전 사전에 4개의 범용 캐시의 내용을 지정할 수 있습니다. 또한 각각의 Request에 대응하는 하나의 Exclusive Cache는 연속된 픽셀의 RGB 변환 요청을 효율적으로 처리하기 위해 생성했습니다.

![RGB_Converter_diagram2](./imagefile/RGB_Converter_diagram2.png)

#### Pixel-to-RGB Handshake Interface Specification (Request 1 기준 예시)

| Signal Name | I/O | Bit Width | Description |
| :--- | :---: | :---: | :--- |
| `Req1_ena` | Input | 1 | **Request Enable**: RGB 변환 요청 신호. `Req1_pixel` 데이터와 함께 인가하여 변환을 요청하며, 완료 시 `Req1_end` 응답을 수신함. |
| `Req1_pixel` | Input | 8 | **Pixel Index Data**: RGB로 변환할 8-bit 픽셀 인덱스 값. |
| `Req1_RGB` | Output | 18 | **Converted RGB Data**: 변환이 완료된 18-bit RGB 픽셀 데이터. |
| `Req1_trans` | Output | 1 | **Transparent Flag**: 투명 픽셀을 의미하는 `Req1_pixel == 8'h00` 이면 `1`로 설정되어 해당 픽셀이 투명 처리됨을 알림. |
| `Req1_end` | Output | 1 | **Handshake End**: 변환 처리 완료 응답 신호. 투명 픽셀(`Req1_pixel == 8'h00`)인 경우 예외 로직을 통해 즉시 `1`을 출력하고 마무리함. |

#### Distributed RAM (18×256 Bit, 1W2R Async) Interface Specification

| Port | Signal Name | I/O | Bit Width | Description |
| :---: | :--- | :---: | :---: | :--- |
| **Port A**<br>(Write) | `LUT_we` | Output | 1 | 메모리 쓰기 인에이블 (Write Enable). Active-High 시 `LUT_addr_w` 위치에 `LUT_data_in` 기록. |
| | `LUT_addr_w` | Output | 8 | 쓰기 메모리 주소 (`0 ~ 255`). |
| | `LUT_data_in` | Output | 18 | 메모리에 기록할 18-bit 픽셀 데이터. |
| **Port B**<br>(Read 1) | `LUT_addr_r1` | Output | 8 | 읽기 포트 1 주소 (`0 ~ 255`). |
| | `LUT_data_out1` | Input | 18 | 읽기 포트 1 출력 데이터. 비동기 메모리 특성상 `LUT_addr_r1` 입력 즉시 조합 논리로 출력. |
| **Port C**<br>(Read 2) | `LUT_addr_r2` | Output | 8 | 읽기 포트 2 주소 (`0 ~ 255`). |
| | `LUT_data_out2` | Input | 18 | 읽기 포트 2 출력 데이터. 비동기 메모리 특성상 `LUT_addr_r2` 입력 즉시 조합 논리로 출력. |

#### Distribute RAM Arbiter 알고리즘

![RGB_Converter_diagram2](./imagefile/RGB_Converter_roundrobin.png)

| Signal Name | Bit Width | Type | Description |
| :--- | :---: | :---: | :--- |
| `total_req` | 12-bit (`[11:0]`) | **Combinational** | 12개의 읽기 요청(Req1~Req12)에 대한 **Cache Miss 상태**를 나타내는 신호. 요청이 활성화(`Req_ena`)되었고, 투명 픽셀(`Req_pixel == 0`)이 아니며, 범용 캐시 4개와 전용 독점 캐시 모두에서 매칭되지 않았을 때 해당 비트가 `1`로 설정됨. (RAM 읽기 접근이 필요한 최종 유효 요청을 의미) |
| `random_counter_0_1` | 1-bit | **Sequential (FF)** | 매 클럭마다 `0 -> 1 -> 0`으로 토글(Toggle)되는 카운터. 읽기 포트를 공유하기 위해 포트당 6개의 요청을 3개씩 두 그룹으로 나누는 **시분할(TDM) 선택 신호**. (예: `0`일 때는 Req1 ~ 3 그룹 선택, `1`일 때는 Req4 ~ 6 그룹 선택) |
| `random_counter_0_2` | 2-bit (`[1:0]`) | **Sequential (FF)** | 매 클럭마다 `0 -> 1 -> 2` 순서로 반복 순환하는 카운터. `random_counter_0_1`에 의해 선택된 3개의 요청 그룹 내에서, 어떤 요청을 먼저 RAM에서 읽어올지 **라운드 로빈 형태의 우선순위를 결정**함. |

---
### Pixel_Reader.sv
---
### Pixel_Processer.sv
---
## Font_Processer.sv
---
## Test
---



