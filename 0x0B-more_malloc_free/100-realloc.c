#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates memory using malloc and free
 * Return: ptr. Otherwise 0.
 *
 *@ptr: pointer to the memory previously allocated
 *@old_size: the size in bytes of the allocated space for ptr
 *@new_size: new size in bytes of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == 0)
		return (0);



	arr = malloc(new_size);
	if (arr == 0)
		return (0);

	for (i = 0; i < new_size && i < old_size; i++)
	{
		arr[i] = ((char *)ptr)[i];
	}
	return (arr);
}
