#include "holberton.h"
/**
 **_strcpy - move the contents of string src to dest
 *Return: character;
 *
 *@dest: destination pointer
 *@src: source string
 */
char *_strcpy(char *dest, char *src)
{
	int place = 0;

	while (src[place] != '\0')
	{
		dest[place] = src[place];
		place++;
	}
	return (dest);
}
