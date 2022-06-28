#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: secnd string
 * Return: new string (sucess)
 * otherwise, null
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len = 0;
	int i;
	int j;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len = i;
		j = 0;
		while (s2[j] != '\0')
		{
			j++;
			len = len + j;
		}
	}
	str = malloc(len + sizeof(char));
	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
			for (j = 0; s2[j] != '\0'; j++)
			{
				str[i] = s2[j];
			}
	}
	str[i] = '\0';
	return (str);
	free(str);
}
