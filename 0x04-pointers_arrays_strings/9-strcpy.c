#include "holberton.h"
/**
 **_strcpy -move the contents of string src to dest
 *
 *@dest: destination pointer
 *@src: source string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
