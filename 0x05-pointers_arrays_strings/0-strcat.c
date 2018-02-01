#include "holberton.h"
/**
 * _strcat - concatenates 2 strings
 *Return: concatenated string
 *
 *@dest: first string
 *@src: second string
 */
char *_strcat(char *dest, char *src)
{
	int place = 0;
	int count = 0;
	int x = 0;

	while (dest[count] != '\0')
		count++;
	while (src[place] != '\0')
	{
		dest[count + x] = src[place];
		x++;
		place++;
	}
	return (dest);
}
