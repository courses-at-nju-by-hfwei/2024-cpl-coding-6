// Created by hfwei on 2024/11/06.
// Visualization of Swap:
// https://pythontutor.com/render.html#code=//%20Created%20by%20hfwei%20on%202024/10/12.%0A%0A%0A%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%0A%23define%20LEN%205%0A%0Avoid%20SelectionSort%28int%20arr%5B%5D,%20int%20len%29%3B%0Avoid%20WrongSwap%28int%20left,%20int%20right%29%3B%0Avoid%20Swap%28int%20*left,%20int%20*right%29%3B%0Aint%20GetMinIndex%28const%20int%20arr%5B%5D,%20int%20begin,%20int%20end%29%3B%0Avoid%20Print%28const%20int%20arr%5B%5D,%20int%20len%29%3B%0A%0Aint%20main%28void%29%20%7B%0A%20%20int%20numbers%5BLEN%5D%20%3D%20%7B%2025,%2078,%2015,%2023,%2011%20%7D%3B%0A%0A%20%20Print%28numbers,%20LEN%29%3B%0A%20%20SelectionSort%28numbers,%20LEN%29%3B%0A%20%20Print%28numbers,%20LEN%29%3B%0A%0A%20%20return%200%3B%0A%7D%0A%0Avoid%20SelectionSort%28int%20*arr,%20int%20len%29%20%7B%0A%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%20len%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20int%20min_index%20%3D%20GetMinIndex%28arr,%20i,%20len%29%3B%0A%20%20%20%20Swap%28arr%20%2B%20i,%20arr%20%2B%20min_index%29%3B%0A%20%20%7D%0A%7D%0A%0Aint%20GetMinIndex%28const%20int%20*arr,%20int%20begin,%20int%20end%29%20%7B%0A%20%20int%20min%20%3D%20arr%5Bbegin%5D%3B%0A%20%20int%20min_index%20%3D%20begin%3B%0A%0A%20%20for%20%28int%20i%20%3D%20begin%20%2B%201%3B%20i%20%3C%20end%3B%20%2B%2Bi%29%20%7B%0A%20%20%20%20if%20%28arr%5Bi%5D%20%3C%20min%29%20%7B%0A%20%20%20%20%20%20min%20%3D%20arr%5Bi%5D%3B%0A%20%20%20%20%20%20min_index%20%3D%20i%3B%0A%20%20%20%20%7D%0A%20%20%7D%0A%0A%20%20return%20min_index%3B%0A%7D%0A%0Avoid%20WrongSwap%28int%20left,%20int%20right%29%20%7B%0A%20%20int%20temp%20%3D%20left%3B%0A%20%20left%20%3D%20right%3B%0A%20%20right%20%3D%20temp%3B%0A%7D%0A%0Avoid%20Swap%28int%20*left,%20int%20*right%29%20%7B%0A%20%20int%20temp%20%3D%20*left%3B%0A%20%20*left%20%3D%20*right%3B%0A%20%20*right%20%3D%20temp%3B%0A%7D%0A%0Avoid%20Print%28const%20int%20arr%5B%5D,%20int%20len%29%20%7B%0A%20%20printf%28%22%5Cn%22%29%3B%0A%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%20len%3B%20i%2B%2B%29%20%7B%0A%20%20%20%20printf%28%22%25d%20%22,%20arr%5Bi%5D%29%3B%0A%20%20%7D%0A%20%20printf%28%22%5Cn%22%29%3B%0A%7D&cumulative=true&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
// Visualization of malloc:

#include <stdio.h>
#include <stdlib.h>

#define LEN 5

void SelectionSort(int arr[], int len);
int GetMinIndex(const int arr[], int begin, int end);
void WrongSwap(int left, int right);
//void Swap(int arr[], int left_index, int right_index);
void Swap(int *left, int *right);
void Print(const int arr[], int len);

int main(void) {
  int len = 0;
  scanf("%d", &len);

  int nums[10000] = { 0 };
//  free(nums);
  // malloc: memory allocate
  // void *
  int *numbers = malloc(len * sizeof(*numbers));

  // NULL:
  if (numbers == NULL) {
    exit(1);
  }

  for (int i = 0; i < len; i++) {
    // &numbers[i] <=> numbers + i
    scanf("%d", &numbers[i]);
  }

  Print(numbers, LEN);
  // (): function-call operator
  // int *
  SelectionSort(&numbers[0], LEN);
  SelectionSort(numbers, LEN);
  Print(numbers, LEN);

  free(numbers);
//  numbers[0] = 10;
//  free(numbers);


  return 0;
}

// 5, 2, 8, 1, 9
// int *
void SelectionSort(int *arr, int len) {
  for (int i = 0; i < len; i++) {
    int min_index = GetMinIndex(arr, i, len);
    // i = 0, min_index = 3
    // &arr[i] <=> &(*(arr + i)) <=> arr + i
//    Swap(&arr[i], &arr[min_index]);
    Swap(arr + i, arr + min_index);
  }
}

int GetMinIndex(const int *arr, int begin, int end) {
  int min = arr[begin];
  int min_index = begin;

  for (int i = begin + 1; i < end; ++i) {
    // arr[i] <=> *(arr + i) <=> *(i + arr) <=> i[arr]
    // p + i, p - i, p - q
    if (arr[i] < min) {
      min = arr[i];
      min_index = i;
    }
  }

  return min_index;
}

void WrongSwap(int left, int right) {
  int temp = left;
  left = right;
  right = temp;
}

//void Swap(int arr[], int left_index, int right_index) {
//  int temp = arr[left_index];
//  arr[left_index] = arr[right_index];
//  arr[right_index] = temp;
//}

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