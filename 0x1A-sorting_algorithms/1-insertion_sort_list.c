#include "sort.h"

/**
 * insertion_sort_list - insertion sort
 * @list: double pointer to linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	listint_t *head;

	if (list == NULL)
		return;

	head = *list;
	tmp = *list;


	while (head != NULL)
	{
		if (head->next != NULL && head->next->n < head->n)
		{
			tmp = head->next;
			if (head->prev == NULL)
			{
				tmp->prev = NULL;
				*list = tmp;
			}
		else
		{
			head->prev->next = tmp;
			tmp->prev = head->prev;
		}
		head->prev = tmp;
		head->next = tmp->next;

		if (head->next)
			head->next->prev = head;
		tmp->next = head;

		head = *list;
		print_list(head);
	}
	else
		head = head->next;

	}

}
