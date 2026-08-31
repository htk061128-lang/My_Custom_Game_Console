# ==============================================================================
# File: firmware.s
# Description: PicoRV32 Bootloader & PPU Register Full Initialization (4-Inst Block)
# ==============================================================================

.section .text
.globl _start

_start:
    # 0x0000_0000 (4개) - Reset Vector
    nop
    nop
    nop
    nop

    # 0x0000_0010 (4개) - Base Address & Register Clear
    lui  t0, 0x0FF00        # t0 = 0x0FF0_0000 (PPU Base Address)
    add  t1, zero, zero     # t1 = 0
    add  t2, zero, zero     # t2 = 0
    nop

    # 0x0000_0020 (4개) - Layer Base: BG1, BG2 (0x000, 0x004)
    lui  t1, 0x01000        # t1 = 0x0100_0000 (BG1 DDR3)
    sw   t1, 0(t0)          # [0x000] BG1_ADDR
    lui  t1, 0x01200        # t1 = 0x0120_0000 (BG2 DDR3)
    sw   t1, 4(t0)          # [0x004] BG2_ADDR

    # 0x0000_0030 (4개) - Layer Base: CHR1, CHR2 (0x008, 0x00C)
    lui  t1, 0x01400        # t1 = 0x0140_0000 (CHR1 DDR3)
    sw   t1, 8(t0)          # [0x008] CHR1_ADDR
    lui  t1, 0x01600        # t1 = 0x0160_0000 (CHR2 DDR3)
    sw   t1, 12(t0)         # [0x00C] CHR2_ADDR

    # 0x0000_0040 (4개) - Layer Base: CHR3, CHR4 (0x010, 0x014)
    lui  t1, 0x01800        # t1 = 0x0180_0000 (CHR3 DDR3)
    sw   t1, 16(t0)         # [0x010] CHR3_ADDR
    lui  t1, 0x01A00        # t1 = 0x01A0_0000 (CHR4 DDR3)
    sw   t1, 20(t0)         # [0x014] CHR4_ADDR

    # 0x0000_0050 (4개) - Layer Base: SCR, STAT (0x018, 0x01C)
    lui  t1, 0x01C00        # t1 = 0x01C0_0000 (SCR DDR3)
    sw   t1, 24(t0)         # [0x018] SCR_ADDR
    lui  t1, 0x01E00        # t1 = 0x01E0_0000 (STAT DDR3)
    sw   t1, 28(t0)         # [0x01C] STAT_ADDR

    # 0x0000_0060 (4개) - Layer Base: UNI1, UNI2 (0x020, 0x024)
    lui  t1, 0x02000        # t1 = 0x0200_0000 (UNI1 DDR3)
    sw   t1, 32(t0)         # [0x020] UNI1_ADDR
    lui  t1, 0x02200        # t1 = 0x0220_0000 (UNI2 DDR3)
    sw   t1, 36(t0)         # [0x024] UNI2_ADDR

    # 0x0000_0070 (4개) - LUT Cache (0x01020304) & ATTR Template (0x00001000)
    lui  t1, 0x01020        # t1 = 0x0102_0000
    ori  t1, t1, 0x304      # t1 = 0x0102_0304
    sw   t1, 40(t0)         # [0x028] LUT_CACHE_PIX = 0x0102_0304
    lui  t2, 1              # t2 = 0x0000_1000 (Alpha=16 / 0x10, Z-order=0)

    # 0x0000_0080 (4개) - BG1/BG2 POS & ATTR
    sw   zero, 44(t0)       # [0x02C] BG1_POS = 0 (SCX=0, SCY=0)
    sw   t2,   48(t0)       # [0x030] BG1_ATTR = 0x0000_1000
    sw   zero, 52(t0)       # [0x034] BG2_POS = 0 (SCX=0, SCY=0)
    sw   t2,   56(t0)       # [0x038] BG2_ATTR = 0x0000_1000

    # 0x0000_0090 (4개) - CHR1/CHR2 POS & ATTR
    sw   zero, 60(t0)       # [0x03C] CHR1_POS = 0 (WX=0, WY=0)
    sw   t2,   64(t0)       # [0x040] CHR1_ATTR = 0x0000_1000
    sw   zero, 68(t0)       # [0x044] CHR2_POS = 0 (WX=0, WY=0)
    sw   t2,   72(t0)       # [0x048] CHR2_ATTR = 0x0000_1000

    # 0x0000_00A0 (4개) - CHR3/CHR4 POS & ATTR
    sw   zero, 76(t0)       # [0x04C] CHR3_POS = 0 (WX=0, WY=0)
    sw   t2,   80(t0)       # [0x050] CHR3_ATTR = 0x0000_1000
    sw   zero, 84(t0)       # [0x054] CHR4_POS = 0 (WX=0, WY=0)
    sw   t2,   88(t0)       # [0x058] CHR4_ATTR = 0x0000_1000

    # 0x0000_00B0 (4개) - SCR/STAT POS & ATTR
    sw   zero, 92(t0)       # [0x05C] SCR_POS = 0 (WX=0, WY=0)
    sw   t2,   96(t0)       # [0x060] SCR_ATTR = 0x0000_1000
    sw   zero, 100(t0)      # [0x064] STAT_POS = 0 (WX=0, WY=0)
    sw   t2,   104(t0)      # [0x068] STAT_ATTR = 0x0000_1000

    # 0x0000_00C0 (4개) - UNI1/UNI2 POS & ATTR
    sw   zero, 108(t0)      # [0x06C] UNI1_POS = 0 (WX=0, WY=0)
    sw   t2,   112(t0)      # [0x070] UNI1_ATTR = 0x0000_1000
    sw   zero, 116(t0)      # [0x074] UNI2_POS = 0 (WX=0, WY=0)
    sw   t2,   120(t0)      # [0x078] UNI2_ATTR = 0x0000_1000

    # 0x0000_00D0 (4개) - Line Config Template & Line 0~3 설정
    lui  t1, 0x51FF5        # t1 = 0x51FF_5000
    ori  t1, t1, 0x1FF      # t1 = 0x51FF_51FF (VisNum=40, RGB=White)
    sw   t1, 124(t0)        # [0x07C] LINE_CFG_0_1
    sw   t1, 128(t0)        # [0x080] LINE_CFG_2_3

    # 0x0000_00E0 (4개) - Line Config 4~11 설정
    sw   t1, 132(t0)        # [0x084] LINE_CFG_4_5
    sw   t1, 136(t0)        # [0x088] LINE_CFG_6_7
    sw   t1, 140(t0)        # [0x08C] LINE_CFG_8_9
    sw   t1, 144(t0)        # [0x090] LINE_CFG_10_11

    # 0x0000_00F0 (4개) - Line Config 12~13 & Line 14 설정
    sw   t1, 148(t0)        # [0x094] LINE_CFG_12_13
    lui  t1, 0x00005        # t1 = 0x0000_5000
    ori  t1, t1, 0x1FF      # t1 = 0x0000_51FF (Line 14 Config)
    sw   t1, 152(t0)        # [0x098] LINE_CFG_14

    # 0x0000_0100 (4개) - Line Alpha 0~7 & Line Alpha 8~14 상위 로드
    lui  t1, 0x33333        # t1 = 0x3333_3000
    ori  t1, t1, 0x333      # t1 = 0x3333_3333 (Lines 0~7 Alpha = 3)
    sw   t1, 156(t0)        # [0x09C] LINE_ALPHA_0_7
    lui  t1, 0x03333        # t1 = 0x0333_3000

    # 0x0000_0110 (4개) - Line Alpha 8~14 & PPU_START(0) & Idle 분기
    ori  t1, t1, 0x333      # t1 = 0x0333_3333 (Lines 8~14 Alpha = 3)
    sw   t1, 160(t0)        # [0x0A0] LINE_ALPHA_8_14
    sw   zero, 164(t0)      # [0x0A4] PPU_START = 0
    nop

    # 0x0000_0120 (4개) - 초기화 끝 이제 시작
    # 0x0000_0120 (4개) - BG1_ATTR(0x00001001), CHR1_ATTR(0x00000102) 설정
    lui  t1, 1              # t1 = 0x0000_1000
    ori  t1, t1, 1          # t1 = 0x0000_1001 (Alpha=16, Z=1)
    sw   t1, 48(t0)         # [0x030] BG1_ATTR = 0x0000_1001
    addi t1, zero, 0x102    # t1 = 0x0000_0102 (Alpha=1, Z=2)

    # 0x0000_0130 (4개) - CHR1_ATTR 저장, SCR_ATTR(0x00000103) 설정, PPU_START=1 트리거
    sw   t1, 64(t0)         # [0x040] CHR1_ATTR = 0x0000_0102
    addi t1, zero, 0x103    # t1 = 0x0000_0103 (Alpha=1, Z=3)
    sw   t1, 96(t0)         # [0x060] SCR_ATTR = 0x0000_0103
    addi t1, zero, 1        # t1 = 1
    
    # 0x0000_0140 (4개) - PPU_START = 1 및 NOP 3개 실행
    sw   t1, 164(t0)        # [0x0A4] PPU_START = 1 (Frame Start Trigger)
    nop                     # 1st nop
    nop                     # 2nd nop
    nop                     # 3rd nop

    # 0x0000_0150 (4개) - NOP 1개(총 4개 완료) 및 PPU_START = 0 클리어 & 대기 루프 진입
    nop                     # 4th nop
    sw   zero, 164(t0)      # [0x0A4] PPU_START = 0 (Clear Trigger)
    nop
    jal  zero, idle_loop    # 대기 루프로 점프

    # 0x0000_0160 (4개) - Idle Infinite Loop
idle_loop:
    jal  zero, idle_loop    # 무한 루프
    nop
    nop
    nop