// Created by hfwei on 2024/10/31.

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int pow2(unsigned int exp);

int main(void) {
  unsigned int exp = 30;

  unsigned int pow = pow2(exp);
  printf("2^%d = %d\n", exp, pow);

  return 0;
}

unsigned int pow2(unsigned int exp) {
  if (exp >= sizeof(unsigned int) * CHAR_BIT) {
    printf("Exp is too large!\n");
    exit(1);
  }

  return 1 << exp;
}