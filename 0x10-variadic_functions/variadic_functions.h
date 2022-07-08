#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int _putchar(char);

#endif
