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
	int gap[] = {1, 4, 13, 40, 121};
	int x = 4;
	unsigned int i;
	unsigned int j;
	int flag = 0;

/* every time gap is changed */
	for (x = 4; x >= 0; x--)
	{

		for (i = 0; array[i] != '\0'; i++)
		{
			for (j = i; array[i] <= array[j] && j + gap[x] < size; j += gap[x])
			{
			}
			if (array[i] > array[j])
			{
				flag = 1;
				_swap(&array[i], &array[j]);
				i--;
			}
		}
		if (flag == 1)
		{
			print_array(array, size);
			flag = 0;
		}
	}
}
