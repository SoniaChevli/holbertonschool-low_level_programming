#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of ints
 *Return: A pointer to the 2D array of ints. Otherwise 0.
 *
 *@width: one dimension of array
 *@height: second dimension of array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	arr = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == 0)
		{
			while (i > 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (0);

		}
	}
	return (arr);
}
