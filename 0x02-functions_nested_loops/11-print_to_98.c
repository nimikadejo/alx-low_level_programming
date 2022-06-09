#include "main.h"

/**
 * print_to_98 - function prototype
 * Description: prints 9 times table from 0
 * @x: number
 * Return: void
 */
void print_to_98(int x)
{
	if (x <= 98)
	{
		for (x = x; x <= 98; x++)
		{
			if (x == 98)
			{
				printf("%d\n", x);
				break;
			}
			printf("%d, ", x);
		}
	}
	else
	{
		for (x = x; x >= 98; x--)
		{
			if (x == 98)
			{
				printf("%d\n", x);
					break;
			}
			printf("%d, ", x);
		}
	}
}
