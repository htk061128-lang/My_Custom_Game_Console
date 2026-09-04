# ==============================================================================
# File: firmware.s
# Description: PicoRV32 Bootloader & PPU Register Full Initialization (4-Inst Block)
# ==============================================================================

.section .text
.globl _start
.section .text
.globl _start

# =========================================================
# 1. Vector Table (0x0000 ~ 0x001C)
# =========================================================
.org 0x0000
_start:
    j reset_handler      # 0x0000: 전원 켜짐 -> 초기화 코드로 점프
    nop
    nop
    nop

.org 0x0010
irq_vector:
    j irq_handler        # 0x0010: 인터럽트 발생 -> 핸들러로 점프
    nop
    nop
    nop

# =========================================================
# 2. Reset Handler (초기화 및 메인 루프)
# =========================================================
reset_handler:
    # [1] Stack Pointer 초기화 (0x0FEF_FFFF)
    lui  sp, 0x0FEF0            # sp = 0x0FEF_0000
    ori  sp, sp, 0xFFF          # sp = 0x0FEF_0FFF
    slli sp, sp, 4              # sp = 0x0FEF_FFF0
    ori  sp, sp, 0xF            # sp = 0x0FEF_FFFF (상위 4비트 0, 255MiB 끝 지점)

    # [2] 인터럽트 마스크 설정 (PicoRV32 규격: 비트 0 = 활성화)
    # PicoRV32의 maskirq(rd, rs)는 이전 마스크를 rd에 반환하고 rs의 비트 마스크를 적용합니다.
    # 0x0600000B : maskirq zero, zero (모든 인터럽트 비트 0 설정 -> 전체 인터럽트 활성화)
    .word 0x0600000b

    # [3] 기존 PPU 초기화 코드 (레지스터 초기화)
    lui  t0, 0x0FF00        # t0 = 0x0FF0_0000 (PPU Base Address)
    add  t1, zero, zero     # t1 = 0
    add  t2, zero, zero     # t2 = 0
    nop

    lui  t1, 0x01000        # t1 = 0x0100_0000 (BG1 DDR3)
    sw   t1, 0(t0)          # [0x000] BG1_ADDR
    lui  t1, 0x01200        # t1 = 0x0120_0000 (BG2 DDR3)
    sw   t1, 4(t0)          # [0x004] BG2_ADDR

    lui  t1, 0x01400        # t1 = 0x0140_0000 (CHR1 DDR3)
    sw   t1, 8(t0)          # [0x008] CHR1_ADDR
    lui  t1, 0x01600        # t1 = 0x0160_0000 (CHR2 DDR3)
    sw   t1, 12(t0)         # [0x00C] CHR2_ADDR

    lui  t1, 0x01800        # t1 = 0x0180_0000 (CHR3 DDR3)
    sw   t1, 16(t0)         # [0x010] CHR3_ADDR
    lui  t1, 0x01A00        # t1 = 0x01A0_0000 (CHR4 DDR3)
    sw   t1, 20(t0)         # [0x014] CHR4_ADDR

    lui  t1, 0x01C00        # t1 = 0x01C0_0000 (SCR DDR3)
    sw   t1, 24(t0)         # [0x018] SCR_ADDR
    lui  t1, 0x01E00        # t1 = 0x01E0_0000 (STAT DDR3)
    sw   t1, 28(t0)         # [0x01C] STAT_ADDR

    lui  t1, 0x02000        # t1 = 0x0200_0000 (UNI1 DDR3)
    sw   t1, 32(t0)         # [0x020] UNI1_ADDR
    lui  t1, 0x02200        # t1 = 0x0220_0000 (UNI2 DDR3)
    sw   t1, 36(t0)         # [0x024] UNI2_ADDR

    lui  t1, 0x01020        # t1 = 0x0102_0000
    ori  t1, t1, 0x304      # t1 = 0x0102_0304
    sw   t1, 40(t0)         # [0x028] LUT_CACHE_PIX = 0x0102_0304
    lui  t2, 1              # t2 = 0x0000_1000 (Alpha=16 / 0x10, Z-order=0)

    sw   zero, 44(t0)       # [0x02C] BG1_POS = 0 (SCX=0, SCY=0)
    sw   t2,   48(t0)       # [0x030] BG1_ATTR = 0x0000_1000
    sw   zero, 52(t0)       # [0x034] BG2_POS = 0 (SCX=0, SCY=0)
    sw   t2,   56(t0)       # [0x038] BG2_ATTR = 0x0000_1000

    sw   zero, 60(t0)       # [0x03C] CHR1_POS = 0 (WX=0, WY=0)
    sw   t2,   64(t0)       # [0x040] CHR1_ATTR = 0x0000_1000
    sw   zero, 68(t0)       # [0x044] CHR2_POS = 0 (WX=0, WY=0)
    sw   t2,   72(t0)       # [0x048] CHR2_ATTR = 0x0000_1000

    sw   zero, 76(t0)       # [0x04C] CHR3_POS = 0 (WX=0, WY=0)
    sw   t2,   80(t0)       # [0x050] CHR3_ATTR = 0x0000_1000
    sw   zero, 84(t0)       # [0x054] CHR4_POS = 0 (WX=0, WY=0)
    sw   t2,   88(t0)       # [0x058] CHR4_ATTR = 0x0000_1000

    sw   zero, 92(t0)       # [0x05C] SCR_POS = 0 (WX=0, WY=0)
    sw   t2,   96(t0)       # [0x060] SCR_ATTR = 0x0000_1000
    sw   zero, 100(t0)      # [0x064] STAT_POS = 0 (WX=0, WY=0)
    sw   t2,   104(t0)      # [0x068] STAT_ATTR = 0x0000_1000

    sw   zero, 108(t0)      # [0x06C] UNI1_POS = 0 (WX=0, WY=0)
    sw   t2,   112(t0)      # [0x070] UNI1_ATTR = 0x0000_1000
    sw   zero, 116(t0)      # [0x074] UNI2_POS = 0 (WX=0, WY=0)
    sw   t2,   120(t0)      # [0x078] UNI2_ATTR = 0x0000_1000

    lui  t1, 0x51FF5        # t1 = 0x51FF_5000
    ori  t1, t1, 0x1FF      # t1 = 0x51FF_51FF (VisNum=40, RGB=White)
    sw   t1, 124(t0)        # [0x07C] LINE_CFG_0_1
    sw   t1, 128(t0)        # [0x080] LINE_CFG_2_3

    sw   t1, 132(t0)        # [0x084] LINE_CFG_4_5
    sw   t1, 136(t0)        # [0x088] LINE_CFG_6_7
    sw   t1, 140(t0)        # [0x08C] LINE_CFG_8_9
    sw   t1, 144(t0)        # [0x090] LINE_CFG_10_11

    sw   t1, 148(t0)        # [0x094] LINE_CFG_12_13
    lui  t1, 0x00005        # t1 = 0x0000_5000
    ori  t1, t1, 0x1FF      # t1 = 0x0000_51FF (Line 14 Config)
    sw   t1, 152(t0)        # [0x098] LINE_CFG_14

    lui  t1, 0x33333        # t1 = 0x3333_3000
    ori  t1, t1, 0x333      # t1 = 0x3333_3333 (Lines 0~7 Alpha = 3)
    sw   t1, 156(t0)        # [0x09C] LINE_ALPHA_0_7
    lui  t1, 0x03333        # t1 = 0x0333_3000

    ori  t1, t1, 0x333      # t1 = 0x0333_3333 (Lines 8~14 Alpha = 3)
    sw   t1, 160(t0)        # [0x0A0] LINE_ALPHA_8_14
    sw   zero, 164(t0)      # [0x0A4] PPU_START = 0
    nop
    # 초기화 완료. 

    # [4] 첫 프레임 트리거
    li   t1, 1
    sw   t1, 164(t0)     # PPU_START = 1
    nop
    sw   zero, 164(t0)   # PPU_START = 0

# ------------------------------------------------------------------------------
# 메인 루프: 게임 시나리오 엔진 (대사 넘김, 씬 전환 처리)
# ------------------------------------------------------------------------------
main_loop:
    # WFI(Wait For Interrupt) 형태로 절전하거나 플래그를 대기
    # vn_btn_pressed 플래그가 1이 되면 스크립트 진행
    lui  t0, %hi(vn_btn_event)
    lw   t1, %lo(vn_btn_event)(t0)
    beq  t1, zero, main_loop

    # [이벤트 처리] 버튼이 눌렸을 때 (Z 키 / Confirm)
    sw   zero, %lo(vn_btn_event)(t0) # 이벤트 소모

    # TODO: 다음 대사 라인으로 폰트맵(BRAM14) 갱신 로직 실행
    # TODO: 또는 캐릭터/배경 포인터 교체

    j    main_loop

# ==============================================================================
# 3. Enhanced Interrupt Service Routine (ISR)
# ==============================================================================
irq_handler:
    # -------------------------------------------------------------------------
    # 단계 A: Context Save (16바이트 정렬: 32바이트 공간 확보)
    # -------------------------------------------------------------------------
    addi sp, sp, -32
    sw   t0,  0(sp)
    sw   t1,  4(sp)
    sw   t2,  8(sp)
    sw   t3, 12(sp)
    sw   s0, 16(sp)
    sw   s1, 20(sp)
    sw   ra, 24(sp)

    # -------------------------------------------------------------------------
    # 단계 B: PicoRV32 q2 레지스터 확인 (인터럽트 소스 디코딩)
    # getq t0, q2 -> 기계어: 0x0002228B
    # -------------------------------------------------------------------------
    .word 0x0002228b                # t0 = q2 (발생한 IRQ 비트맵)

check_joypad_irq:
    andi t1, t0, 1                  # [비트 0] Joypad IRQ 확인
    beq  t1, zero, check_ppu_irq

    # === [조이패드 인터럽트 서비스] ===
    lui  t2, 0x0FF00
    lw   t3, 168(t2)                # [0x0A8] JOYPAD 레지스터 Read (IRQ Auto Clear)
    
    # 조이패드 입력 디코딩 (비트 4: Z버튼/대사 넘김)
    andi t1, t3, 0x10               # Button A (Confirm / Z)
    beq  t1, zero, handle_dpad
    
    # 대사 넘김 이벤트 플래그 세팅
    lui  t1, %hi(vn_btn_event)
    li   t2, 1
    sw   t2, %lo(vn_btn_event)(t1)

handle_dpad:
    # 방향키 입력 처리 (선택지 커서 이동 또는 캐릭터 조작)
    # CHR1 X, Y 위치 조작 예시 (필요시 사용)
    # ...

check_ppu_irq:
    andi t1, t0, 2                  # [비트 1] PPU Frame End IRQ 확인
    beq  t1, zero, irq_exit

    # === [PPU 프레임 완료 인터럽트 서비스] ===
    lui  t2, 0x0FF00
    lw   t3, 172(t2)                # [0x0AC] PPU_STAT Read (IRQ Auto Clear)

    # 1. 프레임 카운터 증가 (비주얼 노벨 텍스트 타이핑 딜레이용)
    lui  t1, %hi(vn_frame_ticks)
    lw   t2, %lo(vn_frame_ticks)(t1)
    addi t2, t2, 1
    sw   t2, %lo(vn_frame_ticks)(t1)

    # 2. 다음 프레임 렌더링 트리거
    # (PPU가 Idle 상태이므로 다음 프레임을 즉시 켬)
    li   t1, 1
    lui  t2, 0x0FF00
    sw   t1, 164(t2)                # [0x0A4] PPU_START = 1
    nop
    sw   zero, 164(t2)              # [0x0A4] PPU_START = 0

irq_exit:
    # -------------------------------------------------------------------------
    # 단계 C: Context Restore
    # -------------------------------------------------------------------------
    lw   t0,  0(sp)
    lw   t1,  4(sp)
    lw   t2,  8(sp)
    lw   t3, 12(sp)
    lw   s0, 16(sp)
    lw   s1, 20(sp)
    lw   ra, 24(sp)
    addi sp, sp, 32

    # -------------------------------------------------------------------------
    # 단계 D: PicoRV32 전용 복귀 (retirq)
    # -------------------------------------------------------------------------
    .word 0x0400000b

# ==============================================================================
# 4. Data Section (엔진 제어용 메모리 변수)
# ==============================================================================
.section .data
.align 4
vn_frame_ticks: .word 0             # 매 60fps마다 1씩 증가하는 틱 카운터
vn_btn_event:   .word 0             # 대사 넘김/선택 버튼 클릭 플래그