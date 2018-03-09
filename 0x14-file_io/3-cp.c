#include "holberton.h"
/**
 *main - copies the content of a file to another file
 *@argc: number of arguments
 *@argv: pointer to the arguments
 *
 *Return: 0 or -1.
 */

int main(int argc, char *argv[])
{
	int fdfrom, fdto, x;
	int *buf;

	buf = malloc(1024);

	if (buf == NULL)
		return (0);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}


	fdfrom = open(argv[1], O_RDWR);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdto = open(argv[2], O_RDWR);

	if (fdfrom == -1)
		return (-1);

	if (fdto == -1)
		return (-1);

	x = read(fdfrom, buf, 1024);

	write(fdto, buf, x);

	close(fdfrom);

	close(fdto);

	return (0);
}
