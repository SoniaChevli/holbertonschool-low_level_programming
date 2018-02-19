#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints the struct dog
 *
 *@d: dog to print
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nil)");

		if ((*d).age != 0.0)

			printf("Age: %f\n", (*d).age);
		else
			printf("Age: (nil)");
		if ((*d).owner != NULL)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nil)");
	}
}
