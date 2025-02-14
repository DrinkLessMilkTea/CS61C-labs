#include "lfsr.h"

int get_bit(uint16_t x, int n) { return (x >> n) & 1; }

void lfsr_calculate(uint16_t *reg) {
  /* YOUR CODE HERE */
  int res =
      get_bit(*reg, 0) ^ get_bit(*reg, 2) ^ get_bit(*reg, 3) ^ get_bit(*reg, 5);
  *reg >>= 1;
  *reg = *reg | (res << 15);
}
