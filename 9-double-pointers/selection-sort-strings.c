// Created by hfwei on 2024/11/27.

// Python Tutor Visualization: https://tinyurl.com/array-of-musicians (LEN 3)
// https://tinyurl.com/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 10

void SelectionSort(int arr[], int len);
int GetMinIndex(const int arr[], int begin, int end);
void Swap(int *left, int *right);
void Print(const int arr[], int len);

int main(void) {
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

void SelectionSort(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    int min_index = GetMinIndex(arr, i, len);
    Swap(arr + i, arr + min_index);
  }
}

int GetMinIndex(const int arr[], int begin, int end) {
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

void Swap(int *left, int *right) {
  int temp = *left;
  *left = *right;
  *right = temp;
}

void Print(const int arr[], int len) {
  printf("\n");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

//"Luo Dayou",
//"Cui Jian",
//"Dou Wei",
//"Zhang Chu",
//"Wan Qing",
//"Li Zhi",
//"Yao",
//"ZuoXiao",
//"ErShou Rose",
//"Hu Mage",