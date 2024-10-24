// Created by hfwei on 2024/10/10.

#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int max = 0;
  scanf("%d", &max);

  int count = 0;

  // TODO: print primes between 1 and max
  for (int i = 2; i <= max; i++) {
    bool is_prime = true;

    for (int j = 2; j * j <= i; j++) {
      // if j is a factor of i
      if (i % j == 0) {
        is_prime = false;
        break;
      }
    }

    if (is_prime) {
      count++;
    }
  }

  printf("\n %d ", count);

  return 0;
}