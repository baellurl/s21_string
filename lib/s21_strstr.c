#include "s21_string.h"

// Находит первое вхождение всей строки needle (не включая завершающий нулевой
// символ), которая появляется в строке haystack.

char *s21_strstr(const char *haystack, const char *needle) {

  char *rez = s21_NULL;
  s21_size_t j, i;

  if (needle[0] == '\0')
    rez = (char *)haystack;

  for (i = 0; haystack[i] != '\0'; i++) {

    for (j = 0; needle[j] != '\0'; j++) {

      if (haystack[i + j] != needle[j]) {
        break;
      }
    }

    if (needle[j] == '\0') {
      rez = (char *)haystack + i;
      break;
    }
  }

  return rez;
}