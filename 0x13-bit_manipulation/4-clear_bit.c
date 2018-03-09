#include "holberton.h"
/**
 *clear_bit - set value of bit to 0
 *@n: number
 *@index: index to change to 0
 *
 *Return: 1 if it worked. Otherwise -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (*n == '\0')
		return (-1);
	if (index > sizeof(n) * 8)
		return (-1);
	*n = ~*n;
	mask = mask << index;
	*n |= mask;
	*n = ~*n;
	return (1);
}
