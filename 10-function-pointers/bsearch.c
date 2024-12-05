// Created by hfwei on 2024/12/04.

#include <stdio.h>

// See https://elixir.bootlin.com/linux/latest/source/include/linux/types.h#L245
typedef int (*cmp_func_t)(const void *a, const void *b);

// See https://elixir.bootlin.com/linux/latest/source/include/linux/bsearch.h#L8
void *bsearch(const void *key,
              const void *base,
              size_t num, size_t size, cmp_func_t cmp);

int main(void) {

  return 0;
}

void *bsearch(const void *key,
              const void *base, size_t num, size_t size,
              cmp_func_t cmp) {
  const char *pivot;
  int result;

  while (num > 0) {
    pivot = base + (num >> 1) * size;
    result = cmp(key, pivot);

    if (result == 0) {
      return (void *) pivot;
    }

    if (result > 0) {
      base = pivot + size;
      num--;
    }

    num >>= 1;
  }

  return NULL;
}