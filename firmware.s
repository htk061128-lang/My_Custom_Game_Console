# ==============================================================================
# File: firmware.s
# Description: Ultra Simple PPU Polling (X-axis Auto Scroll)
# ==============================================================================

.section .text
.globl _start

.org 0x0000
_start:
    j reset_handler
    nop
    nop
    nop

.org 0x0010
irq_vector:
    .word 0x0400000b
    nop
    nop
    nop

reset_handler:
    # 1. Stack Pointer 초기화
    li  sp, 0x0FEFFFF0

    # 2. 인터럽트 무시 (완전 비활성화)
    li  t0, 0xFFFFFFFF
    .word 0x0602800b

    # 3. PPU 초기화
    li  t0, 0x0FF00000

    # 레이어 메모리 주소 할당
    li  t1, 0x01000000
    sw  t1, 0(t0)
    li  t1, 0x01200000
    sw  t1, 4(t0)
    li  t1, 0x01400000
    sw  t1, 8(t0)
    li  t1, 0x01600000
    sw  t1, 12(t0)
    li  t1, 0x01800000
    sw  t1, 16(t0)
    li  t1, 0x01A00000
    sw  t1, 20(t0)
    li  t1, 0x01C00000
    sw  t1, 24(t0)
    li  t1, 0x01E00000
    sw  t1, 28(t0)
    li  t1, 0x02000000
    sw  t1, 32(t0)
    li  t1, 0x02200000
    sw  t1, 36(t0)

    # LUT 캐시
    li  t1, 0x01020304
    sw  t1, 40(t0)

    # 레이어 위치(0) 및 속성 기본값 세팅
    li  t2, 0x00001000
    sw  zero, 44(t0)
    sw  t2, 48(t0)
    sw  zero, 52(t0)
    sw  t2, 56(t0)
    sw  zero, 60(t0)
    sw  t2, 64(t0)
    sw  zero, 68(t0)
    sw  t2, 72(t0)
    sw  zero, 76(t0)
    sw  t2, 80(t0)
    sw  zero, 84(t0)
    sw  t2, 88(t0)
    sw  zero, 92(t0)
    sw  t2, 96(t0)
    sw  zero, 100(t0)
    sw  t2, 104(t0)
    sw  zero, 108(t0)
    sw  t2, 112(t0)
    sw  zero, 116(t0)
    sw  t2, 120(t0)

    # 라인 Config 세팅
    li  t1, 0x51FF51FF
    sw  t1, 124(t0)
    sw  t1, 128(t0)
    sw  t1, 132(t0)
    sw  t1, 136(t0)
    sw  t1, 140(t0)
    sw  t1, 144(t0)
    sw  t1, 148(t0)
    li  t1, 0x000051FF
    sw  t1, 152(t0)

    # 라인 Alpha 세팅
    li  t1, 0x33333333
    sw  t1, 156(t0)
    li  t1, 0x03333333
    sw  t1, 160(t0)

    # PPU START 초기화
    sw  zero, 164(t0)

    # BG1(Z=1)과 CHR1(Z=2) 활성화
    li  t2, 0x00001001
    sw  t2, 48(t0)
    li  t2, 0x00001002
    sw  t2, 64(t0)

    # CHR1 X좌표를 저장할 변수 s0
    li  s0, 0

    # 첫 프레임 트리거
    li  t1, 1
    sw  t1, 164(t0)
    nop
    nop
    sw  zero, 164(t0)

# =========================================================
# 메인 루프 (자동 스크롤)
# =========================================================
main_loop:
    li   t0, 0x0FF00000


wait_ppu:
    # 1. PPU가 유휴 상태(Idle)가 될 때까지 대기
    lw   t1, 172(t0)        # 0x0AC = PPU_STAT
    andi t2, t1, 1          # Bit 0 추출 (Busy)
    bnez t2, wait_ppu       # Busy가 1이면 wait_ppu(0x160)로 되돌아가서 계속 읽기!

    # 2. 화면이 다 그려졌으므로 안전하게 좌표 수정
    addi s0, s0, 5          # X좌표 5 증가

    li   t1, 0x0000FFFF
    and  t2, s0, t1
    sw   t2, 60(t0)         # 0x03C = CHR1_POS

    # 3. 다음 프레임 시작 신호 인가
    li   t1, 1
    sw   t1, 164(t0)        # 0x0A4 = PPU_START = 1
    nop
    nop
    nop
    nop
    sw   zero, 164(t0)      # PPU_START = 0

    # 4. PPU가 Busy 상태로 들어갈 때까지 안전 지연 루프
    li   t1, 20
delay_loop:                 # <-- 반드시 addi 바로 위에 배치!
    addi t1, t1, -1
    bnez t1, delay_loop     # <-- t1 != 0이면 위 라인(delay_loop)으로 뒤로 점프

    # 5. 다음 프레임 렌더링 감시를 위해 main_loop로 이동
    j    main_loop