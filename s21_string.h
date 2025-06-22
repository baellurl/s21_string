#ifndef S21_STRING_H_
#define S21_STRING_H_

#include <stdio.h>



typedef unsigned long s21_size_t; // 8 bytes
#define s21_NULL ((void *)0) 

void *s21_memchr(const void *str, int __c, s21_size_t __n);
int s21_memcmp(const void *str1, const void *str2, s21_size_t __n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int __c, s21_size_t __n);

#endif