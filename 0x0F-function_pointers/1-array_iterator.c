#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes functin given as parameter
 * @array: the array
 * @size: array size
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != 0 && action != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
