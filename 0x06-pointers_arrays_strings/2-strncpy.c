#include "main.h"

/**
 * _strncpy - copies number of characters from a string to another
 * @dest: string to copy to
 * @src: string to be copied
 * @n: number of characters to copy
 * Return: characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
