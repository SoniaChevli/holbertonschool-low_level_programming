#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *add_nodeint_end - function that adds node to end of list
 *@head: pointer to the head of the list
 *@n: int to be added to end of list
 *
 *Return: address of new element. Otherwise NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL || n == '\0')
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (new);

}
