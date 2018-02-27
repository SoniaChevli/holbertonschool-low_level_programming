#include <stdio.h>
/**
 * main - print all single digits seperated by a ,
 * Return: All single digit numbers seperated by a comma. Otherwise 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		if (n != 9)
{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
