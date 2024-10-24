// Created by hfwei on 2024/10/10.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define LEN 21
char string[LEN] = "";

int main() {
  // example: nolemon,nomelon
  printf("Input a string containing at most 20 characters.\n");
  scanf("%20s", string);

  int len = strlen(string);
  printf("The length of \"%s\" is %d.\n", string, len);

  // TODO: test palindrome
  bool is_palindrome = true;

  for (int i = 0, j = len - 1; i < j; i++, j--) {
    if (string[i] != string[j]) {
      is_palindrome = false;
      break;
    }
  }

  printf("\"%s\" is %s a palindrome.\n", string,
         is_palindrome ? "" : "not");

  return 0;
}