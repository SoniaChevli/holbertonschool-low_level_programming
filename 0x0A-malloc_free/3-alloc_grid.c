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
	int x;

	arr = malloc(sizeof(int *) * height);
	if (arr == 0)
		return (0);
	if (width <= 0 || height <= 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == 0)
		{
			x = i;
			while (x > 0)
			{
				free(arr[x]);
				x--;
			}
			free(arr);
			return (0);

		}
	}
	return (arr);
}
