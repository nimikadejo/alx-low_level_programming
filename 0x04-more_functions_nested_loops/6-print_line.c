#include "main.h"

/**
 * print_line - draws straight line in terminal
 * @n - number of lines
 * Return: 0 (Success)
 */
void print_line(int n)
{
	int m;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	return;
}
