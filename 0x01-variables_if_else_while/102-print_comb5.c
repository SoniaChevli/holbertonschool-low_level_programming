#include <stdio.h>
/**
 * main - print all possible combinations
 * Return:all possible combinations of two digit numbers seperated by a space
 *
 */

int main(void)
{
	int i = 0;
	int n = 0;
	int x = 0;
	int y = 0;

	while(n <=9)
	{
		while(i <= 9)
		{
			while(x <= 9)
			{
				while(y <= 9)
				{
					putchar('0' + i);
					putchar('0' + n);
					putchar(' ');
					putchar('0' + x);
					putchar('0' + y);
					putchar(',');
					y++;
				}
				y = 0;
				x++;
			}
			x = 0;
			i++;
		}
		n++;
	}
	putchar('\n');
		return (0);
}
