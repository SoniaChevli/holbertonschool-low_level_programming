#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * pint_all - prints anything
 * @format: list of types of arguments passed
 *
 *Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int boo = 0;
	va_list args;
	int length = 0;
	char *z;

	while (format[i] != 0)
	{
		switch (format[i])
		{
		case 'i':
			length++;
			break;

		case 'c':
			length++;
			break;

		case 'f':
			length++;
			break;

		case 's':
			length++;
			break;
		}
		i++;
	}
	i = 0;


	va_start(args, format);

	while (format[i] != 0)
	{
		boo = 0;
		switch (format[i])
		{
		case 'i' :
			printf("%d", va_arg(args, int));
			boo = 1;
			break;
		case 'c' :
			printf("%c", va_arg(args, int));

			boo = 1;
			break;
		case 'f' :
			printf("%f", va_arg(args, double));
			boo = 1;
			break;
		case 's' :
			z = va_arg(args, char *);
			if (z != 0)
				printf("%s", z);
			else
				printf("nil");
			boo = 1;

			break;
		}
		if (i != length && boo == 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
