#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 *Return: pointer to array. Otherwise 0.
 *
 *@min: min value it should contain
 *@max: max value it should contain
 */
int *array_range(int min, int max)
{
	int x;
	int *arr;

	if (min > max)
		return (0);
	x = max - min + 1;
	arr = malloc(x * sizeof(int));
	if (arr == 0)
		return (0);
	x = 0;
	while (min <= max)
	{
		arr[x] = min;
		min++;
		x++;
	}
	return (arr);
}
