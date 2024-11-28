// Created by hfwei on 2024/11/20.

#include <stdio.h>
#include <string.h>

char *StrCatStd(char *s1, const char *s2);
char *StrCatGLibC(char *dest, const char *src);

char *StrNCat(char *s1, const char *s2, size_t n);
size_t StrNLen(const char *s, size_t max);
char *StrNCatGLic(char *s1, const char *s2, size_t n);

int main(void) {
  char str[50] = "Hello ";
  char str2[50] = "World!";

  StrCatStd(str, str2);
  StrCatStd(str, " ...");
  StrCatStd(str, " Goodbye World!");

  StrCatStd(
      StrCatStd(
      StrCatStd(str, str2),
                      " ..."),
            " Goodbye World!");

//  strcat(str, str2);
//  strncat(str, " Goodbye World!", 3);

  puts(str);

  return 0;
}

char *StrCatStd(char *s1, const char *s2) {
  char *s;
  for (s = s1; *s != '\0'; s++);

  for (; (*s = *s2) != '\0'; s++, s2++);

  return s1;
}

char *StrCatGLibC(char *dest, const char *src) {
  strcpy(dest + strlen(dest), src);
  return dest;
}