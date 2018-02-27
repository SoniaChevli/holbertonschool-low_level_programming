#include "holberton.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 *Return: void
 *
 *@s: pointer to pointer
 *@to: pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
