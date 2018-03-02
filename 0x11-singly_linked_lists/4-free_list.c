#include "lists.h"
/**
 * free_list - frees the list_t list
 *@head: pointer to the start of the list
 *
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *first, *second;

	first = head;
	while (first != NULL)
	{
		second = first->next;
		free(first->str);
		free(first);
		first = second;
	}

}
