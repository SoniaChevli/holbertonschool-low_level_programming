#include "holberton.h"
/**
 * flip_bits - find the number of bits you would need to flip to change num
 *@n: number
 *@m: number to change to
 *
 *Return: number of bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, mask = 1;

	n = n ^ m;
	while (n)
	{
		if (mask & n)
			count++;
		n = n >> 1;
	}

	return (count);
}
