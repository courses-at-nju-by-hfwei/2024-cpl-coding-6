// Created by hfwei on 2024/11/20.
//
// C Operator Precedence:
// https://en.cppreference.com/w/c/language/operator_precedence#:~:text=C%20Operator%20Precedence%20%20%20%20Precedence%20,union%20member%20access%20%2028%20more%20rows%20

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void StrCpy1(char *dest, const char *src);
void StrCpy2(char *dest, const char *src);
void StrCpy3(char *dest, const char *src);
void StrCpy4(char *dest, const char *src);
void StrCpy5(char *dest, const char *src);
void StrCpy6(char *dest, const char *src);
char *StrCpyStd(char *dest, const char *src);

int main() {
  const char *src = "Hello World";
  char *dest = malloc(strlen(src) + 1);

  StrCpy4(dest, src);
  StrCpy5(dest, src);
  printf("dest = %s\n", dest);

//  strlen(StrCpyStd(dest, src));
//  printf("dest = %s\n", dest);

  return 0;
}

void StrCpy1(char *dest, const char *src) {
  int i = 0;

  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }

  dest[i] = '\0';
}

void StrCpy2(char *dest, const char *src) {
  int i = 0;

  while ((dest[i] = src[i]) != '\0') {
    i++;
  }
}

void StrCpy3(char *dest, const char *src) {
  int i = 0;

  // dest[i]: *(dest + i)
  while ((*(dest + i) = *(src + i)) != '\0') {
    i++;
  }
}

void StrCpy4(char *dest, const char *src) {
  while ((*dest = *src) != '\0') {
    src++;
    dest++;
  }
  // *src = '\0'
  // *dest = '\0'
  printf("%s\n", src);
}

void StrCpy5(char *dest, const char *src) {
  // *dest = *src
  // *dest != '\0'
  // src++
  // dest++
  while ((*dest++ = *src++) != '\0');
  // src, dest beyond '\0'
  printf("%s\n", src);
}

void StrCpy6(char *dest, const char *src) {
  while ((*dest++ = *src++));
}

char *StrCpyStd(char *dest, const char *src) {
  for (char *s = dest; (*s++ = *src++) != '\0'; );
  return dest;
}