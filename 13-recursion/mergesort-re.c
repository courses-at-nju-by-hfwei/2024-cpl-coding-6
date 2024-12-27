// Created by hfwei on 2024/12/25.

// Visualizatin: https://tinyurl.com/mergesort-re (for LEN = 4)
// (Using https://tinyurl.com/)

#include <stdio.h>
#include <stdlib.h>

#define LEN 7

void MergeSort(int nums[], int low, int high);
// [low .. mid] [mid + 1 .. high] => [low .. high]
void Merge(int nums[], int low, int mid, int high);
void Print(const int nums[], int len);

int main(void) {
  int numbers[LEN] = {38, 27, 43, 3, 9, 82, 10};
  Print(numbers, LEN);

  // TODO: merge sort
  MergeSort(numbers, 0, LEN - 1);
  Print(numbers, LEN);

  return 0;
}

void Print(const int nums[], int len) {
  for (int i = 0; i < len; i++) {
    printf("%d ", nums[i]);
  }
  printf("\n");
}

void MergeSort(int nums[], int low, int high) {
  if (low == high) {
    return;
  }

  int mid = (low + high) / 2;
  MergeSort(nums, low, mid);
  MergeSort(nums, mid + 1, high);
  Merge(nums, low, mid, high);
}

void Merge(int nums[], int left, int mid, int right) {
  int size = right - left + 1;
  int *copy = malloc(size * sizeof *copy);

  int left_index = left;
  int right_index = mid + 1;

  int copy_index = 0;
  while (left_index <= mid && right_index <= right) {
    if (nums[left_index] <= nums[right_index]) {
      copy[copy_index] = nums[left_index];
      left_index++;
    } else {
      copy[copy_index] = nums[right_index];
      right_index++;
    }

    copy_index++;
  }

  while (left_index <= mid) {
    copy[copy_index] = nums[left_index];
    left_index++;
    copy_index++;
  }

  while (right_index <= right) {
    copy[copy_index] = nums[right_index];
    right_index++;
    copy_index++;
  }

  for (int i = 0; i < size; ++i) {
    nums[i + left] = copy[i];
  }

  free(copy);
}