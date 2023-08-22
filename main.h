#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

int get_number(const char*, va_list);
int get_char(const char*, va_list);
int _putchar(char c);
int _printf(const char *format, ...);
#endif
