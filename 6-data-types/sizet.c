// Created by hfwei on 2024/10/31.

#include <limits.h>
#include <stdio.h>

#define SIZE UINT_MAX

char string[SIZE] = {'A', 'B', 'C', 'D', 'E', 'F'};

void Print(const int string[], size_t size);

int main(void) {
  Print(string, SIZE);

  return 0;
}

void Print(const int string[], size_t size) {
  for (int i = 0; i < size; i++) {
    printf("%d : %d\n", i, string[i]);
  }
}