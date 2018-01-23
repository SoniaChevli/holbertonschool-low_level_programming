#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	char x = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		x = 'a';
		i++;
		_putchar('\n');

	}
}
