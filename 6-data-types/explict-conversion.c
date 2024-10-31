// Created by hfwei on 2024/10/30.

#include <limits.h>
#include <stdio.h>

int main() {
  double pi = 3.14159;

  // to obtain its fractional part
  double fraction = 0;

  // to compute num * num
  int num = 100000000; // (8 zeros)

  printf("LLONG_MAX = %lld\n", LLONG_MAX);
  long long llint = num * num;
  printf("i = %lld\n", llint);

  return 0;
}