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
	char *fromfile, *tofile;



	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	fromfile = argv[1];
	tofile = argv[2];

	fdfrom = open(argv[1], O_RDONLY);

	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fromfile);
		exit(98);
	}

	fdto = open(tofile, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", tofile);
		exit(99);
	}


	while ((x = read(fdfrom, buf, 1024)) > 0)
	{
		if (x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", tofile);
			exit(98);
		}

		x = write(fdto, buf, x);
		if (x == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fromfile);
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
