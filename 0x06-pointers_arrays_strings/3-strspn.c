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
	int length = 0;
	unsigned int count = 0;
	char place;

	while (*s != '\0')
	{
		place = *s;
		while (*accept != '\0')
		{
			if (*accept == place)
			{
				count++;
				break;
			}
			accept++;
			length++;
		}
		accept -= length;
		s++;
	}
	return (count);

}
