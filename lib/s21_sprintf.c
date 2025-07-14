#include "s21_string.h"



int s21_sprintf(char *str, const char *format, ...){



while (*format != '\0' && *format != '%')
{
   *str++ = *format++;
if(*format == '\0') *str = '\0';

}




}