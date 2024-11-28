//
// Created by hfwei on 2024/9/26.
//

#include <stdio.h>
#include <math.h>

int main(void) {
  const double PI = 3.14159;
  int radius = 100;

  // surfaceArea
  double surface_area = 4 * PI * pow(radius, 2);
  double volume = 4.0 / 3 * PI * pow(radius, 3);

  // 15: width
  printf("%-15.4f : surface_area\n%-15.4f : volume\n",
         surface_area, volume);

  return 0;
}