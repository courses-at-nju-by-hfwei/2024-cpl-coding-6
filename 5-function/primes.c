// Created by hfwei on 2024/10/10.

#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int number);

int main(void) {
  int max = 0;
  scanf("%d", &max);

  int count = 0;

  // TODO: print primes between 1 and max
  for (int i = 2; i <= max; i++) {
    // caller
    // callee
    if (IsPrime(i)) {
      count++;
    }
  }

  printf("\n %d ", count);

  return 0;
}

bool IsPrime(int number) {
  for (int j = 2; j * j <= number; j++) {
    // if j is a factor of i
    if (number % j == 0) {
      return false;
    }
  }

  return true;
}