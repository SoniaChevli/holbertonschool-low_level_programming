#include "lists.h"
/**
 * print_dlistint - prints all the elements in the list
 * @h: pointer to head of list
 *
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);

}
