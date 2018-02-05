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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}
		i++;
	}
	return (0);
}
