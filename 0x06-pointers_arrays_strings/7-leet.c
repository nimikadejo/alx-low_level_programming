#include "main.h"

/**
 * leet - changes specific letters to specific numbers
 * @l: letters to convert
 * Return: string
 */
char *leet(char *l)
{
	int j;
	int i;

	char src[] = "aeotlAEOTL";
	char dest[] = "4307143071";

	for (i = 0; *(l + i); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (src[j] == *(l + i))
				*(l + i) = dest[j];
		}
	}
	return (l);
}
