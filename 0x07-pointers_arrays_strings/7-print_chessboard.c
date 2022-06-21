#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: string
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	 int i = 0;
  int j = 0;

  for (i = 0; i < 8; i++)
    {
      for (i = 0; j < 8; j++)
        {
          _putchar(a[i][j]);
        }
    }
  _putchar('\n');
}
