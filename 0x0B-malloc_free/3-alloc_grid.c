#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates two dimensional array
 * @width: array row
 * @height: array column
 * Return: array ptr
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **a;

	if (width <= 0 || height <= 0)
		return (0);
	a = malloc(height * sizeof(int));
	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == 0)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
