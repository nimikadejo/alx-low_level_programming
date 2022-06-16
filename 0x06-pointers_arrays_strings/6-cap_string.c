#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @cap: string to be checked
 * Return: characters capitalized
 */
char *cap_string(char *cap)
{
	int i;

	i = 0;
	while (cap[i] != '\0')
	{
		if ((cap[i - 1] == ' ' || cap[i - 1] == '\n'
		|| cap[i - 1] == '\t' || cap[i - 1] == ','
		|| cap[i - 1] == ';' || cap[i - 1] == '!'
		|| cap[i - 1] == '?' || cap[i - 1] == '"'
		|| cap[i - 1] == '(' || cap[i - 1] == ')'
		|| cap[i - 1] == '{' || cap[i - 1] == '}'
		|| cap[i - 1] == '.')
		&& (cap[i] >= 'a' && cap[i] <= 'z'))
		{
			cap[i] = cap[i] - 32;
		}
		else if ((cap[0] >= 97 && cap[0] <= 122))
		{
			cap[0] = cap[0] - 32;
		}
		else
		{
			cap[i] = cap[i];
		}
		i++;
	}
	return (cap);
}
