#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * pint_all - prints anything
 * @format: list of types of arguments passed
 *
 *Return: nothing
 */
void _intprint(va_list fill)
{
        printf("%d", va_arg(fill, int));
}
void _stringprint(va_list fill)
{
	char *copy = va_arg(fill, char *);

        if (copy != NULL)
	{
                printf("%s", copy);
		return;
	}
        printf("nil");
}
void _floatprint(va_list fill)
{
        printf("%f", va_arg(fill, double));
}
void _charprint(va_list fill)
{
        printf("%c", va_arg(fill, int));
}


void print_all(const char * const format, ...)
{
	int i = 0;
	int x = 0;
	char *seperator = "";
	va_list args;


	ops arr[] = {
		{"i", _intprint},
		{"s", _stringprint},
		{"f", _floatprint},
		{"c", _charprint},
		{NULL, NULL}
	};
	va_start(args, format);
	while (format[i] != '\0')
	{
		while (arr[x].ch != NULL)
		{
			if (*(arr[x].ch) == format[i])
			{
				printf("%s", seperator);
				(arr[i].f)(args);
				seperator = ", ";
			}
			x++;
		}
		i++;
		x = 0;
	}
	printf("\n");
	va_end(args);
}
