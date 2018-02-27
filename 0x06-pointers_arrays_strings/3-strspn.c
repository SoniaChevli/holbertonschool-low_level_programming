#include "holberton.h"
/**
 *_strspn - get the length of a prefix substring
 *Return: number of bytes in initial segment s
 *
 *@s: prefix substring
 *@accept: bytes to compare substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int x = 0;
	int boo = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		while (accept[x] != '\0')
		{
			if (accept[x] == s[i])
			{
				boo = 1;
				count++;
			}
			x++;
		}
		if (boo == 0)
			break;
		i++;
		x = 0;
		boo = 0;
	}
	return (count);

}
