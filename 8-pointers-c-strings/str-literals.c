// Created by hfwei on 2024/11/20.
// Visualization:
// https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%0Aint%20main%28void%29%20%7B%0A%20%20char%20msg%5B%5D%20%3D%20%22Hello%20World!%22%3B%0A%20%20msg%5B0%5D%20%3D%20'N'%3B%0A%20%20printf%28%22%25s%5Cn%22,%20msg%29%3B%0A%0A%20%20char%20*ptr_msg%20%3D%20%22Goodbye%20World!%22%3B%0A%20%20ptr_msg%5B0%5D%20%3D%20'N'%3B%0A%20%20printf%28%22%25s%5Cn%22,%20msg%29%3B%0A%0A%20%20return%200%3B%0A%7D&cumulative=true&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
// See String literals: https://en.cppreference.com/w/c/language/string_literal

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char msg[] = "Hello World!";
  msg[0] = 'N';
  printf("%s\n", msg);

  char *ptr_msg = "Goodbye World!";
  ptr_msg[0] = 'N';
  printf("%s\n", msg);

  return 0;
}