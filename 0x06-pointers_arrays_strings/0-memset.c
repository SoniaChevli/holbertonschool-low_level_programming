#include "holberton.h"
/**
 * _memset - fill memory with a constant byte
 * Return: pointer to the memory area s
 *
 *@s: pointer to a string
 *@b: character that is filling memory
 *@n: number of bytes of memory filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (n > x)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
