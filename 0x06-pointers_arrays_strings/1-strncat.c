#include "main.h"

/**
 * _strncat - appends a number of string character to another string
 * @dest: string to append to
 * @src: string to append
 * @n: number of characters to append
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j]; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
