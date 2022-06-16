#include "main.h"

/**
 * _strcat - appends src string to dest string
 * @dest: string to output
 * @src: string to be appended
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j]; j++)
	{
		dest[i++] = src[j];
	}
	_putchar('\n');
	return (dest);
}
