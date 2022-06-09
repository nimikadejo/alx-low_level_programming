#include "main.h"

/**
 * print_last_digit - function prototype
 * Description: prints last digit of a number
 * @a: digit entered
 * Return: value
 */
int print_last_digit(int a)
{
	a = a % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);

}
