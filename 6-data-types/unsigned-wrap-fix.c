// Created by hfwei on 2024/10/31.

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int Add(unsigned int left, unsigned int right);
unsigned int Sub(unsigned int left, unsigned int right);
unsigned int Mul(unsigned int left, unsigned int right);
unsigned int Div(unsigned int left, unsigned int right);
unsigned int Mod(unsigned int left, unsigned int right);

int main(void) {
  // addition
  unsigned int left_add = UINT_MAX / 2 + 1;
  unsigned int right_add = UINT_MAX / 2 + 1;

  printf("%u + %u = %u\n\n", left_add, right_add, Add(left_add, right_add));

  // subtraction
  unsigned int left_sub = 1;
  unsigned int right_sub = 2;

  printf("%u - %u = %u\n\n", left_sub, right_sub, Sub(left_sub, right_sub));

  // multiplication
  unsigned int left_mul = UINT_MAX;
  unsigned int right_mul = 2;

  printf("%u * %u = %u\n", left_mul, right_mul, Mul(left_mul, right_mul));

  // division
  unsigned int left_div = 5;
  unsigned int right_div = 0;

  printf("%u * %u = %u\n", left_div, right_div, Div(left_div, right_div));
  printf("%u * %u = %u\n", left_div, right_div, Mod(left_div, right_div));

  return 0;
}

unsigned int Add(unsigned int left, unsigned int right) {
   return left + right;
}

unsigned int Sub(unsigned int left, unsigned int right) {
    return left - right;
}

unsigned int Mul(unsigned int left, unsigned int right) {
    return left * right;
}

unsigned int Div(unsigned int left, unsigned int right) {
  return left / right;
}

unsigned int Mod(unsigned int left, unsigned int right) {
  return left % right;
}

// Add:
//  if (left + right > UINT_MAX) {
//    printf("Too Big!\n");
//    exit(1);
//  } else {
//    return left + right;
//  }

// Sub:
//  if (left - right < 0) {
//    printf("The result is negative!\n");
//    exit(1);
//  } else {
//    return left - right;
//  }

// Mul:
//  if (left * right > UINT_MAX) {
//    printf("The result is negative!\n");
//    exit(1);
//  } else {
//    unsigned int mul = left * right;
//    return mul;
//  }

// Div:
//  if (right == 0) {
//    printf("Division by zero!\n");
//    exit(1);
//  }
//
//  return left / right;

//  Mod:
//  if (right == 0) {
//    printf("Division by zero!\n");
//    exit(1);
//  }
//
//  return left % right;