// Created by hfwei on 2024/12/25.

// Visualization of function call: https://tinyurl.com/min-func-call
// (Using https://tinyurl.com/)

#include <stdio.h>

int Min(int a, int b);

int main(void) {
  int a = 25;
  int b = 37;

  int min = Min(a, b);
  printf("%d", min);

  return 0;
}

int Min(int a, int b) { return a > b ? b : a; }