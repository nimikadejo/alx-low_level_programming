#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: first integer
 * @b: secnd integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
