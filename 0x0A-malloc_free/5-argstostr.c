#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr - contcatenates all the arguments
 *Return: the contcatentated strings.Otherwise 0
 *
 *@ac: all the arguments
 *@av: all the strings to concatenate
 */
char *argstostr(int ac, char **av)
{
	int size;
	int i, x;
	int y = 0;
	char *willy;

	if (ac == 0 || av == 0)
		return (0);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
		{
			size++;
		}
	}
	willy = malloc(sizeof(char) * (size + 1 + ac));
	if (willy == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
		{
			willy[y] = av[i][x];
			y++;
		}
		willy[y] = '\n';
		y++;
	}

	willy[y] = '\0';

	return (willy);
}
