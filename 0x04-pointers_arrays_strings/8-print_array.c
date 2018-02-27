#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of array
 *
 *@a: array
 *@n: number of digits to print
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
	}
	printf("\n");
}
