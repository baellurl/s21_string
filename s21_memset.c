#include "s21_string.h"

// Копирует символ c (беззнаковый тип) в первые n символов строки
// на которую указывает аргумент str.

void *s21_memset(void *str, int __c, s21_size_t __n) {

  unsigned char *_str = (unsigned char *)str;

  for (s21_size_t i = 0; i < __n; i++) {

    _str[i] = (unsigned char)__c;
  }

  return _str;
}