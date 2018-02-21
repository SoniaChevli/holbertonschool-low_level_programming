#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 *Return: void
 *
 *@name: pointer to the name that should be printed
 *@f: contains strings to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		(*f)(name);

}
