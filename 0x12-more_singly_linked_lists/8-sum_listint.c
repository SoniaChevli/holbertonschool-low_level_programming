#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *sum_listint - finds the sum of all the data in listint
 *@head: first node in the list
 *
 *Return: the sum. Otherwise 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	if (head == NULL)
		return (0);
	tmp = head;
	while (tmp != 0)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
