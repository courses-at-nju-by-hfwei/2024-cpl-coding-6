// Created by hengxin on 11/27/2024.

// Python Tutor Visualization:
// (1) https://tinyurl.com/scores-of-musicians
// (2) https://tinyurl.com/scores-of-musicians-malloc
// https://tinyurl.com/

#include <stdio.h>
#include <stdlib.h>

#define NUM_OF_MUSICIANS 4
#define NUM_OF_SCORES 3

void Print(const int table[][NUM_OF_SCORES], int num_of_musicians);

int main() {
  // C, Java, Python scores of several musicians

  // TODO: (1) initialize scores with a 2D array
  const int scores[NUM_OF_MUSICIANS][NUM_OF_SCORES] = {
     { 0, 10, 20 },
     { 10, 20, 30 },
     { 20, 30, 40 },
     { 30, 40, 50 },
  };

  // TODO: (2) Dynamically allocate memory for scores
  // malloc here
  int (*scores_malloc)[NUM_OF_SCORES] =
      malloc(NUM_OF_MUSICIANS * sizeof(*scores_malloc));

  if (scores_malloc == NULL) {
    exit(1);
  }

  // fill in data here

  // print it here
  Print(scores, NUM_OF_MUSICIANS);

  // ptr_scores here
  int (*ptr_scores)[NUM_OF_SCORES] = scores;
  printf("ptr_scores[3][2] = %d\n",
         (*(ptr_scores + 3))[2]);

  // do not forget to free it
  free(scores_malloc);

  return 0;
}

// table: int[][NUM_OF_SCORES]
// table: int (*)[NUM_OF_SCORES]
void Print(const int table[][NUM_OF_SCORES], int num_of_musicians) {
  for (int i = 0; i < num_of_musicians; i++) {
    for (int j = 0; j < NUM_OF_SCORES; j++) {
      // table[i][j]: *(*(table + i) + j)
      // table: int (*)[3]
      // table + i: int (*)[3]  (table + 2)
      // *(table + i): int[3] int *  (*(table + 2))
      // *(table + i) + j: int *  (*(table + 2) + 1)
      // *(*(table + i) + j): int
      printf("table[%d][%d]: %d\n\n",
             i, j, table[i][j]);

      printf("table: %p\n", table);
      printf("table + %d: %p\n", i, table + i);
      printf("*(table + %d): %p\n", i, *(table + i));
      printf("*(table + %d) + %d: %p\n", i, j, *(table + i) + j);
      printf("*(*(table + %d) + %d): %d\n", i, j, *(*(table + i) + j));
    }
    printf("\n\n");
  }
}