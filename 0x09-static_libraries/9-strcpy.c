#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @src: pointer to a string
 * @dest: pointer to a buffer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];

	return (dest);
}
