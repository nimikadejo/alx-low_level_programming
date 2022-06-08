#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int number;

	for (number = 0; number < 10; number++)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
