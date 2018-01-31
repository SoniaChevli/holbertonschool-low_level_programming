#include "holberton.h"
/**
 * puts2 - print one char out of 2
 *
 *@str: string
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str +i));
		if (*(str + i + 1) != '\0')
			i += 2;
		else
			i += 1;
	}
	_putchar('\n');
}
