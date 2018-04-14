#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct dir{
	char *s;
	struct dir *next;
} pathdir;

/**
 * _getenv - finds the environment that matches the name
 *@name: name to look for in environment
 *
 *Return: environ. Otherwise 0.
 */
char *_getenv(const char *name)
{
	extern char **environ;
	char *s;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int x = 0;
/** x is the character, i is the line */
	while (environ[i] != NULL)
	{
		if (name[j] == *environ[i])
		{
			while (name[j] != '\0')
			{
				if (name[j] != environ[i][x])
				{
					j = 0;
					break;
				}
				j++;
				x++;
			}
			x = 0;
			if (name[j] == '\0')
			{


				return (environ[i]);
			}
		}

		j = 0;
		i++;
	}
	return (0);
}
/**
 * findpath - prints each directory onto its own line
 *@fullpath - full path that needs to be split
 *
 *Return: linked list of path
 */
pathdir *findpath(char *path)
{
	pathdir *head, *temp, *temp2;
	char *token = NULL, *delim = ":";

	head = malloc(sizeof(pathdir));
	if (head == NULL)
		return (0);

	head->next = NULL;

	token = strtok(path, delim);

	head->s = token;

	temp = head;
	while (token != NULL)
	{
		token = strtok(NULL, delim);
		if (token != NULL)
		{
			temp2 = malloc(sizeof(pathdir));

			if (temp2 == NULL)
				return (0);

			temp2->s = token;
			temp->next = NULL;
			temp->next = temp2;
			temp = temp2;
			printf("%s\n", token);
		}
	}
	return (head);
}
/**
 * main - provides name to look for
 *
 *Return: 0
 */
int main(void)
{
	const char *name = "PATH";
	char *s , *s2;
	unsigned int i = 0, length = 0, j = 0;
	pathdir *linklist;

	s = _getenv(name);
	if (s ==NULL)
		printf("Fail\n");
	else
	{
		while (s[i + length] != '\0')
		{
			length++;

		}

		s2 = malloc(sizeof(char *) * length);
		if (s2 == NULL)
			return (0);

		while (s[i] != '=')
		{
			i++;
		}
		i++;
		while (s[i] != '\0')
		{
			s2[j] = s[i];
			i++;
			j++;
		}
		linklist = findpath(s2);
		while(linklist->next != NULL)
		{
			linklist = linklist->next;
			printf("%s\n", linklist->s);
		}

	}
	return (0);
}
