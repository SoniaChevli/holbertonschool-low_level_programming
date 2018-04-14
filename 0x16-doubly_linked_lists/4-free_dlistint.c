#include "lists.h"
/**
 * free_dlistint - frees doubly linked list
 * @head: pointer to head of list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);

	}
}
