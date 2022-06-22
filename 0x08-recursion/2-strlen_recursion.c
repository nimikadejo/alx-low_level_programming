#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int length = 0;
	char *string;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		string = s + 1;
		length = 1 + _strlen_recursion(string);
		return (length);
	}
}
