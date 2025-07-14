#include "s21_string.h"

//Сравнивает первые n байтов str1 и str2.
int s21_memcmp(const void *str1, const void *str2, s21_size_t __n) {

  const unsigned char *s1 = (const unsigned char *)str1;
  const unsigned char *s2 = (const unsigned char *)str2;

  for (s21_size_t i = 0; i < __n; i++) {
    if (s1[i] != s2[i])
      return s1[i] - s2[i];
  }

  return 0;
}