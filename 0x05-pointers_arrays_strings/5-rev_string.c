#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: 0
 */
void rev_string(char *s)
{
	char h = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		h++;

	for (i = 0; i < c; i++)
	{
		c--;
		h = s[i];
		s[i] = s[c];
		s[c] = h;
	}
}
