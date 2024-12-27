// Created by hfwei on 2024/12/25.

// Visualization: https://tinyurl.com/min-re
// (Using https://tinyurl.com/)

#include <stdio.h>

#define NUM 3

const int numbers[NUM] = {65, 28, 37};

int Min(const int nums[], int len);

int main(void) {
  int min = Min(numbers, NUM);
  printf("The minimum is %d\n", min);

  return 0;
}

int Min(const int nums[], int len) {
  if (len == 1) {
    return nums[0];
  }

  int partial_min = Min(nums, len - 1);

  return partial_min < nums[len - 1] ? partial_min : nums[len - 1];
}