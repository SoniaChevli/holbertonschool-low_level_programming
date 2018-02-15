#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_calloc - allocates memory for an array using malloc
 *Return: a pointer to the alocated memory. Otherwise 0.
 *
 *@nmemb: amount of elements
 *@size: size of bytes
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	arr = malloc(nmemb * size);

	if (arr == 0)
		return (0);

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
