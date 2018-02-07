#include "holberton.h"
/**
 *_strlen_recursion - write a function that returns the length
 *Return: int length
 *
 *@s: string
 */
int _strlen_recursion(char *s)
{
	static int count;

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(s + 1);

	}
	return (count);

}
