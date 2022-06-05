#include <stdio.h>

/**
 * main - print base16 numbers in lower case
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');
	return (0);
}
