#include <stdio.h>

/**
 * main - Prints two numbers above 10 and below 99
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0;  num1 <= 8; num1++)
	{
		for (num2 = 1; num2 <= 9; num2++)
		{
			if (num2 > num1)
			{
				putchar((num1) + '0');
				putchar((num2) + '0');
				if (num1 != 8 || num2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
