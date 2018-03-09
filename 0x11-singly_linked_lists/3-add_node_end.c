#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *_strnlength - finds the length of a string
 *@str: string
 *
 *Return: length of string
 */
int _strnlength(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 *add_node_end - function that ends a node to the end of a list_t list
 *@head: head of the list
 *@str: string to end to the end of the list
 *
 *Return: address of the new element. Otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new, *hold;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (0);
	if (str == NULL)
		return (0);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (0);
	}
	new->len = _strnlength(new->str);

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	hold = *head;

	while (hold->next != NULL)
	{
		hold = hold->next;
	}

	hold->next = new;

	return (new);
}
