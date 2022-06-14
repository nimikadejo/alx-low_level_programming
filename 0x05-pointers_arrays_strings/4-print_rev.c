#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string input
 * Return: 0
 */
void print_rev(char *s)
{
	int length;
	int r;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (r = length - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
