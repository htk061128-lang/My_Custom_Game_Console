# Overview
![PPU 블록도](./imagefile/ppu_flowchart.png)
비주얼 노벨 장르 게임 구동을 목적으로 하는 게임 시스템의 PPU(Pixel Processing Unit)입니다. 320 * 240 픽셀 화면에 프레임 당 255개 색을 지원하며 외부 메모리에 RLC(Run Length Coding) 압축 저장된 10개의 레이어 이미지를 실시간 합성, 알파블랜딩, 폰트 합성하여 화면을 출력합니다. 


## System Features
클럭 속도: 
픽셀 수: 320 * 240
레이어 수: 10개 (400 * 320 2개, 320 * 240  2개, 160 * 240  5개, 320 *  120 1개 지원)
팔래트 수: 255개
10단계 레이어 알파 블랜딩 지원
한글, ASCII 폰트 랜더링 지원
커스텀 8 * 16 단색 타일 지원
RLC(Run Length Coding) 압축 지원

## Resister Map
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

## Sub-Module Specification
#Compressed_Data_FIFO.sv
![next_should_read_layer 조합회로](./imagefile/Com_FIFO_shouldread.png)
#Decompresser.sv

## SmartyPants

SmartyPants converts ASCII punctuation characters into "smart" typographic punctuation HTML entities. For example:

|                |ASCII                          |HTML                         |
|----------------|-------------------------------|-----------------------------|
|Single backticks|`'Isn't this fun?'`            |'Isn't this fun?'            |
|Quotes          |`"Isn't this fun?"`            |"Isn't this fun?"            |
|Dashes          |`-- is en-dash, --- is em-dash`|-- is en-dash, --- is em-dash|


## KaTeX

You can render LaTeX mathematical expressions using [KaTeX](https://khan.github.io/KaTeX/):

The *Gamma function* satisfying $\Gamma(n) = (n-1)!\quad\forall n\in\mathbb N$ is via the Euler integral

$$
\Gamma(z) = \int_0^\infty t^{z-1}e^{-t}dt\,.
$$

> You can find more information about **LaTeX** mathematical expressions [here](http://meta.math.stackexchange.com/questions/5020/mathjax-basic-tutorial-and-quick-reference).

