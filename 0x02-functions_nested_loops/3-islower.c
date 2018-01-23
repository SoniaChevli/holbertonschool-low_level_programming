#include "holberton.h"
/**
 * _islower - checks for lowercase letters
 * c - is a letter
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c <= 'z')
		return (1);
	return (0);
}
