#include "holberton.h"
/**
 * print_last_digit - print last digit of a number
 * @x: random number
 * Return: last digit. Otherwise 0
 */

int print_last_digit(int x)
{
	x %= 10;
	if (x < 0)
		x *= -1;
	_putchar('0' + x);
	return(x);
}
