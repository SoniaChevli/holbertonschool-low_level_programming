#include "holberton.h"
/**
 *_strpbrk - searches a string for any of set of bytes
 * Return: pointer to byte in s that matches accept. Otherwise NULL
 *
 *@s: string to be scanned
 *@accept: string containign the characters to match
 */
char *_strpbrk(char *s, char *accept)
{
	int count = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
			count++;
		}
		accept -= count;
		s++;
	}
	return (0);
}
