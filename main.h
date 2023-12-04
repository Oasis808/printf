#ifndef main_h
#define main_h
#include <stdio.h>
#include<stdarg.h>
#include<stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char * t);
int print_int(va_list betty);
int _putsnewline(char *t);
int callback(int num);
void integer(int num);
int printf_dec(va_list args);

#endif
