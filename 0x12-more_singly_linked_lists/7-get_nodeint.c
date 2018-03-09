#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *get_nodeint_at_index - finds the nth node of the listint_t list
 *@head: first in the list
 *@index: index of node to find
 *
 *Return: nth node. Otherwise null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count = 0;

	tmp = head;
	while (count != index && tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL && count != index)
		return (0);
	return (tmp);

}
