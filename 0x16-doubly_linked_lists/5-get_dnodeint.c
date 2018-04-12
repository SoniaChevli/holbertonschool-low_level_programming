#include "lists.h"
/**
 * get_dnodeint_at_index - finds nth node of a linked list
 * @head: pointer to head of list
 * @index: node to find
 *
 *Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;

	while (counter < index && tmp != NULL)
	{
		counter++;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);

	return (tmp);
}
