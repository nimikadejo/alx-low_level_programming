#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a string
 * @a: string to encode
 * Return: char pointer
 */
char *rot13(char *a)
{
	int i;
	int j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (a[i] == alpha[j])
			{
				a[i] = rot[j];
				break;
			}
		}
	}
	return (a);
}
