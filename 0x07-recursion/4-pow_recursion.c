#include "holberton.h"
/**
 * _pow_recursion - return the value of x raised to y
 * Return: product. Otherwise -1
 *
 *@x: value multiped
 *@y: number of times x should be multiplied
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
