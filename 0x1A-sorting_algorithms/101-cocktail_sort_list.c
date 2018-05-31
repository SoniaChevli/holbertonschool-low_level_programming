#include "sort.h"
/**
 * backward_sort - bubble sort backwards
 * @list: pointer to end of doubly linked list
 * @head: pointer to head of doubly linked list
 *
 * Return: 1 if a swap was made. Otherwise 0
 */
int backward_sort(listint_t *list, listint_t *head)
{
	listint_t *tmp;
	int done = 0;

	while (list->prev != NULL)
	{
		tmp = list->prev;
		if (list->n < tmp->n)
		{
			done = 1;

			if (tmp->prev != NULL)
			{
				list->prev = tmp->prev;
				list->prev->next = list;
			}
			else
			{
				list->prev = NULL;
				head = list;
			}


			if (list->next != NULL)
			{
				tmp->next = list->next;
				tmp->next->prev = tmp;
			}
			else
				tmp->next = NULL;
			tmp->prev = list;
			list->next = tmp;
			print_list(head);

			list = tmp;
		}

		list = list->prev;

	}
	return (done);
}
/**
 * forward_sort -bubble sort
 * @list: pointer to doubly linked list
 * Return: 1 if a swap was made. Otherwise 0
 */
int forward_sort(listint_t *list)
{

	listint_t *tmp;
	listint_t *head;
	int done = 0;

	head = list;
	while (list->next != NULL)
	{
		if (list->n > list->next->n)
		{
			done = 1;
			tmp = list->next;
			if (tmp->next != NULL)
			{
				list->next = tmp->next;
				list->next->prev = list;
			}
			else
			{

				list->next = NULL;
			}

			if (list->prev != NULL)
			{
				tmp->prev = list->prev;
				tmp->prev->next = tmp;
			}
			else
				tmp->prev = NULL;


			tmp->next = list;
			list->prev = tmp;

			list = tmp;
			print_list(head);
		}
		list = list->next;

	}

	return (done);

}

/**
 * cocktail_sort_list - list using cocktail shaker algorithm
 * @list: pointer to doubly linked list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *end;
	listint_t *head;
	int done = 1;

	if (list == NULL)
		return;
	end = *list;
	head = *list;

	while (end->next != NULL)
		end = end->next;
	while (done == 1)
	{
		while (head->prev != NULL)
			head = head->prev;
		done = forward_sort(head);
		while (end->next != NULL)
			end = end->next;
		done = backward_sort(end, head);
	}


	while ((*list)->prev != NULL)
		*list = (*list)->prev;



}
