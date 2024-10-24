// Created by hfwei on 2024/10/6.

#include <stdio.h>
#include <stdbool.h>

// function declaration
// function prototype scope
// year: formal parameter (形参)
bool IsLeapYear(int year);

int main(void) {
  // block scope (块作用域)
  int year = 0;
  scanf("%d", &year);

  // (): function call operator
  // int year: actual argument (实参)
  // formal parameter = actual argument
  bool leap = IsLeapYear(year);

  if (leap == false) {
    printf("%d is a common year\n", year);
  } else {
    printf("%d is a leap year\n", year);
  }

  return 0;
}

// function definition
// block scope
bool IsLeapYear(int year) {
  bool leap = false;

  if ((year % 4 == 0 && year % 100 != 0) ||
      year % 400 == 0) {
    leap = true;
  }

  return leap;
}