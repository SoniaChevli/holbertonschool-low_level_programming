#include "holberton.h"
/**
 *print_numbers - function that prints 0-9
 *
 */
void print_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		_putchar('0' + x);
		x++;
	}
	_putchar('\n');
}
