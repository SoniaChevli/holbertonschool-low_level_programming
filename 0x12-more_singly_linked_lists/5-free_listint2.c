#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - frees the listint_t list
 *@head: head of the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *first, *second;

	if (head == NULL || *head ==NULL)
		return;
	first = *head;

	while (first != NULL)
	{
		second = first->next;
		free(first);
		first = second;
	}

	*head = NULL;

}
