// Created by hfwei on 2024/10/31.

#include <stdio.h>
#define LEN 100

int main(void) {
  int numbers[LEN] = {0};

  for (unsigned int i = LEN; i >= 0; i--) {
    printf("%u : %d\n", i, numbers[i]);
  }

  return 0;
}