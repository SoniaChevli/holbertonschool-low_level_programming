#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at index
 *@head: head of the list
 *@index: index if where node should be deleted
 *
 *Return: 1 if succeeded. Otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *before, *after;
	unsigned int count = 0;

	tmp = *head;
	before = *head;
	after = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (count = 0; count != index - 1 && before != NULL; count++)
		before = before->next;
	if (count != index - 1)
		return (-1);
	for (count = 0; count != index && tmp != NULL; count++)
		tmp = tmp->next;

	for (count = 0; count != index + 1; count++)
		after = after->next;

	if (tmp == NULL)
		return (-1);
	if (after == NULL)
		before->next = NULL;
	else
		before->next = after;
	tmp->next = NULL;
	free(tmp);
	return (1);
}
