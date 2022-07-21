#include "main.h"

/**
 * flip_bits - flips bits
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int stage = 0;
	unsigned long int counter = 0;

	stage = n ^ m;
	while (stage)
	{
		if (stage & 1)
			counter++;

		stage >>= 1;
	}

	return (counter);
}
