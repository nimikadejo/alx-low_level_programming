#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
	{
		(*f)(name);
	}
}
