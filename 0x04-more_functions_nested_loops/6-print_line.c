#include "main.h"

/**
 * print_line - draws straight line in terminal
 * @n: number of lines
 * Return: 0 (Success)
 */
void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar(95);
	}
		for (m = 0; m < n; m++)
		{
			_putchar(95);
		}
		_putchar('\n');
}
