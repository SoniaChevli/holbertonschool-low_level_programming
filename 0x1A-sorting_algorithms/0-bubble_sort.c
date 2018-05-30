#include "sort.h"

/**
 * bubble_sort - sorts bubbles
 * @array: pointer to array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j = 0;
	size_t i = 0;
	int hold;
	int hold2;
	int done = 1;

	if (!array)
		return;

	for (j = size - 1; j > 0; j--)
	{
		for (i = 0; i < j; i++)
		{
			if (array[i] > array[i + 1])
			{
				done = 0;
				hold = array[i];
				hold2 = array[i + 1];
				array[i] = hold2;
				array[i + 1] = hold;
				print_array(array, size);
			}
		}
		if (done)
			return;
		done = 1;
	}
}
