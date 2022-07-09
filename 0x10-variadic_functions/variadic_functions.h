#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int _putchar(char);
void print_all(const char * const format, ...);
typedef struct print
{
char *x;
void (*y)(va_list);
} print_a;

#endif
