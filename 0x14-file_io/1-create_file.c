#include "holberton.h"
/**
 *_strlen - finds length of string
 *@s: string to find length of
 *
 *Return: length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * create_file - creates a file
 *@filename: filename to create
 *@text_content: NULL terminating string to write to the file
 *
 *Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int length;

	if (text_content == NULL || filename == NULL)
		return (-1);
	length = _strlen(text_content);
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, length);
	close(fd);
	return (1);
}
