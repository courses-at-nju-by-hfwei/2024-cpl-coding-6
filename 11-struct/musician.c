// Created by hfwei on 2024/12/11.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// enumeration
typedef enum gender {
  MALE,
  FEMALE,
  SECRET,
  GENDER_KIND,
} Gender;

typedef struct score {
  int c_score;  // 4
  int java_score; // 4
  int python_score; // 4
} Score;

// padding: internal padding, tailing padding
// alignment
// tag
typedef struct musician {
  char *first_name; // 8
  char *last_name;  // 8

  Gender gender;

  char *first_album; // 8

  Score score;

  union {
    int performance;
    double funding;
    int awards;
    char *text;
  } year_end_summary;

  enum {
    PERFORMANCE,
    FUNDING,
    AWARDS,
    TEXT,
  } summary_type;
} Musician;

void Print(Musician *m);
int CompareMusicianByCScore(const void *left, const void *right);
int CompareMusicianByName(const void *left, const void *right);

int main(void) {
  printf("%zu\n", sizeof(Gender));
  printf("%zu\n", sizeof(Musician));
  struct musician cui = {
      "Jian",
      "Cui",
      MALE,
      "XinChangZhengLuShangDeYaoGun",
      10,
      20,
      30,
      .year_end_summary.funding = 2.5,
      .summary_type = FUNDING,
  };

  struct musician luo = {
      .first_name = "Dayou",
      .last_name = "Luo",
      .gender = MALE,
      .first_album = "ZhiHuZheYe",
      .score = {
          .c_score = 20,
          .java_score = 10,
          .python_score = 30,
      },
      .year_end_summary.performance = 20,
      .summary_type = PERFORMANCE,
  };

  Musician zhang = {
      .first_name = "Chu",
      .last_name = "Zhang",
      .gender = MALE,
      .first_album = "YiKeBuKenMeiSuDeXin",
      .score = {
          .c_score = 20,
          .java_score = 10,
          .python_score = 30,
      },
      .year_end_summary.awards = 2,
      .summary_type = AWARDS,
  };

  Musician musicians[] = {cui, zhang, luo};
  for (int i = 0; i < 3; ++i) {
    Print(musicians + i);
  }
//  qsort(musicians, sizeof musicians / sizeof *musicians,
//        sizeof *musicians, CompareMusicianByCScore);
  qsort(musicians, sizeof musicians / sizeof *musicians,
        sizeof *musicians, CompareMusicianByName);
  for (int i = 0; i < 3; ++i) {
    Print(musicians + i);
  }

  Musician guo = zhang;

  return 0;
}

void Print(Musician *m) {
  printf("%s %s %c %s %d %d %d\n",
         // .: member access operator
         m->first_name, // ->: arrow operator
         m->last_name,
         m->gender,
         m->first_album,
         m->score.c_score,
         m->score.java_score,
         m->score.python_score);

  switch (m->summary_type) {
    case PERFORMANCE:
      printf("performance: %d\n", m->year_end_summary.performance);
      break;
    case FUNDING:
      printf("funding: %.2lf\n", m->year_end_summary.funding);
      break;
    case AWARDS:
      printf("awards: %d\n", m->year_end_summary.awards);
      break;
    case TEXT:
      printf("text: %s\n", m->year_end_summary.text);
  }
}

// left, right: Musician*
int CompareMusicianByCScore(const void *left, const void *right) {
  const Musician *m1 = left;
  const Musician *m2 = right;
  int m1_c_score = m1->score.c_score;
  int m2_c_score = m2->score.c_score;

  return m1_c_score - m2_c_score;
}

int CompareMusicianByName(const void *left, const void *right) {
//  const Musician const *m1 = left;
//  const Musician const *m2 = right;
//
//  return strcmp(m1->first_name, m2->first_name);

  char *const *m1_first_name_ptr = left;
  char *const *m2_first_name_ptr = right;
  return strcmp(*m1_first_name_ptr, *m2_first_name_ptr);
}