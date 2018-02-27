#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 *Return: 1 if error. Otherwise 0
 *
 *@argv: strings in command line
 *@argc: number of strings at command line
 */
int main(int argc, char *argv[])
{
	int cash;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cash = atoi(argv[argc - 1]);
	while (cash > 0)
	{
		if (cash >= 25)
		{
			cash -= 25;
			change++;
		}
		else if (cash >= 10)
		{
			cash -= 10;
			change++;
		}
		else if (cash >= 5)
		{
			cash -= 5;
			change++;
		}
		else if (cash >= 2)
		{
			cash -= 2;
			change++;
		}
		else
		{
			cash -= 1;
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}
