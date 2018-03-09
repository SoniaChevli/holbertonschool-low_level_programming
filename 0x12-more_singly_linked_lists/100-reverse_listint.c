#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - reverse list
 *@head: start of the list
 *
 *Return: pointer to first node of new list. Otherwise NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *tmp;

	new = NULL;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = tmp;
	}
	*head = new;
	return (new);
}
