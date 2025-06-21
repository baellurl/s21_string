#include "s21_string.h"
#include <string.h>
#include <stdio.h>


int main(void) {

  char str1[] = {1,2,10};
  char str2[] = {1,2,30};

  int res = s21_memcmp(str1,str2, 3);
int r = memcmp(str1,str2, 3);

    printf("MY = %d\n", res);

   printf("ORIGIN = %d\n", r);

  return 0;
}