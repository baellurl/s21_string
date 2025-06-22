#include "s21_string.h"
#include <string.h>
#include <stdio.h>


int main(void) {

    char src[] = "hello";
    char dest[6];

 
       s21_memcpy(&dest, &src,sizeof(dest));
        memcpy(&dest,&src,sizeof(dest));
  
   printf("ORIGIN = %s\n", dest);
   printf("s21 = %s\n", dest);

  return 0;
}