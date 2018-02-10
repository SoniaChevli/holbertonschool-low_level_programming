#include <stdio.h>
#include <stdlib.h>
/**
 * main - write a program that multiplies 2 numbers
 *Return: multiplication answer. Otherwise 0
 *
 *@argc: length of input commands
 *@argv: input parameters in string
 */
int main(int argc, char *argv[])
{
	int i;
	int x;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		x = i * atoi(argv[2]);
		printf("%d\n", x);
		(void) argc;
		return (0);
	}
}
