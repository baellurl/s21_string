#include "s21_string.h"

// Выполняет поиск последнего вхождения символа c (беззнаковый тип) в строке,
// на которую указывает аргумент str.

char *s21_strrchr(const char *str, int c) {

  s21_size_t i = 0;
  char *ptr = s21_NULL;

  while (str[i] != '\0') {
    if (str[i] == (unsigned char)c) {
      ptr = (char *)str + i;
    }
    i++;
  }

  return ptr;
}