#include "holberton.h"
/**
 *_isdigit - print 1 or c depending on if c is a digit
 *Return: 1 or 0;
 *
 *@c: random digit
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}
