#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - prints a char
 * @c: prints char
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_int - prints an int
 * @i: prints an integer
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_float - prints a float
 * @f: prints float
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_string - prints a string
 * @s: prints string
 */
void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

void print_all(const char * const format, ...)
{
	unsigned int i;
	unsigned int j;

	print_a b[] = {
	{"c", print_char},
	{"s", print_string},
	{"i", print_int},
	{"f", print_float},
	{NULL, NULL}
	};

	va_list list;
	char *seperator = "";

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;

		while (b[j].x != 0)
		{
			if ((*b[j].x) == format[i])
			{
				printf("%s", seperator);
				b[j].y(list);
				seperator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
