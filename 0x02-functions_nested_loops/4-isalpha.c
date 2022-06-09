#include "main.h"

/**
 *_isalpha - Function prototype
 * Description: Checks if a character is an alphabet.
 * @c: The ascii character to be checked
 *Return: 1 (Success)
 *Otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
