#include "holberton.h"
/**
 * puts_half - pritn half of string
 *
 *@str: string
 */
void puts_half(char *str)
{
	int i;
	int y;

	for (i = 1; *(str + i) != '\0'; i++)
	{
		i++;
	}
	if (i % 2 != 0)
		y = ((i - 1) / 2);
	else
		y = i / 2;
	while (y <= i)
	{
		_putchar(*(str + y));
		y++;
	}

	_putchar('\n');
}
