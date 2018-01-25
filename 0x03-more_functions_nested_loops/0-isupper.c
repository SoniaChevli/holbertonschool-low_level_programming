#include "holberton.h"
/**
 *_isupper -  print 1 if c is capital
 *Return: 0 or 1
 *
 *@c: is a random letter
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
