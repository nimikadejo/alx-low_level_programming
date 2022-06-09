#include "main.h"

/**
 * _abs - function prototype
 * Description: computes absolute value of an integer
 * @int: integer to be computed
 * Return: Always 0
 */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		num = num * -1;
			return (num);
	}
}
