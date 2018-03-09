#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * _strnlength - finds length of string
 * @str: string to find the length of
 *
 *Return: Length of string
 */
int _strnlength(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * add_node - function adds a new node at the beginning of the list_t
 *@head: head of the list
 *@str: string that needs to be duplicated
 *
 *Return: Address of the new element. Othwerise NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL || str == NULL)
	{
		free(add);
		return (0);
	}

	add->str = strdup(str);
	if (add->str == NULL)
	{
		free(add);
		return (0);
	}
	add->len = _strnlength(add->str);
	add->next = *head;
	*head = add;
	return (add);
}
