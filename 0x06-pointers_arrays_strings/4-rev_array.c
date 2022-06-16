#include "main.h"

/**
 * reverse_content - reverses a number of content in an array of integers
 * @a: array of integers
 * @n: number of content to reverse
 * Return: void
 */
void reverse_array(int *a, int n)
{
	char rev = a[0];
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
