#include "s21_string.h"

// Разбивает строку str на ряд токенов, разделенных delim.

char *s21_strtok(char *str, const char *delim) {

  static char *p_str = s21_NULL;
  char *result = s21_NULL;
  static int pos = 0;

  if (str != s21_NULL) {
    p_str = str;
    pos = 0;
  } // если передали новую строку

  else if (p_str == s21_NULL) {
    result = s21_NULL; // если строка изначально пустая
  } else {
    str = p_str;
  }

  if (result == s21_NULL) {

    while (str[pos] != '\0') {
      int flag = 0;
      for (s21_size_t i = 0; delim[i] != '\0'; i++) {
        if (str[pos] == delim[i]) {
          flag = 1;
          break;
        }
      }
      if (!flag)
        break;
      pos++;
    }

    result = &str[pos]; // запоминаем позицию токена
    s21_size_t j = 0, k = 0;

    while (result[j] != '\0') {
      int flags = 0;
      for (k = 0; delim[k] != '\0'; k++) {
        if (result[j] == delim[k]) {
          result[j] = '\0';
          flags = 1;
          break;
        }
      }
      if (flags) // = 1
        break;
      j++;
    }
    pos += j + 1;
  }
  if (str[pos] == '\0')
    result = s21_NULL;

  return result;
}