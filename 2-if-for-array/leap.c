// Created by hfwei on 2024/10/6.

#include <stdio.h>

int main(void) {
  int year = 0;
  scanf("%d", &year);

  int leap = 0;

  // TODO: leap year or not (logical expressions)
  // &&: and
  // ||: or
  // !: not !A is true <=> A is false
  // short-circuit (短路求值)
  // A && B: A; if A is false, B is passed
  // A || B: A; if A is true, B is passed
  if ((year % 4 == 0 && year % 100 != 0) ||
        year % 400 == 0) {
    leap = 1;
  }

//  leap = (year % 4 == 0 && year % 100 != 0) ||
//         year % 400 == 0;

  // 0: false; not 0: true

  // if (!leap)
  // !leap is true <=> leap is false <=> leap == 0
  if (leap == 0) {
    printf("%d is a common year\n", year);
  } else {
    printf("%d is a leap year\n", year);
  }

  return 0;
}