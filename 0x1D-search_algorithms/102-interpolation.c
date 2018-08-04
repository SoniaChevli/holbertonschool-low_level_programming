#include "search_algos.h"
/**
 * interpolation_search - uses interpolation search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value. Otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int  low = 0;
	unsigned int high = size - 1;
	unsigned int pos = 0;

	if (array == NULL)
		return (-1);

	while (low < high && low < size)
	{
		pos = low + ((high - low) /
			     (array[high] - array[low])) * (value - array[low]);
		if (pos > size)
		{
			printf("Value checked array[%u] is out of range\n",
			       pos);
			return (-1);
		}
		printf("Value checked array[%u] = [%u]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

	}
	return (-1);
}
