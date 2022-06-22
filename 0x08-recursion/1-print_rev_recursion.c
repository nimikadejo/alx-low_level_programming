#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *character;

	if (*s == '\0')
	{
		return;
	}
	else
	{
		character = s + 1;
		_print_rev_recursion(character);
		_putchar(*s);
	}
}
