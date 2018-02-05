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
	int i = 0;
	int x = 0;

	while (s[i] != '\0')
	{
		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
			{
				s = &s[i];
				return (s);
			}
			x++;
		}
		x = 0;
		i++;
	}
	return (0);
}
