#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies from one string to another
 * @str: string to copy from
 * Return: second string (Success)
 * otherwise, null
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}

	s = malloc((j + 1) * sizeof(char));
	if (s == 0)
	{
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
	free(s);
}
