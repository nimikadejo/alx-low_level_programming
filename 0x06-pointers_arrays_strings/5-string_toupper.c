#include "main.h"

/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @lower: lower case  input
 * Return: characters
 */
char *string_toupper(char *lower)
{
	int i;

	for (i = 0; lower[i] != '\0'; i++)
	{
		if (lower[i] >= 97 && lower[i] <= 122)
		{
			lower[i] = lower[i] - 32;
		}
	}
	return (lower);
}
