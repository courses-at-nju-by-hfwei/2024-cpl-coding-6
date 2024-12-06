// Created by hfwei on 2024/12/04.
// Question: What if char key_name[] = "Zhang Chu"?

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// See https://codebrowser.dev/glibc/glibc/stdlib/stdlib.h.html#__compar_fn_t
typedef int (*__compar_fn_t)(const void *, const void *);
//typedef int __compar_fn_t(const void *, const void *);

// See https://codebrowser.dev/glibc/glibc/bits/stdlib-bsearch.h.html#19
void *bsearch(const void *__key,
              const void *__base, size_t __nmemb, size_t __size,
              __compar_fn_t __compar);

int CompareStrs(const void *left, const void *right);
// Case Insensitive
int CompareStrsCI(const void *left, const void *right);

//int (*ChooseCompareStrsMode(bool is_sensitive))(const void *left, const void *right);
__compar_fn_t ChooseCompareStrsMode(bool is_sensitive);

const char *names[] = {
    "Cui Jian",
    "Dou Wei",
    "ErShou Rose",
    "Hu Mage",
    "Li Zhi",
    "Luo Dayou",
    "Wan Qing",
    "Yao",
    "Zhang Chu",
    "ZuoXiao",
};

int main(void) {
  const char *key_name = "Zhang Chu";
  char ** name_ptr = bsearch(&key_name,
          names, sizeof names / sizeof *names, sizeof *names,
          CompareStrs);
  if (name_ptr == NULL) {
    printf("Not Found");
  } else {
    printf("Found at %lld\n", name_ptr - (char **)names);
  }

  return 0;
}

int CompareStrs(const void *left, const void *right) {
  char * const *left_str = left;
  char * const *right_str = right;
  return strcmp(*left_str, *right_str);
}

int CompareStrsCI(const void *left, const void *right) {
  char * const *left_str = left;
  char * const *right_str = right;
  return strcasecmp(*left_str, *right_str);
}

void *bsearch(const void *__key,
              const void *__base, size_t __nmemb, size_t __size,
              __compar_fn_t __compar) {
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;
  __l = 0;
  __u = __nmemb;
  while (__l < __u) {
    __idx = (__l + __u) / 2;
    __p = (const void *) (((const char *) __base) + (__idx * __size));
    __comparison = (*__compar)(__key, __p);
    if (__comparison < 0) {
      __u = __idx;
    } else if (__comparison > 0) {
      __l = __idx + 1;
    } else {
      return (void *) __p;
    }
  }

  return NULL;
}

__compar_fn_t ChooseCompareStrsMode(bool is_sensitive) {
  return is_sensitive ? CompareStrs : CompareStrsCI;
}

// void *bsearch_leftmost(const void *__key, const void *__base,
//                        size_t __nmemb, size_t __size,
//                        __compar_fn_t __compar) {
//   size_t __l, __u, __idx;
//   const void *__p;
//   int __comparison;
//
//   __l = 0;
//   __u = __nmemb;
//   // added by ant
//   void *__index = NULL;
//
//   while (__l < __u) {
//     __idx = (__l + __u) / 2;
//     __p = (const void *) (((const char *) __base) + (__idx * __size));
//     __comparison = (*__compar)(__key, __p);
//     if (__comparison < 0) {
//       __u = __idx;
//     } else if (__comparison > 0) {
//       __l = __idx + 1;
//     } else {
//       // added by ant
//       __index = (void *) __p;
//       __u = __idx - 1;
//     }
//   }
//
//   // added by ant
//   return __index;
// }