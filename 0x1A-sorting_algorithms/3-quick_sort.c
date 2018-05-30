#include "sort.h"

/**
 * _switch - swaps two elements
 * @i: first element
 * @j: second element
 * @p: print struct
 */
void _switch(int *i, int *j, printer p)
{
	int hold;

	if (i == j)
		return;

	hold = *i;
	*i = *j;
	*j = hold;
	p.print(p.arr, p.size);

}

/**
 * partition - partitions array
 * @array: array to partition
 * @low: lowest index to start from
 * @high: highest index to end at
 * @p: print struct
 * Return: index of correctly placed pivot
 */
int partition(int *array, int low, int high, printer p)
{
	int pivot;
	int i;
	int j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i += 1;
			_switch(&array[i], &array[j], p);
		}
	}
	_switch(&array[i + 1], &array[high], p);

	return (i);
}

/**
 * __qs - recursive quick sort
 * @array: array to sort
 * @low: lowest index of recursive work
 * @high: highest index of work
 * @p: print struct
 */
void __qs(int *array, int low, int high, printer p)
{

	int i = 0;

	if (low < high)
	{
		i = partition(array, low, high, p);

		__qs(array, low, i, p);
		__qs(array, i + 1, high, p);
	}

}

/**
 * quick_sort - initializes recursion
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	printer p;

	p.arr = array;
	p.size = size;
	p.print = print_array;
	__qs(array, 0, size - 1, p);
}
