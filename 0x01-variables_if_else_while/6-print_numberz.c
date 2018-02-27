#include <stdio.h>
/**
 * main- insert numbers 0-9 without using printf
 * Return: numbers 0-9. Otherwise 0
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}
	printf("\n");
	return (0);
}
