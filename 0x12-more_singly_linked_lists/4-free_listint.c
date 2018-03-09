#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_listint - frees a listint_t list
 *@head: head of the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

}
