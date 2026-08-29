// ----------------------------------------------------------------------
// [수정 완료] PicoRV32 펌웨어 기계어 배열
// ----------------------------------------------------------------------
const uint32_t test_firmware[] = {
    // 0x00: Boot Vector
    0x0ff00137, // lui   sp, 0x0FF00
    0xffc10113, // addi  sp, sp, -4        (sp = 0x0FEF_FFFC)
    0x0600000b, // maskirq x0, x0          (IRQ 활성화)
    0x0880006f, // jal   x0, 0x98          (init_ppu로 점프)

    // 0x10: Interrupt Vector (irq_handler)
    0x0ff002b7, // lui   t0, 0x0FF00
    0x0a82a303, // lw    t1, 168(t0)       (JOYPAD Read-to-Clear)
    0x03c2a383, // lw    t2, 60(t0)        (CHR1_POS 32-bit 전체 읽기)
    0x01038e13, // slli  t3, t2, 16
    0x010e5e13, // srai  t3, t3, 16        (t3 = X좌표, sign-extended)
    0x0103de13, // srai  t4, t2, 16        (t4 = Y좌표, sign-extended)

    // 방향키 판별 (0x28)
    0x00137eb3, // andi  t5, t1, 1         (Up)
    0x000eb463, // beq   t5, x0, +8
    0xffce0e13, // addi  t4, t4, -4        (Y -= 4)
    0x00237eb3, // andi  t5, t1, 2         (Down)
    0x000eb463, // beq   t5, x0, +8
    0x004e0e13, // addi  t4, t4, 4         (Y += 4)
    0x00437eb3, // andi  t5, t1, 4         (Left)
    0x000eb463, // beq   t5, x0, +8
    0xffce0e93, // addi  t3, t3, -4        (X -= 4)
    0x00837eb3, // andi  t5, t1, 8         (Right)
    0x000eb463, // beq   t5, x0, +8
    0x004e0e93, // addi  t3, t3, 4         (X += 4)

    // 좌표 재패킹 및 레지스터 갱신 (0x58)
    0x010e1e13, // slli  t4, t4, 16
    0x010e9e93, // slli  t3, t3, 16
    0x010ebd93, // srli  t3, t3, 16
    0x00de63b3, // or    t2, t4, t3
    0x0272aee3, // sw    t2, 60(t0)        (CHR1_POS Write)

    // PPU 렌더링 트리거 (0x6C)
    0x00100eb3, // addi  t5, x0, 1
    0x0ae2ae23, // sw    t5, 164(t0)       (PPU_START = 1)
    0x00000013, // nop
    0x0002ae23, // sw    x0, 164(t0)       (PPU_START = 0)
    0x0400000b, // retirq                  (인터럽트 복귀)

    // 0x80 ~ 0x94: 여유 패딩 (NOP)
    0x00000013, 0x00000013, 0x00000013, 0x00000013, 0x00000013, 0x00000013,

    // 0x98: init_ppu (PPU 필수 베이스 주소 및 속성 초기화)
    0x0ff002b7, // lui   t0, 0x0FF00
    
    // 레이어 DDR3 주소 세팅 (BG1:0x00000, BG2:0x02000, CHR1:0x04000, SCR:0x0C000, UNI1:0x10000)
    0x00000337, // lui   t1, 0x0
    0x0062a023, // sw    t1, 0(t0)         (BG1_ADDR = 0x00000)
    0x00002337, // lui   t1, 0x2
    0x0062a223, // sw    t1, 4(t0)         (BG2_ADDR = 0x02000)
    0x00004337, // lui   t1, 0x4
    0x0062a423, // sw    t1, 8(t0)         (CHR1_ADDR = 0x04000)
    0x0000c337, // lui   t1, 0xC
    0x0062ac23, // sw    t1, 24(t0)        (SCR_ADDR = 0x0C000)
    0x00010337, // lui   t1, 0x10
    0x0062b023, // sw    t1, 32(t0)        (UNI1_ADDR = 0x10000)

    // 레이어 속성 설정 (Alpha=16, Z-order 세팅)
    0x00010337, // lui   t1, 0x10
    0x00030313, // addi  t1, t1, 0         (Alpha=16, Z=0)
    0x0262a823, // sw    t1, 48(t0)        (BG1_ATTR)
    0x00130313, // addi  t1, t1, 1         (Alpha=16, Z=1)
    0x0262b023, // sw    t1, 56(t0)        (BG2_ATTR)
    0x00330313, // addi  t1, t1, 3         (Alpha=16, Z=3)
    0x0262a023, // sw    t1, 64(t0)        (CHR1_ATTR)

    // 캐릭터 시작 위치 (X=100, Y=10 -> 0x000A0064)
    0x000a03b7, // lui   t2, 0xA0
    0x06438393, // addi  t2, t2, 100
    0x0272aee3, // sw    t2, 60(t0)        (CHR1_POS)

    // 첫 프레임 시작 트리거
    0x00100eb3, // addi  t4, x0, 1
    0x0ae2ae23, // sw    t4, 164(t0)       (PPU_START = 1)
    0x00000013, // nop
    0x0002ae23, // sw    x0, 164(t0)       (PPU_START = 0)

    // 0xEC: main_loop
    0x00000013, // nop
    0xffdff06f  // jal   x0, 0xEC          (무한 루프)
};