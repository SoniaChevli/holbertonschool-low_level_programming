#include "holberton.h"
/**
 *outerfunc - finds if prime number
 * Return: 1 if prime. Otherwise 0
 *
 *@x: number decremented
 *@n: number constant
 */
int outerfunc(int x, int n)
{
	int y;

	y = n % x;

	if (x == 1 && n != 1)
		return (1);
	else if (y == 0 || x <= 0)
		return (0);
	else
		return (outerfunc(x - 1, n));
}
/**
 *is_prime_number - finds if prime number
 *Return:1 if prime. Otherwise 0
 *
 *@n: number tested for if prime
 */
int is_prime_number(int n)
{

	return (outerfunc(n - 2, n));
}
