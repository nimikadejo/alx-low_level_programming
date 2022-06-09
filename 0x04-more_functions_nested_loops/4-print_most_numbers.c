#include "main.h"

/**
 * print_most_numbers - prints 0-9 except 2 and 4
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int a;
	int b;
	
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
	return;
}

