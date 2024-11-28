// Created by hfwei on 2024/11/27.

#include <stdio.h>
#include <stdlib.h>

#define LEN 5

void SelectionSort(int *arr, int len);
int GetMinIndex(const int *arr, int begin, int end);
void Swap(int *left, int *right);
void Print(const int *arr, int len);

int main(void) {
//  const int var = 0;
//  var = 10;
//  int var = 10;
//  const int *ptr_var = &var;
//  *ptr_var = 100;
//  var = 100;
//  int *ptr_var_1 = &var;
//  *ptr_var_1 = 1000;

  int len = 0;
  scanf("%d", &len);

  int *numbers = malloc(len * sizeof(*numbers));

  if (numbers == NULL) {
    return EXIT_FAILURE;
  }

  for (int i = 0; i < len; ++i) {
    scanf("%d", &numbers[i]);
  }

  Print(numbers, len);
  SelectionSort(numbers, len);
  Print(numbers, len);

  free(numbers);
}

void SelectionSort(int *arr, int len) {
  for (int i = 0; i < len; i++) {
    int min_index = GetMinIndex(arr, i, len);
    Swap(arr + i, arr + min_index);
  }
}

// TODO: Explain "const"
int GetMinIndex(const int *arr, int begin, int end) {
  int min = arr[begin];
  int min_index = begin;

  for (int i = begin + 1; i < end; ++i) {
    if (arr[i] < min) {
      min = arr[i];
      min_index = i;
    }
  }

  return min_index;
}

// TODO: Explain "const"
void Swap(int *left, int *right) {
  int temp = *left;
  *left = *right;
  *right = temp;
}

// TODO: Explain "const"
void Print(const int *arr, int len) {
  printf("\n");
//  *(arr + 10) = 10;
//  arr[10] = 10;
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}