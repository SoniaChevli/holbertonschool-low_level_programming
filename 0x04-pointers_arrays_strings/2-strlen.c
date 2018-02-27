#include "holberton.h"
/**
 * _strlen - print the length of the string
 *Return: string length
 *
 *@s: string
 */
int _strlen(char *s)
{

	int i;

	while (*(s + i) != '\0')
	{
	i++;
	}
	return (i);
}
