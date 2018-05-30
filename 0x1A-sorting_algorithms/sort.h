#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct printcmd - prints array
 * @arr: pointer to array
 * @size: size of array
 * @print: print function
 */
typedef struct printcmd
{
	int *arr;
	size_t size;
	void (*print)(const int *, size_t);

} printer;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
#endif
