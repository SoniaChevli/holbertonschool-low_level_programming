#include "holberton.h"
/**
 * _strstr - locates a substring
 * Return: a pointer to te beginning of the located substring of NULL
 *
 *@haystack: c string to be scanned
 *@needle: c string containing the sequence of characters to match
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int i = 0;
	int length = 0;
	int count;

	while (needle[length] != '\0')
		length++;

	while (haystack[i] != '\0')
	{
		count = i;
		while (x <= length)
		{
			if (needle[x] != haystack[count])
			{
				break;
			}
			x++;
			count++;
		}

		if (length == x - 1)
		{
			haystack = &haystack[i];
			return (haystack);
		}
		x = 0;
		i++;
	}
	return (0);
}
