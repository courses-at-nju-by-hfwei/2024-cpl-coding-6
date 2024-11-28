// Created by hfwei on 2024/10/10.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 21
char string[LEN] = "";

bool IsParlindrome(const char str[]);

int main() {
  // example: nolemon,nomelon
  printf("Input a string containing at most 20 characters.\n");
  scanf("%20s", string);

  // TODO: test palindrome

  printf("\"%s\" is %s a palindrome.\n", string,
         IsParlindrome(string) ? "" : "not");

  return 0;
}

bool IsParlindrome(const char str[]) {
  int len = strlen(str);

  for (int i = 0, j = len - 1; i < j; i++, j--) {
    if (str[i] != str[j]) {
      return false;
    }
  }

  return true;
}