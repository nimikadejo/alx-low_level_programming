#include <stdio.h>

/**
 * main - prints sinlgle digits with putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		putchar((char)digit);

	putchar('\n');
	return (0);
}
