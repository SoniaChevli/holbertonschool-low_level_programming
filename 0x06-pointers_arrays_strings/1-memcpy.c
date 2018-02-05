#include "holberton.h"
/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 * Return: a pointer to dest
 *
 *@dest: where it is copied to
 *@src: what is copied
 *@n: number of bytes copied over
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char x;
	unsigned int i = 0;

	while (n > i)
	{
		x = src[i];
		dest[i] = x;
		i++;
	}
	return (dest);
}
