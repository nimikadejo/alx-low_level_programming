#include "main.h"

/**
 * strstr - finds the first occurence of a substring needle in the string haystack
 * @needle: substring
 * @haystack: string
 * Return: pointer to the beginning of located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	{
  int i;
  int j;

  for (i = 0; *haystack[i] != '\0'; i++)
    {
      for(j = 0; *needle[j] != '\0'; j++)
        {
          if(*haystack[i] != '\0' && *needle[j] != '\0')
          {
            if(*haystack[i] == *needle[j])
            {
              return (*needle)
            }
            else
            {
              return (0);
            }
          }
        }
    }
}
}
