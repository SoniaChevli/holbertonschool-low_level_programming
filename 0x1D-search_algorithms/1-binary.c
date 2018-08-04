#include <stdio.h>
#include <stdlib.h>
/**
 * print_array - prints array
 * @array: array to print
 * @start: start index
 * @size: size
 *
 * Return: nothing
 */
void print_array(int *array, unsigned int start, unsigned int size)
{
	printf("Searching in array: ");
	while (start <= size)
	{
		printf("%d", array[start]);
		start++;
		if (start <= size)
			printf(", ");
	}
	printf("\n");
}
/**
 * binary_search - binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value. Otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int pivot = 0;
	unsigned int start = 0;
	unsigned int end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{

		print_array(array, start, end);
		pivot = start + (end - start) / 2;

		if (value == array[pivot])
			return (pivot);

		if (value < array[pivot])
			end = pivot - 1;

		else
			start = pivot + 1;

	}
	return (-1);
}
