#include "s21_string.h"

// Находит первый символ в строке str1,
// который соответствует любому символу, указанному в str2.

char *s21_strpbrk(const char *str1, const char *str2) {

  char *rez = s21_NULL;
  int flag = 0;

  for (s21_size_t i = 0; str1[i] != '\0'; i++) {

    for (s21_size_t j = 0; str2[j] != '\0'; j++) {

      if (str1[i] == str2[j]) {
        flag = 1;
        rez = (char *)str1 + i;
        break;
      }
    }

    if (flag != 0)
      break;
  }

  return rez;
}