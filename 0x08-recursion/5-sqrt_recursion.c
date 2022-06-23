#include "main.h"

/**
 * _sqrt - returns natural square root of number
 * @n: the number
 * @i: number
 * Return: -1 if there isnt a natural square
 */
int _sqrt(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
	{
		return (-1);
	}
	if (sqr == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: the number
 * Return: -1 if there isnt a natural square
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
