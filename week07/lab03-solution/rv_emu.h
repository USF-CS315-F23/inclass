// RISC-V emulator types and constants

#include <stdint.h>
#include <stdbool.h>

// ABI register mappings
#define RV_ZERO      0
#define RV_RA        1
#define RV_SP        2
#define RV_A0       10
#define RV_A1       11
#define RV_A2       12
#define RV_A3       13
#define RV_NUM_REGS 32

// Opcodes for instr formats
typedef enum {
    FMT_R       = 0b0110011,
    FMT_I_LOAD  = 0b0000011,
    FMT_I_JALR  = 0b1100111,
    FMT_I_ARITH = 0b0010011,
    FMT_S       = 0b0100011,
    FMT_SB      = 0b1100011,
    FMT_UJ      = 0b1101111
} rv_format;

// Sentinel value for stopping the emulator
#define RV_STOP 0

typedef struct {
    uint64_t regs[RV_NUM_REGS];
    uint64_t pc;
} rv_state;

void rv_init(rv_state *state, uint32_t *target, 
             uint64_t a0, uint64_t a1, uint64_t a2, uint64_t a3);

uint64_t rv_emulate(rv_state *state);
