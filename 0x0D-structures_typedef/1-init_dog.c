#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * main - initializes a variable fo type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
