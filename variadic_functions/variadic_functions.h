#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(char *sep, va_list args);
void print_int(char *sep, va_list args);
void print_float(char *sep, va_list args);
void print_string(char *sep, va_list args);
void print_all(const char * const format, ...);

#endif
