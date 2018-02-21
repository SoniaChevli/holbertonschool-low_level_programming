#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * Return: index of first element. -1 if no element or -size
 *
 *@array: array to search
 *@size: size of array
 *@cmp: pointer to function used to compare valuse
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array == 0 || cmp == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
