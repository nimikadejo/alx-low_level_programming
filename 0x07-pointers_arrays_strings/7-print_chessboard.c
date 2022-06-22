#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: string
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8;)
	{
		for (i = 0; j < 8;)
		{
			_putchar(a[i][j]);
			j++;
		}
	}
	_putchar('\n');
	i++;
}
