#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 *string_nconcat - concatenate two strings
 *Return: concatenated string. Otherwise null.
 *
 *@s1: first string
 *@s2: second string
 *@n: length of s2 to print
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x, z;
	char *s3;

	if (s1 == 0)
                s1 = "";
        if (s2 == 0)
                s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (x = 0; s2[x] != '\0'; x++)
		;
	if (n > x)
		n = x;

	s3 = malloc((i + n + 1) * sizeof(char));

	if (s3 == 0)
		return (0);

	for (z = 0; z < i; z++)
	{
		s3[z] = s1[z];
	}
	for (x = 0; x < n; x++)
	{
		s3[z] = s2[x];
		z++;
	}
	s3[z] = '\0';
	return (s3);
}
