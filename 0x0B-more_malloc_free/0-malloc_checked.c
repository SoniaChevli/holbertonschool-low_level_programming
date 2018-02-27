#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc
 * Return: allocated memory
 *
 *@b: space that needs to be allocated
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == 0)
		exit(98);
	return (arr);
}
