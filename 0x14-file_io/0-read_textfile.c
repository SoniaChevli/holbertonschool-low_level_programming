#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX SO
 * @filename: text file to be read
 * @letters: number of letter that should be read and printed
 *
 *Return: actual number of letters it could read and print. Otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int x;
	char *buf;

	buf = malloc(sizeof(char) * letters + 1);

	if (filename == NULL || letters == 0)
		return (0);


	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	x = read(fd, buf, letters);
	buf[letters] = '\0';

	write(STDOUT_FILENO, buf, x);
	close(fd);
	return (x);

}
