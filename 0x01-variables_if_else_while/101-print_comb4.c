#include <stdio.h>
/*
 * main - print all posible different combinations of three digits
 * Return: a list of numbers weith different combinations. Otherwise 0
 */

int main(void)
{
	int n = 0;
	int i = 1;
	int x = 2;

	while (n <= 7)
	{
		while (i <= 8)
		{
			while (x <= 9)
			{
				putchar('0' + n);
				putchar('0' + i);
				putchar('0' + x);
				if ((n + i + x) != 24)
				{
					putchar(',');
					putchar(' ');
				}
				x++;
			}
			i++;
			x = i + 1;
		}
		n++;
		i = n + 1;
	}
	putchar('\n');
	return (0);
}
