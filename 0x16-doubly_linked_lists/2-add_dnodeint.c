#include "lists.h"
/**
 * add_dnodeint - add new node at the beginning of list
 * @head: pointer to head of list
 * @n: integer in new node
 *
 * Return: address of the new element. Otherwise NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}

	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (new);
}
