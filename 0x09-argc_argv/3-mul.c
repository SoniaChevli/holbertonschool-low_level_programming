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
	int i = atoi(argv[1]);
	int x = i * atoi(argv[2]);

	printf("%d\n", x);
	(void) argc;
	return (0);
}
