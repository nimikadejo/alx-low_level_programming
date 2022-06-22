#include "main.h"

/**
 * _puts_recursion - prints a string and then a new line
 * @s: string to print
 * return: void
 */
void _puts_recursion(char *s)
{
	char *character;

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		character = s + 1;
		_puts_recursion(character);
	}
}
