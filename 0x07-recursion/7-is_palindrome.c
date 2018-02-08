#include "holberton.h"
/**
 * outerfun - is a string a palindrom
 * Return: 1 if a palindrome 0 if no
 *
 *@s: string
 *@length: length of s
 *@x: start of string
 */
int outerfun(char *s, int length, int x)
{
	if (length <= x)
		return (1);
	if (s[x] == s[length])
		return (outerfun(s, length - 1, x + 1));
	return (0);
}
int length(char *s)
{
	if (*s != '\0')
        {
                s++;
                return (1 + _strlen_recursion(s));

        }
        else
        {
                return (0);
        }
}
/**
 * is_palindrome - is a string palindrome
 * Return: string and length
 *
 *@s: string
 */
int is_palindrome(char *s)
{
	return (length(s));
	return (outerfun(s, length, x));
}

i
