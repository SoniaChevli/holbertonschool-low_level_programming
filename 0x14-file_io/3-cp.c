#include "holberton.h"
/**
 *copy_file - copies the content of a file to another file
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
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}


	fdfrom = open(argv[1], O_RDWR);
	if (fdfrom == -1)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}

	fdto = open(argv[2], O_RDWR);

	if (fdfrom == -1)
		return (-1);

	if (fdto == -1)
		return (-1);

	x = read(fdfrom, buf, 1024);

	write (fdto, buf, x);

	close(fdfrom);

	close(fdto);

	return (0);
}
