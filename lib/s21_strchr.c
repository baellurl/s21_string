#include "s21_string.h"

//Выполняет поиск первого вхождения символа c (беззнаковый тип) в строке,
// на которую указывает аргумент str.

char *s21_strchr(const char *str, int c) {

  unsigned char __c = (unsigned char)c;

  s21_size_t i = 0;

  while (str[i] != '\0') {
    if (str[i] == c) {
      return (char *)&str[i];
    }

    i++;
  }

  if (str[i] == '\0') {
    return (char *)str[i];
  }
  return s21_NULL;
}