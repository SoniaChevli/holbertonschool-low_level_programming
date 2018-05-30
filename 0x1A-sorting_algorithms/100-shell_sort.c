#include "sort.h"
/**
 *_swap - swaps integers
 * @i: first int
 * @j: second int
 */
void _swap(int *i, int *j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}
/**
 * shell_sort - sorts integers
 * @array: array of integers
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	unsigned int gap;
	unsigned int i;
	unsigned int j;


/* every time gap is changed */
	for (gap = 4; gap > 0; gap /= 4)
	{
		for (i = 0; array[i] != '\0'; i++)
		{
			for (j = i; array[i] <= array[j] && j + gap < size; j += gap)
			{
			}
			if (array[i] > array[j])
			{
				_swap(&array[i], &array[j]);
				i--;
			}
		}
		print_array(array, size);
	}
}
