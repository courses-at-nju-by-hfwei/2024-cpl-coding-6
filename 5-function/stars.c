// Created by hfwei on 2024/10/10.

#include <stdio.h>

void PrintChar(char ch, int count);
void NewLine(void);

int main(void) {
  int lines = 0;
  scanf("%d", &lines);

  // TODO: print stars pyramid
  for (int i = 0; i < lines; i++) {
    PrintChar(' ', lines - 1 - i);
    PrintChar('*', 2 * i + 1);

    if (i < lines - 1) {
      NewLine();
    }
  }

  return 0;
}

void PrintChar(char ch, int count) {
  for (int i = 0; i < count; ++i) {
    printf("%c", ch);
  }
}

void NewLine(void) {
  printf("\n");
}