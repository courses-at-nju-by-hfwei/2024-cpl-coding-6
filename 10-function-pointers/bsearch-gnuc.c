// Created by hfwei on 2024/12/04.
// Question: What if char key_name[] = "Zhang Chu"?

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// See https://codebrowser.dev/glibc/glibc/stdlib/stdlib.h.html#__compar_fn_t
typedef int (*__compar_fn_t)(const void *, const void *);

// See https://codebrowser.dev/glibc/glibc/bits/stdlib-bsearch.h.html#19
void *bsearch(const void *__key,
              const void *__base, size_t __nmemb, size_t __size,
              __compar_fn_t __compar);

int CompareStrs(const void *left, const void *right);

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
    "Zhang Chu",
    "Zhang Chu",
    "Zhang Chu",
    "ZuoXiao",
};

int main(void) {
  char *key_name = "Zhang Chu";

  return 0;
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