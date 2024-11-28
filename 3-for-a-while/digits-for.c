// Created by hfwei on 2024/10/10.

#include <stdio.h>

int main(void) {
  int number = 0;
  scanf("%d", &number);

  int num_of_digits = 1;
  for (; number / 10 != 0; num_of_digits++) {
    number /= 10;
  }

  printf("Number of digits is %d\n", num_of_digits);

  return 0;
}