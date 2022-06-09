#include "main.h"

/**
 * print_sign - Function prototype
 * Description: prints sign of numbers
 * @n: is the integer that is entered
 * Return: 1
 * Otherwise 0 or -1
 */
int print_sign(int n)
{
	int a;
	char b;

	if (n <= 0)
	{
		if (n == 0)
		{
			a = 0;
			b = '0';
		}
		else
		{
			a = -1;
			b = '-';
		}
	}
	else
	{
		a = 1;
		b = '+';
	}

	_putchar(b);
	return (a);
}
