#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - converts numbers to integers
 *
 *@argc: number of parameters inserted
 * @argv: array of parameters
 *Return: result. Otherwise 0
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	int (*p)(int, int);

	p = get_op_func(argv[2]);

	if (p == 0)
	{
		printf("Error\n");
		exit(99);
	}
	result = p(a, b);

	printf("%d\n", result);

	return (0);
}
