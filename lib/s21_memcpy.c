#include "s21_string.h"
//Копирует n символов из src в dest.

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {

  unsigned char *__dest = (unsigned char *)dest;
  const unsigned char *__src = (const unsigned char *)src;

  for (s21_size_t i = 0; i < n; i++) {
    __dest[i] = __src[i];
  }

  return __dest;
}