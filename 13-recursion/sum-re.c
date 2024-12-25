// Created by hfwei on 2024/10/25.

// Visualization: https://tinyurl.com/sum-re
// (Using https://tinyurl.com/)

#include <stdio.h>

int Sum(const int nums[], int len);

int main() {
  const int numbers[] = {1, 2, 3, 4, 5};

  int sum = Sum(numbers, sizeof numbers / sizeof numbers[0]);

  printf("sum = %d\n", sum);

  return 0;
}

int Sum(const int nums[], int len) {
  if (len == 0) {
    return 0;
  }

  int partial_sum = Sum(nums, len - 1);

  return partial_sum + nums[len - 1];
}