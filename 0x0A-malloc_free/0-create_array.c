#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * Return: pointer to array. Otherwise NULL
 *
 *@size: size of array
 *@c: special char to initialize it
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (0);

	arr = (char*)malloc(size * sizeof(char));
	if (arr == 0)
		return (0);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
