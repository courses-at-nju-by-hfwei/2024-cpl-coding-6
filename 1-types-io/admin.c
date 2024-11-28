//
// Created by hfwei on 2024/9/26.
//

#include <math.h>
#include <stdio.h>
#include <ctype.h>

int main(void) {
  char first_name[] = "Dayou";
  char last_name[] = "Luo";

  // 32: magic number
  char gender = 'm' - 'a' + 'A';

  int birth_year = 1954;
  int birth_month = 7;
  int birth_day = 20;

  char weekday[] = "Tuesday";

  int c_score = 50;
  int music_score = 90;
  int medicine_score = 80;

  double mean = (c_score + music_score + medicine_score) / 3.0;
  double sd = sqrt((pow(c_score - mean, 2) +
      pow(music_score - mean, 2) +
      pow(medicine_score - mean, 2)) / 3.0);

  int rank = 10;

  // %s: string
  // %c: character
  // .2: .2f .2d .3s
  printf("%s\t%s\t%c\n"
         "%.2d-%.2d-%.4d\t%.3s.\n"
         "%d\t%d\t%d\n"
         "%.1f\t%.2f\t%d%%\n",
         first_name, last_name, gender,
         birth_month, birth_day, birth_year, weekday,
         c_score, music_score, medicine_score,
         mean, sd, rank);

  return 0;
}