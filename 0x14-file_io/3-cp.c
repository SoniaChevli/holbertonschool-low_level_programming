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
	char buf[1024];



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

	fdto = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (fdfrom == -1)
		return (-1);

	if (fdto == -1)
		return (-1);

	while ((x = read(fdfrom, buf, 1024)) > 0)
	{
		if (x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		x = write(fdto, buf, x);
		if (x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close(fdfrom);

	close(fdto);

	if (close(fdfrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdfrom);
		exit(100);
	}
	if (close(fdto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdto);
		exit(100);
	}
	return (0);
}
