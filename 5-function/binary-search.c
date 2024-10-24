// Created by hfwei on 2024/10/10.

#include <stdio.h>

#define LEN 10
int dictionary[LEN] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 };

int main(void) {
  int key = 0;
  scanf("%d", &key);

  int low = 0;
  int high = LEN - 1;

  int index = -1;
  // TODO: binary search: search for key in dictionary[]
  while (low <= high) {
    int mid = (low + high) / 2;
    if (dictionary[mid] == key) {
      index = mid;
      break;
    } else if (dictionary[mid] > key) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  if (index == -1) {
    printf("Not found!\n");
  } else {
    printf("The index of %d is %d.\n", key, index);
  }

  return 0;
}