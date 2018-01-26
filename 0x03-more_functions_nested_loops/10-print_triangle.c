#include "holberton.h"
/**
 *print_triangle - print traingle of hashs
 *
 *@size: random size
 */
void print_triangle(int size)
{
	int x = 1;
	int spaces;
	int hash;

	if (size == 0)
                _putchar('\n');
	while (x <= size)
	{
		spaces = size - x;
		hash = size - spaces;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		while (hash > 0)
		{
			_putchar('#');
			hash--;
		}
		x++;
		_putchar('\n');
	}
}
