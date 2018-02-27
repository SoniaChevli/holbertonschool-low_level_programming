#include "holberton.h"
/**
 * print_diagonal - print a diagonal line
 *
 *@n: number of times \ is printed
 */
void print_diagonal(int n)
{
	int y = 0;
	int z = 0;

	while (y < n)
	{
		while (z < y)
		{
			_putchar(' ');
			z++;
		}
		_putchar('\\');
		_putchar('\n');
		z = 0;
		y++;
	}
	if (n <= 0)
		_putchar('\n');
}
