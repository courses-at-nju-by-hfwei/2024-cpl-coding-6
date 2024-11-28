//
// Created by hfwei on 2024/9/26.
//

#include <stdio.h>

int main(void) {
  int radius = 10;

//  radius = 20;

  double circumference = 2 * 3.14159 * radius;
  double area = 3.14159 * radius * radius;

  // f: format
  // %d: d: decimal
  // .2: %f: precision

  printf("radius = %d\ncircumference = %.2f\narea = %.2f\n",
         radius, circumference, area);

  return 0;
}