#include <stdlib.h>
#include "lists.h"
/**
 * list_len - finds the number of elements in list_t
 * @h: pointer to the start of the list_t
 *
 *Return: number of elements in list_t.
 */
size_t list_len(const list_t *h)
{
	unsigned int elementcount = 0;

	while (h != NULL)
	{
		elementcount++;
		h = h->next;
	}
	return (elementcount);
}
