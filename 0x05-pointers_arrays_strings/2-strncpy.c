#include "holberton.h"
/**
 * _strncpy - copies a string
 *Return: copied string
 *
 *@dest: where its copied to
 *@src: string thats copied
 *@n: max digits to count to
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	while(x < n && src[x] != '\0')
	{
		dest[x] = src[x];
			x++;
	}
	return(dest);
}
