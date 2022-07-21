#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at index
 * @n: the number
 * @index: the index
 * Return: new value at index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clearvalue;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	clearvalue = ~(1 << index);
	*n = *n & clearvalue;
	return (1);
}
