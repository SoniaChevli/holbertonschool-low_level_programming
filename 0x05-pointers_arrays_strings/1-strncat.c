#include "holberton.h"
/**
 * _strncat - concatenate 2 strings stop at n
 * Return: concatenated string
 *
 *@dest: first string
 *@src: second string
 *@n: where to finish
 */
char *_strncat(char *dest, char *src, int n)
{
	int place = 0;
	int count = 0;
	int x = 0;

	while (dest[count] != '\0')
		count++;
	while (src[place] != src[n])
	{
		dest[count + x] = src[place];
		x++;
		place++;
	}
	return (dest);
}
