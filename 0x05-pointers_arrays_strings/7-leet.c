#include "holberton.h"
/**
 *leet - encode a string into 1337
 *Return: new string
 *
 *@s: string
 */
char *leet(char *s)
{
	char arr1[5] = {'A', 'E', 'O', 'T', 'L'};
	char arr2[5] = {'a', 'e', 'o', 't', 'l'};
	char arr3[5] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int x = 0;


	while (s[i] != '\0')
	{
		while (x < 5)
		{
			if (arr1[x] == s[i] || arr2[x] == s[i])
			{
				*(s + i) =  *(arr3 + x);
			}
			x++;

		}
		x = 0;
		i++;
	}
	return (s);
}
