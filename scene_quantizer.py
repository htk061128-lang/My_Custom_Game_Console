import numpy as np
from PIL import Image

##배경 이미지 1개, 캐릭터 이미지 1개를 입력으로 받아서 두 이미지의 1바이트 픽셀 배열과 256 엔트리 18비트 LUT를 생성하는 함수

def generate_scene_assets(bg_path, char_path):
    bg_img = Image.open(bg_path).convert('RGBA')
    char_img = Image.open(char_path).convert('RGBA')

    # 1. 씬 전체 색상 학습용 합성 이미지 생성
    combined = Image.new('RGBA', (bg_img.width + char_img.width, max(bg_img.height, char_img.height)))
    combined.paste(bg_img, (0, 0))
    combined.paste(char_img, (bg_img.width, 0), mask=char_img.split()[3])

    # 2. 255색 통합 양자화 (method=0: MEDIANCUT 구버전 호환 상수)
    rgb_combined = Image.new('RGB', combined.size, (255, 255, 255))
    rgb_combined.paste(combined, mask=combined.split()[3])
    quantized_scene = rgb_combined.quantize(colors=255, method=0)

    # 3. 256 엔트리 18비트 LUT 생성 (0번: 투명 0x00000)
    palette_raw = quantized_scene.getpalette()[:255 * 3]
    lut_18bit = [0] * 256
    for i in range(255):
        r = palette_raw[i * 3] >> 2      # 8bit -> 6bit
        g = palette_raw[i * 3 + 1] >> 2  # 8bit -> 6bit
        b = palette_raw[i * 3 + 2] >> 2  # 8bit -> 6bit
        lut_18bit[i + 1] = (r << 12) | (g << 6) | b

    # 4. 통합 팔레트 적용 (dither=1: FLOYDSTEINBERG 구버전 호환 상수)
    def convert_layer(img, is_transparent=False):
        rgb_layer = Image.new('RGB', img.size, (255, 255, 255))
        if is_transparent:
            rgb_layer.paste(img, mask=img.split()[3])
        else:
            rgb_layer.paste(img)
            
        quantized_layer = rgb_layer.quantize(palette=quantized_scene, dither=1)
        indexed = np.array(quantized_layer, dtype=np.uint8) + 1
        
        if is_transparent:
            alpha = np.array(img)[:, :, 3]
            indexed[alpha < 128] = 0 # 투명 영역은 0번 인덱스
        return indexed

    bg_indexed = convert_layer(bg_img, is_transparent=False)
    char_indexed = convert_layer(char_img, is_transparent=True)

    return bg_indexed, char_indexed, lut_18bit

def print_array_summary(name, arr, preview_rows=6, preview_cols=12):
    print(f"\n========================================================")
    print(f"[{name}] 통계 및 데이터 미리보기")
    print(f"========================================================")
    print(f"* 해상도(Size)     : {arr.shape[1]} x {arr.shape[0]} (총 {arr.size} 픽셀)")
    print(f"* 고유 인덱스 수   : {len(np.unique(arr))} 개")
    print(f"* 투명(0번) 픽셀 수: {np.sum(arr == 0)} 개")
    print(f"\n[좌측 상단 ({preview_cols}x{preview_rows}) 픽셀 인덱스 미리보기]")
    
    for y in range(min(preview_rows, arr.shape[0])):
        row_str = " ".join([f"{arr[y, x]:3d}" for x in range(min(preview_cols, arr.shape[1]))])
        print(f"  Row {y:03d} | {row_str} ...")
    print("  ...")

def print_cpp_lut(lut):
    print(f"\n========================================================")
    print(f"[PPU 18-bit 통합 LUT (C++ 배열 코드)]")
    print(f"========================================================")
    print("const uint32_t scene_lut[256] = {")
    for i in range(0, 256, 8):
        line = ", ".join([f"0x{val:05X}" for val in lut[i:i+8]])
        print(f"    {line},")
    print("};\n")

if __name__ == "__main__":
    bg_idx, char_idx, scene_lut = generate_scene_assets("back_400x320.png", "char_160x240.png")

    print_cpp_lut(scene_lut)
    print_array_summary("배경 이미지 (Background)", bg_idx)
    print_array_summary("캐릭터 이미지 (Character)", char_idx)