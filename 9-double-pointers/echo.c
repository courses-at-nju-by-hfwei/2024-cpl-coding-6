/**
 * Echo program (command-line) arguments.
 *
 * Created by hengxin on 11/27/2024.
 */

#include <stdio.h>

// argc: argument count
// argv: argument vector

// argv[0]: program name
// argv[1] .. argv[argc - 1]: command line arguments
// argv[argc]: NULL pointer
int main(int argc, char *argv[]) {
  // for version with argv
//  for (int i = 1; i < argc; i++) {
//    printf("argv[%d]: %s\n", i, argv[i]);
//  }

  // for version with pointers
  // argv: char *[]
  // argv: char **
//  for (char **ptr = argv + 1; *ptr != NULL; ptr++) {
//    printf("%s\n", *ptr);
//  }

  // while version
//  char **ptr = argv + 1;
//  while (*ptr != NULL) {
//    printf("%s\n", *ptr);
//    ptr++;
//  }

  // WRONG while version
//  char **ptr = argv + 1;
//  // *ptr
//  // *ptr != NULL
//  // ptr++
//  while (*ptr++ != NULL) {
//    printf("%s\n", *ptr);
//  }

  char **ptr = argv;
  // ++ptr
  // *ptr = NULL;
  while (*++ptr != NULL) {
    printf("%s\n", *ptr);
  }

  return 0;
}