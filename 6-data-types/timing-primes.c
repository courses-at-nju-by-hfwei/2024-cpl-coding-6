// Created by hfwei on 2024/10/31.

#include <stdbool.h>
#include <stdio.h>
#include <time.h>

bool IsPrime(int number);

int main(void) {
  int max = 0;
  scanf("%d", &max);

  int count = 0;

  // TODO: return the current time in seconds since the Unix epoch (January 1, 1970)
  time_t start = time(NULL);
  for (int number = 2; number <= max; number++) {
    if (IsPrime(number)) {
      count++;
    }
  }
  printf("\ncount = %d\n", count);

  // TODO: return the current time in seconds since the Unix epoch (January 1, 1970)
  time_t end = time(NULL);
  printf("%lld seconds\n", end - start);

  return 0;
}

bool IsPrime(int number) {
  for (int factor = 2; factor * factor <= number; factor++) {
    if (number % factor == 0) {
      return false;
    }
  }

  return true;
}