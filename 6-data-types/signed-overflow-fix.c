// Created by hfwei on 2024/10/31.

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int Add(int left, int right);
int Sub(int left, int right);
int Mul(int left, int right);
int Div(int left, int right);
int Mod(int left, int right);
int Neg(int left);

int main(void) {
  // addition
  int left_add = INT_MAX / 2 + 1;
  int right_add = INT_MAX / 2 + 1;

  printf("%d + %d = %d\n\n", left_add, right_add, Add(left_add, right_add));

  // subtraction
  int left_sub = INT_MIN;
  int right_sub = 1;

  printf("%d - %d = %d\n\n", left_sub, right_sub, Sub(left_sub, right_sub));

  // multiplication
  int left_mul = INT_MAX;
  int right_mul = 2;

  printf("%d * %d = %d\n", left_mul, right_mul, Mul(left_mul, right_mul));

  // division
  int left_div = INT_MIN;
  int right_div = -1;

  printf("%d / %d = %d\n", left_div, right_div, Div(left_div, right_div));

  // mod (remainder)
  int left_mod = INT_MIN;
  int right_mod = -1;

  printf("%d %% %d = %d\n", left_mod, right_mod, Mod(left_mod, right_mod));

  // negation
  int left_neg = INT_MIN;

  printf("-%d = %d\n", left_neg, Neg(left_neg));

  return 0;
}

int Add(int left, int right) {
  return left + right;
}

int Sub(int left, int right) {
  return left - right;
}

int Mul(int left, int right) {
  return left * right;
}

int Div(int left, int right) {
  return left / right;
}

int Mod(int left, int right) {
  return left % right;
}

int Neg(int left) {
  return -left;
}

// Add:
//  if ((left > 0 && right > INT_MAX - left) ||
//      (left < 0 && right < INT_MIN - left)) {
//    printf("Overflow!\n");
//    exit(1);
//  } else {
//    return left + right;
//  }

// Sub
//if ((left > 0 && right < INT_MIN + left) ||
//(left < 0 && right > INT_MAX + left)) {
//printf("Overflow!\n");
//exit(1);
//} else {
//int sub = left - right;
//return sub;
//}

// Mul
//  if (left > 0) {
//    if (right > 0) { // left > 0 && right > 0
//      if (left > INT_MAX / right) {
//        printf("Overflow!\n");
//        exit(1);
//      }
//    } else { // left > 0 && right < 0
//      if (right < INT_MIN / left) {
//        printf("Overflow!\n");
//        exit(1);
//      }
//    }
//  } else {           // left <= 0
//    if (right > 0) { // left <= 0 && right > 0
//      if (left < INT_MIN / right) {
//        printf("Overflow!\n");
//        exit(1);
//      }
//    } else { // left <= 0 && right <= 0
//      if (left != 0 && right < INT_MAX / left) {
//        printf("Overflow!\n");
//        exit(1);
//      }
//    }
//  }
//
//  int mul = left * right;
//  return mul;

// Div
//  if (right == 0 || (left == INT_MIN && right == -1)) {
//    printf("Overflow!\n");
//    exit(1);
//  }
//
//  return left / right;

//  Mod
//  if (right == 0 || (left == INT_MIN && right == -1)) {
//    printf("Overflow!\n");
//    exit(1);
//  }
//
//  return left % right;

// Neg
//if (left == INT_MIN) {
//printf("Overflow!\n");
//exit(1);
//}
//
//return -left;