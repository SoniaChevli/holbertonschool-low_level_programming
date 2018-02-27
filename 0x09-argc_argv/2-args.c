#include <stdio.h>
/**
 * main - prints all arguments it recieves
 *Return: all arguments. Otherwise 0
 *
 *@argc: number of argumetns
 *@argv: arguments in string form
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
