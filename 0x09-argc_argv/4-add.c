#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isnumber - finds if the string is a number
 *Return: -1 if not a number. Otherwise 0.
 *
 *@s: string of argv
 */
int _isnumber(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (!(s[x] >= '0' && s[x] <= '9'))
			return (-1);
	}
	return (0);
}

/**
 * main - adds positive numbers
 * Return: addition answer. Otherwise 0.
 *
 *@argc: number of parameters
 *@argv: content of parameters in string
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;
	int error;

	for (i = 1; i < argc; i++)
	{

		error = _isnumber(argv[i]);
		if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		else if (error == -1)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}

	}
	printf("%d\n", sum);
	return (0);
}
