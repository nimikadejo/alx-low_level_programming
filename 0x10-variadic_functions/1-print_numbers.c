#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints all numbers with a separator
 * @separator: separate numbers
 * @n: number of arguments t function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list all;
	unsigned int i;

	va_start(all, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(all, int));
		if (i != n - 1 && separator != 0)
		{
			printf("%s", separator);
		}
	}
	va_end(all);
	putchar('\n');
}
