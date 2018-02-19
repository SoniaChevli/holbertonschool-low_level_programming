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

	newdog = malloc(sizeof(struct dog));

	if (newdog == 0)
		return (0);

	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
