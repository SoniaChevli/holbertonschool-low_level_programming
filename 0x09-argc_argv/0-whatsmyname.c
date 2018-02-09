#include <stdio.h>
/**
 * main - prints the name of the program
 *Return: name. Otherwise 0
 *
 *@argc: contains number of arguments passed to the program
 *@argv: contains the contents of what is passed
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
