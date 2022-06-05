#include <stdio.h>

/**
 * main - print all single base 10 digits from zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int digit = 0; digit <= 9; digit++)
		printf("%d", digit);

	printf("\n");

	return (0);
}
