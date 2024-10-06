// Created by hfwei on 2024/10/6.

#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 0;

  scanf("%d%d", &a, &b);

  // TODO: calculate the minimum of a and b
  int min = 0;

  // if statement
  if (a < b) {
    min = a;
  } else {
    min = b;
  }

//  min = a >= b ? b : a;

  printf("min(%d, %d) = %d\n",
         a, b, min);

  return 0;
}