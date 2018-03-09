#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
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
	char *buf;
	char *fromfile, *tofile;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		free(buf);
		exit(97);
	}

	buf = malloc(sizeof(char) * 1024);
        if (buf == NULL)
                return (-1);

	fromfile = argv[1];
	tofile = argv[2];

	fdfrom = open(fromfile, O_RDONLY);

	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fromfile);
		free(buf);
		exit(98);
	}

	fdto = open(tofile, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", tofile);
		free(buf);
		exit(99);
	}


	while ((copyfrom = read(fdfrom, buf, 1024)) > 0)
	{
		if (copyfrom == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fromfile);
			free(buf);
			exit(98);
		}

	       copyto = write(fdto, buf, copyfrom);
		if (copyto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", tofile);
			free(buf);
			exit(99);
		}
	}
	if (copyfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fromfile);
		free(buf);
		exit(98);
	}


	if (close(fdfrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdfrom);
		free(buf);
		exit(100);
	}

	if (close(fdto) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdto);
		free(buf);
		exit(100);
	}
	return (0);
}
