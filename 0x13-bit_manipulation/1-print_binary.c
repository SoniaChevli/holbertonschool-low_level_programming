#include "holberton.h"
#include <limits.h>
/**
 *print_binary - prints the binary representation of number
 *@n: number to convert
 *
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 0;
	unsigned long int flag = 0;

	mask = ~mask;
	mask = mask >> 1;
	mask = ~mask;


	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (flag == 1)
				_putchar('0');
		}
		else
		{
			flag = 1;
			_putchar('1');
		}
		mask = mask >> 1;
	}
	if (flag == 0)
		_putchar('0');
}
