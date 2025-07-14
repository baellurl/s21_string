#include "s21_string.h"

//Выполняет поиск первого вхождения символа c (беззнаковый тип)
// в первых n байтах строки, на которую указывает аргумент str.

void *s21_memchr(const void *str, int __c, s21_size_t __n) {

  const unsigned char *p = (const unsigned char *)str;

  for (s21_size_t i = 0; i < __n; i++) {
    if (p[i] == (unsigned char)__c) {
      return (void *)(p + i);
    }
  }

  return s21_NULL;
}