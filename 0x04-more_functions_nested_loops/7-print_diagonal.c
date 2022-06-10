#include "main.h"

/**
 * print_diagonal - prints diagonally
 * @n: integer
 * Return: 0 (Success)
 */
void print_diagonal(int n)
{
	int l;
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			for (m = 0; m < l; m++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
