// Created by hfwei on 2024/10/6.

#include <stdio.h>

int main(void) {
  int year = 0;
  scanf("%d", &year);

  // TODO: leap year or not (if-else)
  // boolean variable (0/1; false/true)
  int leap = 0;

  // year % 4 == 0 (comparison)
  // ==: equal or not
  // =: assignment (a = 1)
  // year % 4 is not a lvalue (left value)
  // > (arrow code)
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        year = 0;
      } else {
        year = 1;
      }
    } else {
      leap = 1;
    }
  } else {
    leap = 0;
  }

  // if (leap == 0) {
  //   printf("%d is a common year\n", year);
  // } else {
  //   printf("%d is a leap year\n", year);
  // }

  return 0;
}