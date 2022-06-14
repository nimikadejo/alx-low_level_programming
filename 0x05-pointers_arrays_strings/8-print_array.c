#include <stdio.h>

/**
 * print_array - function that prints number of elements in an array
 * @a: input array
 * @n: number of elements to be printed
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
