#include "sort.h"

/**
 * selection_sort - sort via selection
 * @array: pointer to array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int smallest;
	int search;
	int hold;
	int flag = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int position = 0;

	if (!array)
		return;

	while (i < size)
	{
		j = i;
		smallest = array[i];
		while (j < size)
		{
			search = array[j];
			if (smallest > search)
			{
				flag = 1;
				smallest = search;
				position = j;
			}
			j++;
		}
		if (flag)
		{
			flag = 0;
			hold = array[i];
			array[i] = smallest;
			array[position] = hold;
			print_array(array, size);
		}
		i++;
	}
}
