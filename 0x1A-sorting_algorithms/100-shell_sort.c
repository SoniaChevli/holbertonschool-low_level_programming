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
	unsigned int gap = 0;
	unsigned int hold;
	int i;
	unsigned int j;


	if (size <= 1 || array == NULL)
		return;

/* calculate gap */
	while (gap < size)
	{
		hold = gap;
		gap = gap * 3 + 1;
	}

	gap = hold;

	while (gap > 0)
	{

		for (i = 0; i < (int) size || i < (int) gap; i++)
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


		gap = (gap - 1) / 3;
	}
}
