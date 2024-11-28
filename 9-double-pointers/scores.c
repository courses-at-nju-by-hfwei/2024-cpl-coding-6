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

  // TODO: (2) Dynamically allocate memory for scores
  // malloc here

  // fill in data here

  // print it here

  // ptr_scores here
//  int (*ptr_scores)[NUM_OF_SCORES] = scores;
//  printf("ptr_scores[3][2] = %d\n",
//         (*(ptr_scores + 3))[2]);

  // do not forget to free it

  return 0;
}

void Print(const int table[][NUM_OF_SCORES], int num_of_musicians) {
  for (int i = 0; i < num_of_musicians; i++) {
    for (int j = 0; j < NUM_OF_SCORES; j++) {
      printf("table[%d][%d]: %d\n\n",
             i, j, table[i][j]);

//      printf("table: %p\n", table);
//      printf("table + %d: %p\n", i, table + i);
//      printf("*(table + %d): %p\n", i, *(table + i));
//      printf("*(table + %d) + %d: %p\n", i, j, *(table + i) + j);
//      printf("*(*(table + %d) + %d): %d\n", i, j, *(*(table + i) + j));
    }
    printf("\n\n");
  }
}

//     { 0, 10, 20 },
//     { 10, 20, 30 },
//     { 20, 30, 40 },
//     { 30, 40, 50 },