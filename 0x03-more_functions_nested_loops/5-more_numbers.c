#include "holberton.h"
/**
 * more_numbers - print 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int x = 0;
	int y = 0;

	while (x <= 9)
	{
		while (y <= 14)
		{
			if (y >= 10)
				_putchar('0' + (y / 10));
			if (y >= 0)
				_putchar('0' + (y % 10));
			y++;
		}
		y = 0;
		_putchar('\n');
		x++;
	}
}
