from PIL import Image, ImageOps

def fit_and_crop_from_obj(input_image_obj, output_path, target_width, target_height):
    """
    열린 이미지 객체(input_image_obj)를 인자로 받아
    비율을 유지하면서 목표 해상도에 맞게 리사이즈 및 중앙 크롭합니다.
    """
    img = input_image_obj
    if img.mode != 'RGBA':
        img = img.convert('RGBA')

    # [수정] 구버전/신버전 모두 호환되도록 Image.LANCZOS 사용
    # 만약 아주 오래된 버전이라면 Image.ANTIALIAS가 적용됩니다.
    resample_filter = getattr(Image, 'Resampling', Image).LANCZOS if hasattr(Image, 'LANCZOS') else Image.ANTIALIAS

    target_size = (target_width, target_height)
    result_img = ImageOps.fit(
        img, 
        target_size, 
        method=resample_filter, 
        centering=(0.5, 0.5)
    )

    # 결과 저장
    result_img.save(output_path, quality=95)
    print(f"변환 완료: {output_path} ({target_width}x{target_height})")

if __name__ == "__main__":
    input_file_obj = Image.open("background1.png")
    fit_and_crop_from_obj(input_file_obj, "back_400x320.png", 400, 320)