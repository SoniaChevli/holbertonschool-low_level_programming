#include "lists.h"
/**
 * dlistint_len - returns number of elements
 * @h: pointer to head of node
 *
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int counter = 0;

	while(h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
