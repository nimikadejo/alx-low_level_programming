#include "main.h"

/**
 * factorial - calculates the factorial of a number
 * @n: number
 * Return: -1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
