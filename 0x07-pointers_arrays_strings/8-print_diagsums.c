#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagnals of a square matrix of integers
 * @a: array
 * @size: of square matrix of integers
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size)
	{
		sum1 = sum1 + a[(size + 1) * i];
		sum2 = sum2 + a[(size - 1) * (i + 1)];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
}
