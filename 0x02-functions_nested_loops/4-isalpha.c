#include "holberton.h"
/**
 * _isalpha - check for alphabetic character
 * Return: 1 if c is a letter. Otherwise 0
 */

int _isalpha(int c)
{
	if( c <= 'z' && c >= 'A')
		return (1);
	return (0);
}
