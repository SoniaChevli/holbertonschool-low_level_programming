#include "holberton.h"
/**
 *print_line - draws a straight line in the terminal
 *
 *@n: number of times the _ character is printed
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
