//
// Created by hfwei on 2024/10/31.
//

#include <stdio.h>

int main() {
  float a = 1.0e20F;
  float b = -1.0e20F;
  float c = 1.0F;

  float result1 = (a + b) + c;  // 先计算 (a + b)，再加 c
  float result2 = a + (b + c);  // 先计算 (b + c)，再加 a

  printf("(a + b) + c = %f\n", result1);
  printf("a + (b + c) = %f\n", result2);

  return 0;
}