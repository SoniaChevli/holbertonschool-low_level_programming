#include "holberton.h"
/**
 * print_diagonal - print a diagonal line
 *
 *@n: number of times \ is printed
 */
void print_diagonal(int n)
{
	int y = 1;
	int z = 1;

	while (y <= n)
	{
		while (z <= y)
		{
			_putchar(' ');
			z++;
		}
		z = 1;
		_putchar('\\');
		_putchar('\n');
		y++;
	}
}
