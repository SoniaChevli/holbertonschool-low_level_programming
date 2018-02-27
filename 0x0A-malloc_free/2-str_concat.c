#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate 2 strings
 * Return: contatentate. Otherwise 0
 *
 *@s1: first string
 *@s2: second string
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i = 0;
	int x = 0;
	int z = 0;
	int y = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[x] != '\0')
	{
		x++;
	}
	conc = malloc(sizeof(char) * (x + i + 1));
	if (conc == 0)
		return (0);
	while (s1[y] != '\0')
	{
		conc[y] = s1[y];
		y++;
	}
	while (s2[z] != '\0')
	{
		conc[y] = s2[z];
		y++;
		z++;
	}
	conc[y] = '\0';
	return (conc);
}
