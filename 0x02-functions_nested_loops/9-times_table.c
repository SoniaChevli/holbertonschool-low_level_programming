#include "holberton.h"
/**
 * times_table - print times table
 */
void times_table(void)
{
	int x = 0;
	int i = 0;
	int y;

	while (x <= 9)
	{
		while (i <= 9)
		{
			y = i * x;
			if (y <= 9)
			{
				if (y != 0)
				_putchar(' ');
				_putchar ('0' + y);
			}
			else
			{
				_putchar ('0' + y / 10);
				_putchar ('0' + y % 10);
			}
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
		_putchar('\n');
		i = 0;
		x++;
	}
}
