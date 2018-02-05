#include "holberton.h"
/**
 * _strchr - locate a character in a string
 *Return: a pointer to the first occurence of c. Otherwise NULL
 *
 *@s: string where character is found
 *@c: character to look for
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
