// Created by hfwei on 2024/12/25.
// Code generated by ChatGPT.

#include <math.h>
#include <stdio.h>

void drawHilbert(int x, int y, int size, int level, int angle) {
  if (level == 0) {
    return;
  }

  // Store the initial coordinates
  int x_start = x;
  int y_start = y;

  // Draw the curve recursively
  drawHilbert(x, y, size / 2, level - 1, -angle);

  // Calculate new coordinates after the first segment
  x += size * cos(angle * M_PI / 180.0);
  y += size * sin(angle * M_PI / 180.0);
  printf("LINE %d %d %d %d\n", x_start, y_start, x, y);

  drawHilbert(x, y, size / 2, level - 1, angle);

  // Calculate new coordinates after the second segment
  x_start = x;
  x += size * cos(angle * M_PI / 180.0);
  y += size * sin(angle * M_PI / 180.0);
  printf("LINE %d %d %d %d\n", x_start, y_start, x, y);

  drawHilbert(x, y, size / 2, level - 1, angle);

  // Calculate new coordinates after the third segment
  x_start = x;
  x += size * cos(angle * M_PI / 180.0);
  y += size * sin(angle * M_PI / 180.0);
  printf("LINE %d %d %d %d\n", x_start, y_start, x, y);

  drawHilbert(x, y, size / 2, level - 1, -angle);
}

int main(int argc, char *argv[]) {
  int level = 5;     // Change the level for more or fewer iterations
  int size = 400;    // Size of the curve segment
  int startX = 100;  // Starting X coordinate
  int startY = 100;  // Starting Y coordinate

  printf("HILBERT CURVE OF LEVEL %d:\n", level);
  drawHilbert(startX, startY, size, level,
              90);  // Start drawing the Hilbert curve

  return 0;
}