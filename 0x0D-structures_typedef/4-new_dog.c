#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - creates a new dog
 *Return: new dog. Otherwise NULL.
 *
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newdog;
	char *arr;
	int i, j, x, y;
	x = 0;
	y = 0;

	newdog = malloc(sizeof(struct dog));

	if (newdog == 0)
		return (0);

	while (name[i] != '\0')
	{
		i++;
	}

	while (owner[j] != '\0')
	{
		j++;
	}
	arr = malloc(sizeof(char) * (i + j + 2));
	if (arr == 0)
		return (0);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	while (x < i)
	{
		arr[x] = name[x];
		x++;
	}
	printf(" ");
	while (y < j)
	{
		arr[x] = owner[y];
		x++;
		y++;
	}
	arr[x] = '\0';

	return newdog;
}
