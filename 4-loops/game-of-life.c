// Created by hfwei on 2024/10/16.

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define SIZE 6

const int board[SIZE][SIZE] = {
    { 0 },
    { 0, 1, 1, 0, 0, 0 },
    { 0, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0 },
    { 0, 0, 0, 1, 1, 0 },
    { 0 }
};

//const int board1[SIZE][SIZE] = {
//    [0] = { 0 },
//    [1] = { [1] = 1, [2] = 1 },
//    [2] = { [1] = 1, [2] = 1 },
//    [3] = { [3] = 1, [4] = 1 },
//    [4] = { [3] = 1, [4] = 1 },
//};

//const int board2[SIZE][SIZE] = {
//    [1][1] = 1, [1][2] = 1,
//    [2][1] = 1, [2][2] = 1,
//    [3][3] = 1, [3][4] = 1,
//    [4][3] = 1, [4][4] = 1
//};

//const int board3[SIZE][SIZE] = {
//    0, 0, 0, 0, 0, 0,
//    0, 1, 1, 0, 0, 0,
//    0, 1, 1, 0, 0, 0,
//    0, 0, 0, 1, 1, 0,
//    0, 0, 0, 1, 1, 0,
//};

int main(void) {
  // TODO: play game-of-life

  // expand this board
  int old_board[SIZE + 2][SIZE + 2] = {0};
  for (int i = 1; i <= SIZE; i++) {
    for (int j = 1; j <= SIZE; j++) {
      old_board[i][j] = board[i - 1][j - 1];
    }
  }

  // print the old_board
  for (int i = 1; i <= SIZE; i++) {
    for (int j = 1; j <= SIZE; j++) {
      printf("%c ", old_board[i][j] ? '*' : ' ');
    }
    printf("\n");
  }
  system("clear");

  // count live neighbors for each cell
  int new_board[SIZE + 2][SIZE + 2] = {0};

  for (int i = 0; i < 10; ++i) {
    for (int i = 1; i <= SIZE; i++) {
      for (int j = 1; j <= SIZE; j++) {
        int num_of_live_neighbors =
            old_board[i - 1][j - 1] +
            old_board[i - 1][j] +
            old_board[i - 1][j + 1] +
            old_board[i][j - 1] +
            old_board[i][j + 1] +
            old_board[i + 1][j - 1] +
            old_board[i + 1][j] +
            old_board[i + 1][j + 1];

        if (old_board[i][j] == 1) {
          new_board[i][j] = (num_of_live_neighbors == 2 || num_of_live_neighbors == 3);
        } else {
          new_board[i][j] = num_of_live_neighbors == 3;
        }
      }
    }

    // print the new board
    for (int i = 1; i <= SIZE; i++) {
      for (int j = 1; j <= SIZE; j++) {
        printf("%c ", new_board[i][j] ? '*' : ' ');
      }
      printf("\n");
    }

    // #include <unistd.h> (Linux, macOS)
    sleep(1);
    // <windows.h>
    // Sleep(1000)

    // <stdlib.h> (Linux)
    // Windows: stdlib.h (system("cls"))
    system("clear");

    // copy new board onto old board
    for (int i = 1; i <= SIZE; i++) {
      for (int j = 1; j <= SIZE; j++) {
        old_board[i][j] = new_board[i][j];
      }
    }
  }

  return 0;
}