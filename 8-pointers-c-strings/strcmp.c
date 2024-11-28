// Created by hfwei on 2024/11/20.

#include <stdio.h>

int StrCmp(const char *s1, const char *s2);
int StrCmpStd(const char *s1, const char *s2);
int StrCmpGLibC(const char *p1, const char *p2);

int StrNCmpStd(const char *s1, const char *s2, int n);

int main() {
  const char *str1 = "hi, C";
  const char *str2 = "hi, c";

  printf("StrCmp(\"%s\", \"%s\") = %d\n", str1, str2, StrCmp(str1, str2));

  // printf("StrCmpStd(\"%s\", \"%s\") = %d\n",
  //        str1, str2, StrCmpStd(str1, str2));
  //
  // int n = 2;
  // printf("StrNCmp(\"%s\", \"%s\", %d) = %d\n",
  //        str1, str2, n, StrNCmp(str1, str2, n));

  return 0;
}

int StrCmp(const char *s1, const char *s2) {
  while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') {
    s1++;
    s2++;
  }

  // *s1 == *s2 (*s1 == '\0' && *s2 == '\0')
  if (*s1 == '\0' && *s2 == '\0') {
    return 0;
  }

  // *s1 != *s2
  return * ((const unsigned char *) s1) -
    * ((const unsigned  char *) s2);
}

int StrCmpStd(const char *s1, const char *s2) {
  for (; *s1 == *s2; s1++, s2++) {
    if (*s1 == '\0') {
      return 0;
    }
  }

  return * ((const unsigned char *) s1) -
      * ((const unsigned  char *) s2);
}

// glibc
// GNU C library
int StrCmpGLibC(const char *p1, const char *p2) {
  const unsigned char *s1 = (const unsigned char *) p1;
  const unsigned char *s2 = (const unsigned char *) p2;
  unsigned char c1;
  unsigned char c2;

  do {
    c1 = *s1++;
    c2 = *s2++;
    if (c1 == '\0') {
      return c1 - c2;
    }
  } while (c1 == c2);

  return c1 - c2;
}

int StrNCmpStd(const char *s1, const char *s2, int n) {
  for (; 0 < n; n--, s1++, s2++) {
    if (*s1 != *s2) {
      return * ((const unsigned char *) s1) -
          * ((const unsigned  char *) s2);
    } else if (*s1 == '\0') {
      return 0;
    }
  }

  return 0;
}