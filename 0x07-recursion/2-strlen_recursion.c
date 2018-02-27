#include "holberton.h"
/**
 *_strlen_recursion - write a function that returns the length
 *Return: int length
 *
 *@s: string
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));

	}
	else
	{
		return (0);
	}

}
