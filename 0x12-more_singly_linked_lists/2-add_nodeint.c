#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a new node to the beginning of the list
 *@head: pointer to the head of the list
 *@n: integer to be added to the list
 *
 *Return: address of new element. Otherwise NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL || n == '\0')
	{
		free(tmp);
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
