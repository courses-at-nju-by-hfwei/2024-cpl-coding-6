// Created by hfwei on 2024/10/10.

#include <stdio.h>

#define LEN 20
int numbers[LEN] = { 0 };

void SelectionSort(int arr[], int len);
void Print(const int arr[], int len);
int GetMinIndex(const int arr[], int begin, int end);
void Swap(int arr[], int left, int right);

int main(void) {
  int len = -1;
  while (scanf("%d", &numbers[++len]) != EOF);

  Print(numbers, len);
  SelectionSort(numbers, len);
  Print(numbers, len);

  return 0;
}

void SelectionSort(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    int min_index = GetMinIndex(arr, i, len - 1);

    // pass by value
    // arr[i] = 78 arr[min_index] = 24
    // left = arr[i]; right = arr[min_index];
    // left = 78; right = 24;
    Swap(arr, i, min_index);
  }
}

void Print(const int arr[], int len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int GetMinIndex(const int arr[], int begin, int end) {
  // find the minimum value of numbers[begin .. end]
  int min = arr[begin];
  int min_index = begin;

  for (int j = begin + 1; j <= end; ++j) {
    if (arr[j] < min) {
      min = arr[j];
      min_index = j;
    }
  }

  return min_index;
}

void Swap(int arr[], int left, int right) {
  // swap arr[i] and arr[min_index]
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
}