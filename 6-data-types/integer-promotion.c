// Created by hfwei on 2024/10/31.

#include <stdio.h>

int main(void) {
  signed char left = 100;
  signed char mid = 3;
  signed char right = 4;

  signed char result = left * mid / right;

  printf("result = %d\n", result);

  return 0;
}