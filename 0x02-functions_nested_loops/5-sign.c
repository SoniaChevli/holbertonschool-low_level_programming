#include "holberton.h"
/**
 * print_sign-print the sign of the number
 * Return: 1 or 0 or -1
 * @n: random number n
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
