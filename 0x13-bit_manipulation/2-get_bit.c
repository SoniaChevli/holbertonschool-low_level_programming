#include "holberton.h"
/**
 *get_bit - finds the bit at a given index
 *@n: number
 *@index: index to find value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int compare = 1;

	n = n >> index;
	if ((n & compare) == 1)
	{
		return (1);
	}
	return (0);


}
