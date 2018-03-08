#include "holberton.h"
/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: number to change
 *@index: index to change
 *
 *Return: 1. otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int  compare = 1;

	if (n == NULL)
		return (-1);
	if (index > sizeof(n) * 8)
		return (-1);


	*n |= compare << index;
	return (1);

}
