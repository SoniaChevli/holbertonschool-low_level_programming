#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * Return: number of arguments. Otherwise 0.
 *
 *@argc: number of paramters put into command line
 *@argv: parameters put into command line
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;
	return (0);

}
