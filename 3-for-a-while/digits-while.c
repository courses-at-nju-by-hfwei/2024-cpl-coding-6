// Created by hfwei on 2024/10/10.

#include <stdio.h>

int main(void) {
  int number = 0;
  scanf("%d", &number);

  // TODO: number of digits
  int num_of_digits = 0;

  if (number == 0) {
    num_of_digits = 1;
  } else {
    while (number > 0) {
      number /= 10; // number = number / 10;
      num_of_digits++;
    }
  }

  printf("Number of digits is %d\n",
         num_of_digits);

  return 0;
}