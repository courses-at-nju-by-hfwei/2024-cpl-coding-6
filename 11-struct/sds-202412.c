// Created by hengxin on 12/11/24.
// sds.h: https://github.com/redis/redis/blob/unstable/src/sds.h
// sds.c: https://github.com/redis/redis/blob/unstable/src/sds.c

/* SDSLib 2.0 -- A C dynamic strings library
 *
 * Copyright (c) 2006-Present, Redis Ltd.
 * All rights reserved.
 *
 * Licensed under your choice of the Redis Source Available License 2.0
 * (RSALv2) or the Server Side Public License v1 (SSPLv1).
 */

#include <stdio.h>
#include <ctype.h>
#include <stdint.h>

typedef char *sds;

struct __attribute__ ((__packed__)) sdshdr5 {
  unsigned char flags; /* 3 lsb of type, and 5 msb of string length */
  char buf[];
};

struct __attribute__ ((__packed__)) sdshdr8 {
  uint8_t len; /* used */
  uint8_t alloc; /* excluding the header and null terminator */
  unsigned char flags; /* 3 lsb of type, 5 unused bits */
  char buf[];
};

struct __attribute__ ((__packed__)) sdshdr16 {
  uint16_t len; /* used */
  uint16_t alloc; /* excluding the header and null terminator */
  unsigned char flags; /* 3 lsb of type, 5 unused bits */
  char buf[];
};

struct unpacked_sdshdr16 {
  uint16_t len; /* used */
  uint16_t alloc; /* excluding the header and null terminator */
  unsigned char flags; /* 3 lsb of type, 5 unused bits */
  char buf[];
};

struct __attribute__ ((__packed__)) sdshdr32 {
  uint32_t len; /* used */
  uint32_t alloc; /* excluding the header and null terminator */
  unsigned char flags; /* 3 lsb of type, 5 unused bits */
  char buf[];
};

struct __attribute__ ((__packed__)) sdshdr64 {
  uint64_t len; /* used */
  uint64_t alloc; /* excluding the header and null terminator */
  unsigned char flags; /* 3 lsb of type, 5 unused bits */
  char buf[];
};

#define SDS_TYPE_5  0
#define SDS_TYPE_8  1
#define SDS_TYPE_16 2
#define SDS_TYPE_32 3
#define SDS_TYPE_64 4
#define SDS_TYPE_MASK 7
#define SDS_TYPE_BITS 3
#define SDS_HDR(T, s) ((struct sdshdr##T *)((s)-(sizeof(struct sdshdr##T))))
#define SDS_TYPE_5_LEN(f) ((f)>>SDS_TYPE_BITS)

static inline int sdsHdrSize(char type) {
  switch (type & SDS_TYPE_MASK) {
    case SDS_TYPE_5:return sizeof(struct sdshdr5);
    case SDS_TYPE_8:return sizeof(struct sdshdr8);
    case SDS_TYPE_16:return sizeof(struct sdshdr16);
    case SDS_TYPE_32:return sizeof(struct sdshdr32);
    case SDS_TYPE_64:return sizeof(struct sdshdr64);
  }
  return 0;
}

static inline size_t sdslen(const sds s) {
  unsigned char flags = s[-1];
  switch (flags & SDS_TYPE_MASK) {
    case SDS_TYPE_5:return SDS_TYPE_5_LEN(flags);
    case SDS_TYPE_8:return SDS_HDR(8, s)->len;
    case SDS_TYPE_16:return SDS_HDR(16, s)->len;
    case SDS_TYPE_32:return SDS_HDR(32, s)->len;
    case SDS_TYPE_64:return SDS_HDR(64, s)->len;
  }
  return 0;
}

int main(void) {
  // test sdsHdrSize
  printf("%d\n", sdsHdrSize(SDS_TYPE_5));
  printf("%d\n", sdsHdrSize(SDS_TYPE_8));
  printf("%d\n", sdsHdrSize(SDS_TYPE_16));
  printf("%zu\n", sizeof(struct unpacked_sdshdr16));
  printf("%d\n", sdsHdrSize(SDS_TYPE_32));
  printf("%d\n", sdsHdrSize(SDS_TYPE_64));
  return 0;
}