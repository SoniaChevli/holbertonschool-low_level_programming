#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *listint_len - finds number of nodes in linked listint_t
 *@h: pointer to the head of the linked list
 *
 *Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t NodeCounter;

	NodeCounter = 0;
	while (h != NULL)
	{
		h = h->next;
		NodeCounter++;
	}
	return (NodeCounter);
}
