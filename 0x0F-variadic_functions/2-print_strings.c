#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - function prints a string followed by a new line
 *@separator: string printed between strings
 *@n: number of arguments
 *
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	char *conversion;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		conversion = va_arg(x, char *);

		if (conversion == NULL)
		{
			printf("nil");
		}

		printf("%s", conversion);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(x);
}
