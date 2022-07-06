#include "function_pointers.h"

/**
 * int_index - searches for an integer in array
 * @size: array size
 * @array: the array
 * @cmp: ptr to function
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == 0 || cmp == 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			return (i);
		}
	}
	return (-1);
}
