// Created by hfwei on 2024/12/10.

#include <stdio.h>
//#include <stddef.h>

// creference: https://en.cppreference.com/w/c/types/offsetof
// Magic: https://radek.io/posts/magical-container_of-macro/
// StackOverflow: https://stackoverflow.com/q/15832301/1833118

#define offsetof(TYPE, MEMBER) ((size_t) &(((TYPE *)0)->MEMBER))
//#define OffsetOf(TYPE, MEMBER) (&(((TYPE *)0)->MEMBER))

#define container_of(ptr, type, member) ({                      \
        const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
        (type *)( (char *)__mptr - offsetof(type,member) );})

typedef struct abc {
  char a;
  int b;
  char c;
} ABC;

int main(void) {
  printf("sizeof(ABC) = %zu\n", sizeof(ABC));
  printf("offsetof(ABC, a) = %zu\n", offsetof(ABC, a));
  printf("offsetof(ABC, b) = %zu\n", offsetof(ABC, b));
  printf("offsetof(ABC, c) = %zu\n", offsetof(ABC, c));

  ABC abc = {'a', 42, 'c'};
  const int *b_ptr = &abc.b;
  ABC *abc_ptr = container_of(b_ptr, ABC, b);
  printf("address: %p\t%p\n", abc_ptr, &abc);

  return 0;
}