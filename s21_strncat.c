#include "s21_string.h"


//Добавляет строку, на которую указывает src, в конец строки,
// на которую указывает dest, длиной до n символов.

char *s21_strncat(char *dest, const char *src, s21_size_t __n){

for(s21_size_t i = 0; i < __n; i++){

if(src[i] == '\0'){
    src = &dest[i];
}
return src;

}


}