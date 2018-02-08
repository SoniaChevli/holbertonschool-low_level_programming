#include "holberton.h"
/**
 * innerfunc - Does the recurssion
 *Return: natual square root. Otherwise -1
 *
 *@n: number to find square root
 *@x: is n but decremented
 */

int innerfunc(int x, int n)
{
	if (x <= 0)
		return (-1);
	if (x * x == n)
		return (x);
	else
		return (innerfunc(x - 1, n));
}
/**
 * _sqrt_recursion - finds narural square root
 * Return: n twice
 *@n: number
 */

int _sqrt_recursion(int n)
{
	return (innerfunc(n, n));
}
