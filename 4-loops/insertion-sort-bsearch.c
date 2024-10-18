#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 10000
#define RANGE 10

int main() {
  int numbers[MAX_LEN] = { 0 };

  int size = 0;
  scanf("%d", &size);

  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    numbers[i] = rand() % RANGE;
  }

  // print the original array
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  // insertion sort with binary search
  for (int i = 1; i < size; i++) {
    int key = numbers[i];

    int low = 0;
    int high = i - 1;

    int pos = -1;
    while (low <= high) {
      int mid = (low + high) / 2;
      if (key > numbers[mid]) {
        low = mid + 1;
      } else if (key < numbers[mid]) {
        high = mid - 1;
      } else {
        pos = mid;
        low = mid + 1;
      }
    }

    if (pos == -1) {
      pos = low;
    } else {
      pos++;
    }

    for (int j = i - 1; j >= pos; j--) {
      numbers[j + 1] = numbers[j];
    }

    numbers[pos] = key;

    for (int i = 0; i < size; i++) {
      printf("%d ", numbers[i]);
    }
    printf("\n");
  }

  // print the sorted array
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}