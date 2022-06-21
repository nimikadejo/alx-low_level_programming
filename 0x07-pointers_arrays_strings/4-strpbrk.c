#include "main.h"

/**
 * _strpbrk - locates first occurence of string s in any byte in a string
 * @s: string
 * @accept: string
 * Return: pointer to s or null
 */
char *_strpbrk(char *s, char *accept)
{
int i;
  int j;

  while (*s != '\0' && *accept != '\0')
    {
      for (i = 0; *(s + i) != '\0'; i++)
        {
          for (j = 0; *(accept + j) != '\0'; j++)
            {
              if (*(s + i) == *(accept + j))
              {
                return (s + i);
              }
              else
              {
                return (0);
              }
            }
        }
    }
}
