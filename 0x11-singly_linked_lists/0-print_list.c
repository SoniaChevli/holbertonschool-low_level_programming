#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - function that prints all the elments in list_t
 *@h:
 *
 *Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *holder;
	unsigned int NodeCount = 0;

	holder = h;
	while (holder != NULL)
	{
		if (holder->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", holder->len, holder->str);
		holder = holder->next;
		NodeCount++;
	}

	return (NodeCount);
}
