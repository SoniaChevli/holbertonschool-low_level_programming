#include "holberton.h"
/**
 *string_toupper - changes all lowercase letters to uppercase
 *Return: all upper case letters
 *
 *@s: string
 */


char *string_toupper(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		if (*(s + x) >= 97 && *(s + x) <= 122)
			s[x] = s[x] - 32;
		x++;
	}
	return (s);
}
