#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints all strings
 * @separator: separate string
 * @n: number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *a;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(list, char*);
		if (a == 0)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", a);
		}
	}
	if (i != n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	va_end(list);
	putchar('\n');
}
