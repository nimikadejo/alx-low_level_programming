#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters with a specific char
 * @size: of array
 * @c: character
 * Return: pointer to array (Success)
 * Otherwise, null
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc((size + 1) * sizeof(char));
	if (size <= 0)
	{
		return (0);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);
}
