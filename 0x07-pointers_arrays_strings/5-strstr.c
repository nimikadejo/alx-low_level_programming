#include "main.h"

/**
 * strstr - finds the first occurence of a substring needle
 * @needle: substring
 * @haystack: string
 * Return: pointer to the located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
}
