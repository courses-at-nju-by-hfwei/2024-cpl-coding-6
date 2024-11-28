//
// Created by hfwei on 2024/9/26.
//

#include <math.h>
#include <stdio.h>
#include <ctype.h>

int main(void) {
  char first_name[10];
  char last_name[10];

  char gender;

  int birth_year;
  int birth_month;
  int birth_day;

  char weekday[10];

  int c_score;
  int music_score;
  int medicine_score;

  double mean = (c_score + music_score + medicine_score) / 3.0;
  double sd = sqrt((pow(c_score - mean, 2) +
                    pow(music_score - mean, 2) +
                    pow(medicine_score - mean, 2)) / 3.0);

  int rank;

  scanf("%9s%9s %c%d-%d-%d %s %d%d%d %*lf%*lf %d",
        first_name, last_name, &gender,
        &birth_day, &birth_month, &birth_year, weekday,
        &c_score, &music_score, &medicine_score,
        &rank);


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