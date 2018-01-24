#include "holberton.h"
/**
 * print_last_digit - print last digit of a number
 * @x: random number
 * Return: last digit. Otherwise 0
 */

int print_last_digit(int x)
{
	if (x < 0)
	{
		x = x * -1;
		x = (x % 10);
	}
	else
	{
		x = (x % 10);
	}
return (x);
}
