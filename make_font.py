from PIL import Image, ImageDraw #pillow 라이브러리 사용.

image = Image.open("korea_font.png") #이미지 가져옴.
print(f"이미지 크기: {image.size}") #가로 448, 세로 256 픽셀임
print(f"이미지 모드: {image.mode}") #이미지 모드: RGBA임. 즉, 알파 채널이 포함되어 있음.
#28 * 16 = 448, 16 * 16 = 256. 따라서 가로 28개의 글자, 세로 16개의 줄이 있는 이미지임.
#한 글자의 크기는 16 * 16 픽셀이고 한 조각씩 잘라서 저장해야 함.

pixel_list = image.getdata()

bitmap = [] #리스트 생성
used_RGBA = [
    (64, 64, 64, 255), (196, 144, 255, 255), (196, 144, 255, 255), (255, 255, 0, 255), (46, 52, 183, 255), (46, 144, 183, 255),
    (196, 231, 255, 255), (196, 52, 255, 255), (196, 197, 255, 255)]

for pixel in pixel_list:
    r, g, b, a = pixel
    if r == 196 and g == 231 and b == 255 and a == 255: #폰트1
        bitmap.append(1)
    elif r == 196 and g == 197 and b == 255 and a == 255: #폰트2
        bitmap.append(1)
    elif pixel not in used_RGBA:
        print(f"새로운 예외 색상 발견!: {pixel}")
        bitmap.append(0)
    else:
        bitmap.append(0)

def font_extraction(x, y, bitmap):
    font_bitmap = []
    font_x = (x * 16)
    font_y = (y * 16)
    index = font_y * 448 + font_x
    for i in range(16):
        for j in range(16):
            if bitmap[index + 448*i + j] == 1:
                font_bitmap.append(1)
            else:
                font_bitmap.append(0)

    return font_bitmap

korea_bitmap = font_extraction(23, 12, bitmap) #(x,y)위치의 폰트 추출. #y가 12일때 x가 23, 24, 25, 26, 27은 노랑색때문에 제대로 추출이 안됨. 이건 수동으로 해야할 듯.
'''
for i in range(16): #해당 폰트 비트맵 출력
    row_str = "".join(str(bit) for bit in korea_bitmap[16*i : 16*(i+1)])
    # row_str = row_str.replace("0", " ").replace("1", "■")
    print(row_str) 
'''

cho_sung_1_set = []
cho_sung_2_set = []
cho_sung_3_set = []
cho_sung_4_set = []
cho_sung_5_set = []
cho_sung_6_set = []
cho_sung_7_set = []
cho_sung_8_set = []

for i in range(19): #초성은 19개
    cho_sung_1_set.append(font_extraction(i+1, 0, bitmap))
for i in range(19):
    cho_sung_2_set.append(font_extraction(i+1, 1, bitmap))
for i in range(19):
    cho_sung_3_set.append(font_extraction(i+1, 2, bitmap))
for i in range(19):
    cho_sung_4_set.append(font_extraction(i+1, 3, bitmap))
for i in range(19):
    cho_sung_5_set.append(font_extraction(i+1, 4, bitmap))
for i in range(19):
    cho_sung_6_set.append(font_extraction(i+1, 5, bitmap))
for i in range(19):
    cho_sung_7_set.append(font_extraction(i+1, 6, bitmap))
for i in range(19):
    cho_sung_8_set.append(font_extraction(i+1, 7, bitmap))

jung_sung_1_set = []
jung_sung_2_set = []
jung_sung_3_set = []
jung_sung_4_set = []

for i in range(21): #중성은 21개
    jung_sung_1_set.append(font_extraction(i+1, 8, bitmap))
for i in range(21):
    jung_sung_2_set.append(font_extraction(i+1, 9, bitmap))
for i in range(21):
    jung_sung_3_set.append(font_extraction(i+1, 10, bitmap))
for i in range(21):
    jung_sung_4_set.append(font_extraction(i+1, 11, bitmap))

chong_sung_1_set = []
chong_sung_2_set = []
chong_sung_3_set = []
chong_sung_4_set = []

for i in range(28): #종성은 28개. 받침없음 포함해야 함. 그리고 1벌 ㅊ, ㅋ, ㅌ, ㅍ, ㅎ 수정해줘야 함.
    chong_sung_1_set.append(font_extraction(i, 12, bitmap))
for i in range(28):
    chong_sung_2_set.append(font_extraction(i, 13, bitmap))
for i in range(28):
    chong_sung_3_set.append(font_extraction(i, 14, bitmap))
for i in range(28):
    chong_sung_4_set.append(font_extraction(i, 15, bitmap))

chong_sung_1_set[23] = chong_sung_2_set[23] #일단 임시로 5개 글자만 2벌이랑 똑같이 수정함. 
chong_sung_1_set[24] = chong_sung_2_set[24]
chong_sung_1_set[25] = chong_sung_2_set[25]
chong_sung_1_set[26] = chong_sung_2_set[26]
chong_sung_1_set[27] = chong_sung_2_set[27]


for i in range(16):
    row_str = "".join(str(bit) for bit in cho_sung_1_set[11][16*i : 16*(i+1)])
    # row_str = row_str.replace("0", " ").replace("1", "■")
    print(row_str)

##원본 이미지 4개 키워서 저장
#resized_img = image.resize((448 * 4, 256 * 4), Image.NEAREST)
#resized_img.save("korea_font_x4.png")

##사용되는 모든 색깔 순서대로 출력해서 저장
'''
color_list = [
    ("노랑 글자 그림자 (64, 64, 64)", (64, 64, 64)),
    ("초성, 종성 배경 (46, 144, 183)", (46, 144, 183)),
    ("BG Purple (46, 52, 183)", (46, 52, 183)),
    ("Grid (196, 144, 255)", (196, 144, 255)),
    ("노랑 글자 (255, 255, 0)", (255, 255, 0)),
    ("폰트1 (196, 231, 255)", (196, 231, 255)),
    ("Purple Border (196, 52, 255)", (196, 52, 255)),
    ("폰트2 (196, 197, 255)", (196, 197, 255)),
    ("color(46, 52, 183, 255)", (46, 52, 183))
]


# 한 줄에 표현할 상자의 크기와 간격 지정
box_height = 50   # 각 색상 띠의 세로 높이
image_width = 450 # 이미지 전체 가로 폭
image_height = box_height * len(color_list) # 전체 세로 높이 (줄 수 x 높이)

# 2. 흰색 바탕의 캔버스 이미지 생성
canvas = Image.new("RGB", (image_width, image_height), (255, 255, 255))
draw = ImageDraw.Draw(canvas)

# 3. 각 색상별로 위에서부터 한 줄씩 띠 형태로 그리기
for index, (name, rgb) in enumerate(color_list):
    top_y = index * box_height
    bottom_y = top_y + box_height
    
    # 사각형 그리기 [(왼쪽, 위), (오른쪽, 아래)]
    draw.rectangle([(0, top_y), (image_width, bottom_y)], fill=rgb)

# 4. 결과 이미지 저장
canvas.save("all_colors_preview.png")
print("한 이미지로 통합된 색상표 저장 완료: all_colors_preview.png")

'''
"""
# ==============================================================================
# C++ 헤더 파일 (font_data.h) 자동 생성 코드
# ==============================================================================

# 초성(8벌), 중성(4벌), 종성(4벌)을 다차원 구조로 정리
all_cho_sungs = [
    cho_sung_1_set, cho_sung_2_set, cho_sung_3_set, cho_sung_4_set,
    cho_sung_5_set, cho_sung_6_set, cho_sung_7_set, cho_sung_8_set
]

all_jung_sungs = [
    jung_sung_1_set, jung_sung_2_set, jung_sung_3_set, jung_sung_4_set
]

all_chong_sungs = [
    chong_sung_1_set, chong_sung_2_set, chong_sung_3_set, chong_sung_4_set
]

def generate_cpp_header(filename="font_data.h"):
    def pack_bitmap_to_uint16(char_bitmap):
        #256비트(16x16) 리스트를 16개의 uint16_t(행 단위) 16진수 포맷으로 변환
        packed_rows = []
        for r in range(16):
            row_bits = char_bitmap[r * 16 : (r + 1) * 16]
            row_val = 0
            for b in row_bits:
                row_val = (row_val << 1) | b
            packed_rows.append(f"0x{row_val:04X}")
        return packed_rows

    with open(filename, "w", encoding="utf-8") as f:
        f.write("// 자동 생성된 한글 조합형 비트맵 폰트 헤더 파일\n")
        f.write("#ifndef FONT_DATA_H\n")
        f.write("#define FONT_DATA_H\n\n")
        f.write("#include <cstdint>\n\n")
        
        # 1. 초성 (8벌 x 19개 x 16행)
        f.write("// 초성: [8벌][19글자][16행] (글자당 32 Bytes)\n")
        f.write("const uint16_t CHO_SUNG[8][19][16] = {\n")
        for set_idx, cho_set in enumerate(all_cho_sungs):
            f.write(f"    // --- 초성 {set_idx + 1}벌 ---\n    {{\n")
            for char_bitmap in cho_set:
                packed = pack_bitmap_to_uint16(char_bitmap)
                f.write("        { " + ", ".join(packed) + " },\n")
            f.write("    },\n")
        f.write("};\n\n")

        # 2. 중성 (4벌 x 21개 x 16행)
        f.write("// 중성: [4벌][21글자][16행] (글자당 32 Bytes)\n")
        f.write("const uint16_t JUNG_SUNG[4][21][16] = {\n")
        for set_idx, jung_set in enumerate(all_jung_sungs):
            f.write(f"    // --- 중성 {set_idx + 1}벌 ---\n    {{\n")
            for char_bitmap in jung_set:
                packed = pack_bitmap_to_uint16(char_bitmap)
                f.write("        { " + ", ".join(packed) + " },\n")
            f.write("    },\n")
        f.write("};\n\n")

        # 3. 종성 (4벌 x 28개 x 16행)
        f.write("// 종성: [4벌][28글자][16행] (글자당 32 Bytes)\n")
        f.write("const uint16_t CHONG_SUNG[4][28][16] = {\n")
        for set_idx, chong_set in enumerate(all_chong_sungs):
            f.write(f"    // --- 종성 {set_idx + 1}벌 ---\n    {{\n")
            for char_bitmap in chong_set:
                packed = pack_bitmap_to_uint16(char_bitmap)
                f.write("        { " + ", ".join(packed) + " },\n")
            f.write("    },\n")
        f.write("};\n\n")

        f.write("#endif // FONT_DATA_H\n")

    print(f"C++ 헤더 파일 생성 완료: {filename}")

# 헤더 파일 생성 실행
generate_cpp_header("font_data.h")
"""