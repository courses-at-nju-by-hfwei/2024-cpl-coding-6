// Created by hfwei on 2024/9/25.

#include <math.h>
#include <stdio.h>
#include <ctype.h>

int main(void) {
  char first_name[] = "Tayu";
  char last_name[] = "Lo";

  char gender = 'm';

  int birth_year = 1954;
  int birth_month = 7;
  int birth_day = 20;
  char weekday[] = "Tuesday";

  int c_score = 50;
  int music_score = 99;
  int medicine_score = 78;

  double mean = (c_score + music_score + medicine_score) / 3.0;
  double sd = sqrt((pow(c_score - mean, 2) +
      pow(music_score - mean, 2) +
      pow(medicine_score - mean, 2)) / 3.0);

  int rank = 10;

  printf("%s\t%s\t%c\n"
         "%d-%d-%d\t%s\n"
         "%d\t%d\t%d\n"
         "%f\t%f\t%d\n",
         first_name, last_name, gender,
         birth_month, birth_day, birth_year, weekday,
         c_score, music_score, medicine_score,
         mean, sd, rank);

  return 0;
}