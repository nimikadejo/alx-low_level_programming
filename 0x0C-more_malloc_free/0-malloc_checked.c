#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: integer
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == 0)
	{
		exit(98);
	}
	return (a);
	free(a);
}

