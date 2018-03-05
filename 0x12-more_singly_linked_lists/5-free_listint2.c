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
	listint_t *first, *hold;

	first = *head;

	while (first != NULL)
	{
		hold = first->next;
		free(first);
		first = hold;
	}
	head = NULL;

}
