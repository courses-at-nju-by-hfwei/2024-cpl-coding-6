// Created by hfwei on 2024/10/6.

#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 0;
  int c = 0;

  scanf("%d%d%d", &a, &b, &c);

  // TODO: calculate the minimum of a, b and c
  int min = 0;

  if (a < b) {
    if (a < c) {
      min = a;
    } else {
      min = c;
    }
  } else {  // a >= b
    if (b < c) {
      min = b;
    } else {
      min = c;
    }
  }

  printf("min(%d, %d, %d) = %d\n",
         a, b, c, min);

  return 0;
}