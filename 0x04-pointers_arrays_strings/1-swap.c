#include "holberton.h"
/**
 * swap_int - swap values of int
 *
 *@a: integer value
 *@b: integer value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
