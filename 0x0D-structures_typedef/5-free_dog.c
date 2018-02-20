#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dog
 *
 *@d: dog
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	free(d);
}
