#include <stdio.h>

/**
 * main - print all alohabets except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char alpha = 'a'; alpha <= 'z'; alpha++)
	{
	if (alpha != 'e' || alpha != 'q')
		putchar(alpha);
	}

	putchar('\n');

	return (0);
}
