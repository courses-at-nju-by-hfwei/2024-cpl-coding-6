// Created by hengxin on 2024/12/04.

int main() {
  char **argv;

  int *names[10];

  int (*musician_score_table)[10];

  char *StrCpyStd(char *dest, const char *src);

  int (*comp)(const void *left, const void *right);

  // see https://en.cppreference.com/w/c/program/atexit
  int atexit(void (*func)(void));

  // see https://en.cppreference.com/w/c/program/signal
  typedef void (*handler)(int);
  handler signal(int sig, handler h);

//  void (*signal(int sig, void (*handler)(int)))(int);

  char (*(*func(int num, char *str))[3])(void);

  char (*(*arr[3])(void))[5];

  // Refer to https://cdecl.org/ for more practice.
  // See https://c-faq.com/decl/spiral.anderson.html for secrets!!!
}