#include "holberton.h"
/**
 *cap_string - capitalize all words of a string
 *Return: char
 *
 *@s: string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		switch(s[i])
		{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			if (s[i + 1] <= 122 && s[i + 1] >= 97)
			{
				s[i + 1] -= 32;
			}
			break;
		default:
			break;
		}
		i++;
	}
	return (s);

}
