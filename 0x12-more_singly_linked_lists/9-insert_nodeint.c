#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: start of the list
 *@idx: index of list where node should be inserted
 *@n: value given to new index
 *
 *Return: address of new node. Otherwise NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *place, *new, *before;
	unsigned int count = 0;

	place = *head;
	before = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	while (count != idx - 1 && before != NULL)
	{
		before = before->next;
		count++;
	}
	if (before == NULL || count != idx - 1)
		return (0);
	count = 0;
	while (count != idx && place != NULL)
	{
		place = place->next;
		count++;
	}
	if (count != idx)
		return (0);

	if (place == NULL && before != NULL)
		new->next = NULL;
	else
		new->next = place;
	new->n = n;
	before->next = new;
	return (new);

}
