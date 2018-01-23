#include "holberton.h"
/**
 * main - print alphabet in lowercase using putchar
 * Return: Alphabet. Otherwise return void.
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');

}
