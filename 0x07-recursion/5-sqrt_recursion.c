#include "holberton.h"
/**
 * _sqrt_recursion - finds narural square root
 *Return: natual square root. Otherwise -1
 *
 *@n: number to find square root
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n == 0)
		return (-1);
	x = n / _sqrt_recursion(n + 1);
	if (x == n)
		return (x);
	else
		return(_sqrt_recursion(n + 1));
}
