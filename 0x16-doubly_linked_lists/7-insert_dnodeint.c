#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of node
 * @idx: index where to insert node
 * @n: value of new node
 *
 * Return: address of new node. Otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *after, *before;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	before = *h;
	while (i < idx && before != NULL)
	{
		before = before->next;
		i++;
	}

	if (before == NULL && i < idx)
		return (NULL);

	if (before == NULL && i == idx)
	{
		before->next = new;
		new->next = NULL;
		new = *h;
		return (new);
	}

	after = before->next;
	before->next = new;
	new->prev = before;
	new->next = after;
	new = *h;

	return (new);
}
