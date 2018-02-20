#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *_strlen - string length
 *Return: length
 *
 *@s: string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
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
	int namelen = _strlen(name);
	int ownlen = _strlen(owner);
	char *arrnam;
	char *arrown;
	int i;

	newdog = malloc(sizeof(struct dog));

	if (newdog == 0)
		return (0);
	if (name != 0)
		newdog->name = name;
	if (age != 0)
		newdog->age = age;
	if (owner != 0)
		newdog->owner = owner;
	arrnam = malloc(sizeof(char) * namelen + 1);

	if (arrnam == 0)
	{
		free(name);
		return (0);
	}

	for (i = 0; name[i] <= '\0'; i++)
	{
		arrnam[i] = name[i];
	}

	arrown = malloc(sizeof(char) * ownlen + 1);

	if (arrown == 0)
	{
		free(arrown);
		return (0);
	}
	for (i = 0; owner[i] != '\0'; i++)
		arrown[i] = owner[i];

	return (newdog);
}
