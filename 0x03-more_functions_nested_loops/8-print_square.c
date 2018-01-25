#include "holberton.h"
/**
 * print_square - print a square of #
 *
 * @size: size of the square
 */
void print_square(int size)
{
	int x = 1;
	int y = 1;

	while (x <= size)
	{
		while (y <= size)
		{
			_putchar('#');
			y++;
		}
		y = 1;
		x++;
		_putchar('\n');
	}
}
