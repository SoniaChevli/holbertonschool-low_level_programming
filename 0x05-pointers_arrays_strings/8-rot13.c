#include "holberton.h"
/**
 *rot13 - encode string using rot13
 *Return: char
 *
 *@s: string
 */
char *rot13(char *s)
{
	char arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int x = 0;

	while (s[i] != '\0')
	{
		while (arr[x] != '\0')
		{
			if (arr[x] == s[i])
			{
				s[i] = rot[x];
				break;
			}
			x++;
		}
		i++;
		x = 0;
	}
	return (s);

}
