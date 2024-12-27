// Created by hfwei on 2024/12/25.

// Visualization (for n = 4): https://tinyurl.com/fib-re-visual
// (Using https://tinyurl.com/)

#include <stdio.h>

long long Fib(int n);

int main(void) {
  int n;
  scanf("%d", &n);

  // TODO: computing fib(n)
  printf("%lld\n", Fib(n));

  return 0;
}

long long Fib(int n) {
  if (n <= 1) {
    return n;
  }

  return Fib(n - 1) + Fib(n - 2);
}