#include "holberton.h"
/**
 *append_text_to_file - appends text at the end
 *@filename: name of the file
 *@text_content: text to append to file
 *
 *Return: 1 on success. -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (length = 0; text_content[length] != '\0'; length++)
		;

	fd = open(filename, O_APPEND | O_WRONLY, 0664);

	if (fd == -1)
		return (-1);

	write(fd, text_content, length);

	return (1);
}
