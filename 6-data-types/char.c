// Created by hfwei on 2024/10/30.

#include <limits.h>
#include <stdio.h>

int main() {
  printf("CHAR_MIN = %d\n", CHAR_MIN);
  printf("CHAR_MAX = %d\n", CHAR_MAX);

  char c = 150;
  int i = 900;

  printf("i / c = %d\n", i / c);

  return 0;
}