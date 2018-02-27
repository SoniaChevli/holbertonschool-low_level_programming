#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - free a 2D array
 *Return: void
 *
 *@grid: grid to release
 *@height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
