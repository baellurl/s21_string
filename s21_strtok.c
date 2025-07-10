#include "s21_string.h"

// Разбивает строку str на ряд токенов, разделенных delim.

char *s21_strtok(char *str, const char *delim) {

  s21_size_t i = 0;

  static int pos = 0;

  while (str[pos] != '\0') {
    int flag = 0;
    for (i = 0; delim[i] != '\0'; i++) {
      if (str[pos] == delim[i]) {
        flag = 1;
        break;
      }
    }
    if (!flag) break;
    pos++;
  }

  char *start_token = &str[pos]; // запоминаем позицию токена
s21_size_t j = 0, k = 0;

while (start_token[j] != '\0')
{
    int flags = 0;
    for ( k = 0; delim[k] != '\0' ; k++)
    {
        if(start_token[j] == delim[k]){
            start_token[j] = '\0';
            flags = 1;
            break;
        }

    }
   if(flags) break; 
    j++;
}
return start_token;

}