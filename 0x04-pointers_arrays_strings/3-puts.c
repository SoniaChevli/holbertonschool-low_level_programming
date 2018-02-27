#include "holberton.h"
/**
 * _puts - print the string
 * Return: string. Otherwise 0.
 *
 *@str: string
 */
void _puts(char *str)
{
	char x;
	int i = 0;


	while (*(str + i) != '\0')
	{
		x = *(str + i);
		_putchar(x);
		i++;
	}
	_putchar('\n');

}
