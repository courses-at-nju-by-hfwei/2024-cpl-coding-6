// Created by hfwei on 2024/12/25.

#include <stdio.h>

#define LEN 93

int main(void) {
  long long fibs[LEN] = {0LL, 1LL};

  int n;
  scanf("%d", &n);

  for (int i = 2; i <= n; ++i) {
    fibs[i] = fibs[i - 1] + fibs[i - 2];
  }

  printf("Fib(%d) = %lld\n", n, fibs[n]);

  return 0;
}