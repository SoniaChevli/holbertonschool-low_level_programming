#include <stdio.h>
/**
 * main -print all numbers 00 to 09
 * Return: Print all numbers up to 99. Otherwise 0
 */
int main(void)
{
	int n = 0;
	int i = 1;

	while (n <= 9)
	{
		while (i <= 9)
		{
			putchar('0' + n);
			putchar('0' + i);
			if (i + n != 17)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		n++;
		i = n + 1;
	}
	putchar('\n');
	return (0);
}
