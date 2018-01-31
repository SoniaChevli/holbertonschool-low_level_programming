#include "holberton.h"
/**
 * rev_string - reverses a string
 *
 *@s: string to reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int x = 0;
	int z;
	int y;

	while (*(s + i) != '\0')
		i++;
	i -= 1;
	while (i > x)
	{
		y = s[x];
		z = s[i];
		s[i] = y;
		s[x] = z;
		i--;
		x++;
	}
}
