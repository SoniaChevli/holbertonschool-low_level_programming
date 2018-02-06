#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - print the sum of the two diagonals of a square matrix
 *Return: void
 *
 *@a: array
 *@size: size of array
 */
void print_diagsums(int *a, int size)
{
	int add = 0;
	int x;
	int y;
	int i = 0;

	while (i < size)
	{
		y = (size + 1) * i;
		x = a[y];
		add += x;
		i++;
	}
	printf("%d, ", add);
	add = 0;
	i = 0;
	while (i < size)
	{
		y = (size - 1) * (i + 1);
		x = a[y];
		add += x;
		i++;
	}
	printf("%d\n", add);
}
