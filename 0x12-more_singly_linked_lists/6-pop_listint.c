#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *pop_listint - deletes head node of listint_t list
 *@head: head of the list
 *
 *Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *tmp;

	tmp = *head;

	x = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (x);
}
