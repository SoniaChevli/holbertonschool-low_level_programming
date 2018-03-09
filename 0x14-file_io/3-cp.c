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
	int fdfrom, fdto, copyto, copyfrom;
	char buf[1024];
	char *fromfile, *tofile;



	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fromfile = argv[1];
	tofile = argv[2];

	fdfrom = open(fromfile, O_RDONLY);

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


	while ((copyfrom = read(fdfrom, buf, 1024)) > 0)
	{
		if (copyfrom == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", tofile);
			exit(98);
		}

	       copyto = write(fdto, buf, copyfrom);
		if (copyto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fromfile);
			exit(99);
		}
	}
	if (copyfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", tofile);
		exit(98);
	}


	close(fdfrom);


	if (close(fdfrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdfrom);
		exit(100);
	}

	close(fdto);

	if (close(fdto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdto);
		exit(100);
	}
	return (0);
}
