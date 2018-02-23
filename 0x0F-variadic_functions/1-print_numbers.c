#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function prints numbers
 * @separator: string to be printed between num
 * @n: number of arguments
 *
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, unsigned int));
		if (i != n - 1)
			printf("%c", *separator);
	}
	printf("\n");
}
