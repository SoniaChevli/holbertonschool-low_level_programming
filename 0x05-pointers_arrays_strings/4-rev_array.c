#include "holberton.h"
/**
 *reverse_array - reverse an array of integers
 *
 *@a: array
 *@n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int x = 0;
	int y;
	int z;

	n -= 1;
	while (n > x)
	{
		y = a[x];
		z = a[n];
		a[n] = y;
		a[x] = z;
		x++;
		n--;
	}
}
