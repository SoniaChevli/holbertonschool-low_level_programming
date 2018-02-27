#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - returns a pointer to a newly allocated space
 * Return: a pointer to a new string. Otherwise NULL
 *
 *@str: string that is copied to new memory
 */
char *_strdup(char *str)
{
	char *cpstr;
	int i = 0;
	int x = 0;

	if (str == 0)
		return (0);

	while (str[i] != '\0')
	{
		i++;
	}

	cpstr = (char *)malloc(sizeof(char) * i + 1);

	if (cpstr == 0)
		return (0);

	while (str[x] != '\0')
	{
		cpstr[x] = str[x];
		x++;
	}
	cpstr[x] = '\0';
	return (cpstr);
}
