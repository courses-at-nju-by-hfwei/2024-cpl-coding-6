// Created by hfwei on 2024/11/27.

#include <stdio.h>
#include <stdlib.h>

#define LEN 3
#define ROW 3
#define COL 4

int main(void) {
  // (1) One-Dimensional Array
  // Visualization: https://tinyurl.com/pointers-malloc-int

  // malloc
  int *array = malloc(LEN * sizeof *array);
  if (array == NULL) {
    printf("malloc failed\n");
    return EXIT_FAILURE;
  }

  // fill in
  for (int i = 0; i < LEN; ++i) {
    array[i] = i * i;
  }

  // print
  for (int i = 0; i < LEN; ++i) {
    printf("%d ", array[i]);
  }
  printf("\n\n");

  // free
  free(array);

  // (2) Two-Dimensional Array
  // Visualization: https://tinyurl.com/pointers-malloc-int-array

  // malloc
  int (*table)[COL] = malloc(ROW * sizeof *table);

  // fill in
  for (int i = 0; i < ROW; ++i) {
    for (int j = 0; j < COL; ++j) {
      table[i][j] = i * j;
    }
  }

  // print
  for (int i = 0; i < ROW; ++i) {
    for (int j = 0; j < COL; ++j) {
      printf("%d ", table[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  // free
  free(table);

  // (3) One-Dimensional Array of Pointers
  // Visualization: https://tinyurl.com/pointers-malloc-arraypointers

  // malloc and fill in
  int *array_of_pointers[LEN];
  for (int i = 0; i < LEN; ++i) {
    array_of_pointers[i] = malloc((i + 1) * sizeof *array_of_pointers[i]);
    for (int j = 0; j < i + 1; ++j) {
      array_of_pointers[i][j] = i * j;
    }
  }

  // print
  for (int i = 0; i < LEN; ++i) {
    for (int j = 0; j < i + 1; ++j) {
      printf("%d ", array_of_pointers[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  // free
  for (int i = 0; i < LEN; ++i) {
    free(array_of_pointers[i]);
  }

  // (4) Two-Dimensional Array with Potentially Non-Contiguous Memory
  // Visualization: https://tinyurl.com/pointers-malloc-int-pp

  // malloc
  int **matrix = malloc(ROW * sizeof *matrix);
  for (int i = 0; i < ROW; ++i) {
    matrix[i] = malloc(COL * sizeof *matrix[i]);
  }

  // fill in
  for (int i = 0; i < ROW; ++i) {
    for (int j = 0; j < COL; ++j) {
      matrix[i][j] = i * j;
    }
  }

  // print
  for (int i = 0; i < ROW; ++i) {
    for (int j = 0; j < COL; ++j) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  // free
  for (int i = 0; i < ROW; ++i) {
    free(matrix[i]);
  }
  free(matrix);

  // (5) Two-Dimensional Array with Contiguous Memory
  // Visualization: https://tinyurl.com/pointers-malloc-int-p

  // malloc
  int *matrix_contiguous = malloc(ROW * COL * sizeof *matrix_contiguous);

  // fill in
  for (int i = 0; i < ROW; ++i) {
    for (int j = 0; j < COL; ++j) {
      matrix_contiguous[i * COL + j] = i * j;
    }
  }

  // print
  for (int i = 0; i < ROW; ++i) {
    for (int j = 0; j < COL; ++j) {
      printf("%d ", matrix_contiguous[i * COL + j]);
    }
    printf("\n");
  }

  // free
  free(matrix_contiguous);

  return 0;
}