#include "main.h"

/**
 * _strcat - appends src string to dest string
 * @dest: string to output
 * @src: string to be appended
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = i;
	for (i = 0; src[i]; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
