// Created by hfwei on 2024/10/16.
// Code generated by ChatGPT.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_LEN 10000
#define RANGE 10

int main(void) {
  int numbers[MAX_LEN] = { 0 };

  int size = 0;
  scanf("%d", &size);

  // generate an array of random integers between 0 and RANGE - 1
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
    numbers[i] = rand() % RANGE;
  }

  // print the original array
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  // TODO: insertion sort
  for (int i = 1; i < size; i++) {
    // numbers[0 .. i - 1] is already sorted
    int key = numbers[i];

    int j = i - 1;
    while (j >= 0 && numbers[j] > key) {
      numbers[j + 1] = numbers[j];
      j--;
    }
    numbers[j + 1] = key;

    // numbers[0 .. i] is already sorted
    for (int i = 0; i < size; i++) {
      printf("%d ", numbers[i]);
    }
    printf("\n");
  }
  // i = size
  // numbers[0 .. size - 1] is already sorted

  // print the sorted array
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");

  return 0;
}