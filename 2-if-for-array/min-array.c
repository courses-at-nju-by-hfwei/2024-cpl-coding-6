// Created by hfwei on 2024/10/6.

#include <stdio.h>

#define SIZE 10000

int main(void) {
  // type: int[5] (not int[], not int)
  // int[5] vs. int[3]
//  int size = 0;
//  scanf("%d", &size);

  // 23, 89, 77, 12, 25, 0, 0, 0, ...
  int numbers[SIZE] = {23, 89, 77, 12, 25};

  // []: array subscript operator
  int min = numbers[0];

  // syntax
  // (1): init-clause
  // (2): cond-expression
  // (3): iteration-expression
  // (4): loop-statement (loop body)
  // iter 0: i = 1 i < 5
  // iter 1: numbers[1] = 89 vs. min = 23; min = 23; i = 2 i < 5
  // iter 2: numbers[2] = 77 vs. min = 23; min = 23; i = 3 i < 5
  // iter 3: numbers[3] = 12 vs. min = 23; min = 12; i = 4 i < 5
  // iter 4: numbers[4] = 25 vs. min = 12; min = 12; i = 5
  // terminate the loop
  for (int i = 1; i < SIZE; i++) {
    if (numbers[i] < min) {
      min = numbers[i];
    }
  }

  printf("min = %d\n", min);

  return 0;
}