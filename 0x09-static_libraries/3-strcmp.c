#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0; s1[i] != '\0'; ++i)
	{
		if (s1[i] > s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
		else if (s1[i] < s2[i])
		{
			j = s1[i] - s2[i];
			return (j);
		}
	}
	return (0);
	}
