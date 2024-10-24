// Created by hfwei on 2024/10/10.

#include <stdio.h>

int main(void) {
  int lines = 0;
  scanf("%d", &lines);

  // TODO: print stars pyramid
  for (int i = 0; i < lines; i++) {
    // print n - 1 - i spaces
    for (int j = 0; j < lines - 1 - i; ++j) {
      printf(" ");
    }

    // print 2 * i + stars
    for (int j = 0; j < 2 * i + 1; ++j) {
      printf("*");
    }

    if (i < lines - 1) {
      printf("\n");
    }
  }

  return 0;
}