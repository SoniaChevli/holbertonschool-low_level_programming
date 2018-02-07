#include "holberton.h"
/**
 * _sqrt_recursion - finds narural square root
 *Return: natual square root. Otherwise -1
 *
 *@n: number to find square root
 */
int _sqrt_recursion(int n)
{
	return (innerfunc(n, n));
}
int innerfunc(int x, int n)
	{
		int y;

		y = n / x;
		if (x == 0)
			return (-1);
		if (y == x)
			return (x);
		else
			return (innerfunc(x-1,n));
	}
