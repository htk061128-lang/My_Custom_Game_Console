# Overview
![PPU 블록도](./imagefile/ppu_flowchart.png)

비주얼 노벨 장르 게임 구동을 목적으로 하는 게임 시스템의 PPU(Pixel Processing Unit)입니다. 320 * 240 픽셀 화면에 프레임 당 255개 색을 지원하며 외부 메모리에 RLC(Run Length Coding) 압축 저장된 10개의 레이어 이미지를 실시간 합성, 알파블랜딩, 폰트 합성하여 화면을 출력합니다. 


## System Features
* 클럭 속도: 
* 픽셀 수: 320 * 240
* 레이어 수: 10개 (400 * 320 2개, 320 * 240  2개, 160 * 240  5개, 320 *  120 1개 지원)
* 팔래트 수: 255개
* 10단계 레이어 알파 블랜딩 지원
* 한글, ASCII 폰트 랜더링 지원
* 커스텀 8 * 16 단색 타일 지원
* RLC(Run Length Coding) 압축 지원

## Resister Map
Background_Layer1_Address 
Background_Layer2_Address 
Character_Layer1_Address 
Character_Layer2_Address 
Character_Layer3_Address 
Character_Layer4_Address
Script_Layer_Address
Status_Layer_Address
Universal_Layer1_Address
Universal_Layer2_Address
CPU_LUT_Cache1_pixel
CPU_LUT_Cache2_pixel
CPU_LUT_Cache3_pixel
CPU_LUT_Cache4_pixel
Background1_SCX 
Background1_SCY 
Background1_a
Background1_z 
Background2_SCX 
Background2_SCY 
Background2_a
Background2_z 
Character1_WX
Character1_WY 
Character1_a 
Character1_z 
Character2_WX
Character2_WY 
Character2_a 
Character2_z 
Character3_WX
Character3_WY 
Character3_a 
Character3_z 
Character4_WX
Character4_WY 
Character4_a 
Character4_z 
Script_WX 
Script_WY 
Script_a 
Script_z
Status_WX 
Status_WY 
Status_a 
Status_z 
Universal1_WX 
Universal1_WY 
Universal1_a 
Universal1_z 
Universal2_WX 
Universal2_WY 
Universal2_a 
Universal2_z 
Line0_visible_number 
Line0_font_RGB_9bit
Line0_a
Line1_visible_number 
Line1_font_RGB_9bit
Line1_a
Line2_visible_number 
Line2_font_RGB_9bit
Line2_a
Line3_visible_number 
Line3_font_RGB_9bit
Line3_a
Line4_visible_number 
Line4_font_RGB_9bit
Line4_a
Line5_visible_number 
Line5_font_RGB_9bit
Line5_a
Line6_visible_number 
Line6_font_RGB_9bit
Line6_a
Line7_visible_number 
Line7_font_RGB_9bit
Line7_a
Line8_visible_number 
Line8_font_RGB_9bit
Line8_a
Line9_visible_number 
Line9_font_RGB_9bit
Line9_a
Line10_visible_number 
Line10_font_RGB_9bit
Line10_a
Line11_visible_number 
Line11_font_RGB_9bit
Line11_a
Line12_visible_number 
Line12_font_RGB_9bit
Line12_a
Line13_visible_number 
Line13_font_RGB_9bit
Line13_a
Line14_visible_number 
Line14_font_RGB_9bit
Line14_a

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
## FIFO
### Compressed Data FIFO
10개의 레이어는 각자의 Compressed Data FIFO를 가집니다. 외부 메모리 인터페이스와 통신하며 10개의 레이어의 데이터를 라운드 로빈 방식으로 읽어와 각 레이어의 FIFO에 저장합니다. 각각의 FIFO는 BRAM 4, BRAM 5, BRAM 6에 나눠져서 저장되며 BRAM 한개를 4개의 레이어가 공유하는 경우에는 4조각으로, 2개의 레이어가 공유하는 경우에는 2조각으로 시분할되어 접근할 수 있습니다.

다음은 이 FIFO의 인터페이스 예시입니다.
    * input Background_Layer1_ena, 
    * input Background_Layer1_dequeue, 
    * output Background_Layer1_r_master, 
    * output reg [63:0] Background_Layer1_data,
    * output [8:0] Background_Layer1_count,

**Background_Layer1_ena** -  신호가 1로 유지되면 Compressed_Data_FIFO.sv 모듈 내부에서 해당 FIFO를 채워달라는 요청이 유지되며 Background Layer1의 Decompresser.sv 모듈이 해당 FIFO에서 모든 데이터를 전부 빼냈을 경우에 이 신호를 0으로 내려서 외부 메모리 읽기 요청을 중단합니다. 

**Background_Layer1_r_master** - 이 신호가 1일 타이밍에만 Background_Layer1_dequeue 신호를 활성화 해서 FIFO에서 데이터를 읽어올 수 있습니다. 이 신호는 매 클럭 증가하는 카운터에 연결되어 있으며 BRAM 시분할을 구현하기 위해 존재합니다. Background_Layer1은 BRAM 9를 Background_Layer2의 Compressed Data FIFO와 공유하므로 2클럭에 한번씩 이 신호가 1로 변할 것입니다.

**Background_Layer1_count** - 이 신호는 해당 FIFO에 들어있는 데이터의 개수를 나타냅니다. 만약 count 값이 0이라면 FIFO가 비어있다는 의미이므로 dequeue 요청을 보내서는 안됩니다. 

### Decompressed Data FIFO
Decompresser.sv 모듈은 10개의 레이어에 하나씩 할당되며 해당 레이어의 Compressed Data FIFO에서 데이터를 읽어와서 RLC 디코딩하여 Decompressed Data FIFO에 저장합니다. 

각각의 픽셀은 8비트로 이루어져 있으며 압축된 데이터는 제어 바이트와 픽셀 바이트로 나눠집니다. 

## Layers

## Font

## Sub-Module Specification
### Compressed_Data_FIFO.sv

### Decompresser.sv

## Test




