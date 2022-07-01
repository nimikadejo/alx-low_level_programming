#include "main.h"
#include <stdlib.h>

/**
* array_range - creates array of integers
* @min: minimum number
* @max: maximum number
* Return: pointer to array
*/
int *array_range(int min, int max)
{
	int *a;
	int size;
	int i;

	if (min > max)
	{
		return (0);
	}
	size = ((max - min) + 1);

	a = malloc(sizeof(int) * size);

	if (a == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = min + i;
	}
	return (a);
}
