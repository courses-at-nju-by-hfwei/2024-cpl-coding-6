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

  // TODO
  for (int i = 1; i < size; i++) {
    int key = numbers[i];
    int low = 0;
    int high = i - 1;

    while (low <= high) {
      int mid = (low + high) / 2;
      if (key >= numbers[mid]) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }

    for (int j = i - 1; j >= low; j--) {
      numbers[j + 1] = numbers[j];
    }
    numbers[low] = key;

    for (int i = 0; i < size; i++) {
      printf("%d ", numbers[i]);
    }
    printf("\n");
  }

  // Print the sorted array
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}