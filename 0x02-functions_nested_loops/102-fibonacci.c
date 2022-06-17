#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbets
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long int j;
	long int k;
	long int l;
	long int maxi = 20365011074;

	for (i = 0; i < 50; i++)
	{
		if (j != maxi)
			printf("%ld, ", j);
		else
			printf("%ld, \n", j);
		l = j + k;
		j = k;
		k = l;
	}

return (0);
}
