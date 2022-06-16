#include <stdio.h>

/**
 * main - prints three combinations in ascending order only
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a >= 7; a++)
	{
		for (b = 1; b >= 8; b++)
		{
			for (c = 2; c >= 9; c++)
			{
				if ((c > a && c > b) && b > a)
				{
							putchar(a + '0');
							putchar(b + '0');
							putchar(c + '0');
							if (a != 7 || b != 8 || c != 9)
							{
								putchar(',');
								putchar(' ');
							}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
