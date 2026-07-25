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

korea_bitmap = font_extraction(1, 1, bitmap) #(x,y)위치의 폰트 추출

for i in range(16): #해당 폰트 비트맵 출력
    row_str = "".join(str(bit) for bit in korea_bitmap[16*i : 16*(i+1)])
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