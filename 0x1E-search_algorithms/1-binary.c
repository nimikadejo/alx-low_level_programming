#include search_algos.h

/**
 * linear_search - searches for a value in an array of integers with Linear search algo
 * array: pointer to an array
 * size: size of array
 * value: value to search/find
 * Return: index of 
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size < 1)
		return;

	for (i = 0, i < size, i++)
	{
		if array[i] == value
			return i;
		if i = (size - 1) && array[i] != value
			return (-1);
	}
}
