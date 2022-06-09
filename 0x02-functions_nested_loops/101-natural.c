#include <stdio.h>

/**
 * main - entry point
 * Description: prints sum of all 3 and 5 multiples below 1024
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			b = b + a;
	}

	printf("%i\n", b);

	return (0);
}
