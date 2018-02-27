#include "holberton.h"
/**
 * times_table - print times table
 *@n: random number
 *
 */
void print_times_table(int n)
{
	int x = 0;
	int i = 0;
	int y;

	if (n < 15 && n > 0)
	{
		while (x <= n)
		{
			while (i <= n)
			{
				y = i * x;
				if (y <= 9)
				{
					if (i != 0)
					{
_putchar(' ');
					_putchar(' ');
					}
					_putchar ('0' + y);
				}
				else  if (y <= 99)
				{
					_putchar (' ');
					_putchar ('0' + y / 10);
					_putchar ('0' + y % 10);
				}
				else
				{
					_putchar ('0' + y / 100);
					_putchar ('0' + y / 10 - 10);
					_putchar ('0' + y % 10);
				}
				if (i != n)
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
}
