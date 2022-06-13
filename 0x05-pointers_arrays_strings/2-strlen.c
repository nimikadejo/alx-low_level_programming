#include "main.h"

/**
 * _strlen - prints length of string
 * @s: input string
 * Return: strlength
 */
int _strlen(char *s)
{
	int strlength;

	strlength = 0;

	while (*(s + strlength) != '\0')
	{
		strlength++;
	}
	return (strlength);
}
