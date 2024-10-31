// Created by hfwei on 2024/10/10.

#include <stdio.h>

int main() {
  const int array[] = {0, 1, 2, 3, 4};
  int i = -1;

  size_t size = sizeof array / sizeof array[0];
  printf("The size of the array is %zu\n", size);

  // size: size_t (unsigned long long int)
  // i: int (signed int)
  // i = -1 11111111111111
  if (i <= size) {
    printf("i <= length of array\n");
  } else {
    printf("i > length of array\n");
  }

  return 0;
}