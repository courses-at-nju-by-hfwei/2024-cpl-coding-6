// Created by hfwei on 2024/12/25.

// #include <SDL2/SDL.h>
// #include <math.h>
// #include <stdio.h>
//
// void drawHilbert(SDL_Renderer *renderer, int x, int y, int size, int level,
// int angle) {
//   if (level == 0) {
//     return;
//   }
//
//   // Draw the curve recursively
//   drawHilbert(renderer, x, y, size / 2, level - 1, -angle);
//   SDL_RenderDrawLine(renderer, x, y, x + size * cos(angle * M_PI / 180.0), y
//   + size * sin(angle * M_PI / 180.0)); x += size * cos(angle * M_PI / 180.0);
//   y += size * sin(angle * M_PI / 180.0);
//   drawHilbert(renderer, x, y, size / 2, level - 1, angle);
//   SDL_RenderDrawLine(renderer, x, y, x + size * cos(angle * M_PI / 180.0), y
//   + size * sin(angle * M_PI / 180.0)); x += size * cos(angle * M_PI / 180.0);
//   y += size * sin(angle * M_PI / 180.0);
//   drawHilbert(renderer, x, y, size / 2, level - 1, angle);
//   SDL_RenderDrawLine(renderer, x, y, x + size * cos(angle * M_PI / 180.0), y
//   + size * sin(angle * M_PI / 180.0)); x += size * cos(angle * M_PI / 180.0);
//   y += size * sin(angle * M_PI / 180.0);
//   drawHilbert(renderer, x, y, size / 2, level - 1, -angle);
// }
//
// int main(int argc, char *argv[]) {
//   SDL_Window *window;
//   SDL_Renderer *renderer;
//   int width = 800;
//   int height = 800;
//
//   SDL_Init(SDL_INIT_VIDEO);
//   window = SDL_CreateWindow("Hilbert Curve", SDL_WINDOWPOS_CENTERED,
//   SDL_WINDOWPOS_CENTERED, width, height, 0); renderer =
//   SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
//   SDL_SetRenderDrawColor(renderer, 255, 255, 255); // Set the background
//   color to white SDL_RenderClear(renderer);
//
//   int level = 5; // Change the level for more or fewer iterations
//   drawHilbert(renderer, 100, 100, 400, level, 90); // Start drawing the
//   Hilbert curve
//
//   SDL_RenderPresent(renderer);
//   SDL_Delay(5000); // Wait for 5 seconds before closing
//
//   SDL_DestroyRenderer(renderer);
//   SDL_DestroyWindow(window);
//   SDL_Quit();
//   return 0;
// }