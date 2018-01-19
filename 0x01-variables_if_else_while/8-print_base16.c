#include <stdio.h>
/**
 *main - print all hexidecimal numbers in lowercaser
 * Return: All hexidecimal numbers in lower case. Otherwise 0
 */
int main(void)
{
	int i = 0;
	char n = 'a';

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
