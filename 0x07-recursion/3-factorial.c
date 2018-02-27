#include "holberton.h"
/**
 * factorial - return the factorial of a given number
 * Return: Factorial. If less than 0 -1. If 0 return 1.
 *
 *@n: number to find factoerial of
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
