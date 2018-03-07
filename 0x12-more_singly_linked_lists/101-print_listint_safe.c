#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a linked list
 *@head pointer to start of list to be printed
 *
 *Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t NodeNumber = 0;
	const listint_t *fast, *slow;

	fast = head;
	slow = head;
	if (head == NULL)
		printf("nullhead");


	while (head != NULL)
 	{
		fast = fast->next;
		slow = slow->next->next;

		if (fast == slow)
		{
			printf("loop");
			return (0);
		}

 		printf("[%p] %d\n",(void *)head, head->n);
 		head = head->next;
		NodeNumber++;

	}
	return (NodeNumber);
}
