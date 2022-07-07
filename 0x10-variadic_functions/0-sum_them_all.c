#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all -  sums all arguments
 * @n: number of undefined arguments
 * Return: sum of all arguments
 * Otherwise, 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	unsigned int sum = 0;

	va_start(list, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; sum += va_arg(list, unsigned int), i++)
		;
	}
	va_end(list);
	return (sum);
}
