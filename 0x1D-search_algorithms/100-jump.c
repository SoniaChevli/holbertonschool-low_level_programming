#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * jump_linear_search - linear search of algorithim
 * @array: array to search
 * @i: start index of array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int jump_linear_search(int *array, unsigned int i, size_t size, int value)
{

	if (array == NULL)
		return (-1);

	while (i <= size && array[i] != '\0')
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
/**
 * jump_search - searches for a value in a sorted array
 * @array: array to search
 * @size: size of array to search
 * @value: value to search for
 *
 * Return: index where value is located. Otherwsie -1
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int jumper;
	unsigned int index = 0;


	if (array == NULL)
		return (-1);

	jumper = sqrt(size);


	while (array[index] < value && index < size)
	{

		printf("Value checked array[%u] = [%u]\n", index, array[index]);
		index += jumper;
	}

	printf("Value found between indexes [%u] and [%u]\n", index - jumper, index);
	return (jump_linear_search(array, (index - jumper), index, value));
}
