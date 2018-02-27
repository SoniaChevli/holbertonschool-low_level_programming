#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * _intprint - print integer
 * @fill: va_list
 *
 *Return: nothing
 */
void _intprint(va_list fill)
{
	printf("%d", va_arg(fill, int));
}
/**
 * _stringprint - print string
 * @fill: va_list
 */
void _stringprint(va_list fill)
{
	char *copy = va_arg(fill, char *);

	if (copy == NULL)
	{
		copy = "(nil)";
	}
	printf("%s", copy);
}
/**
 * _floatprint - print float
 *@fill: va_list
 */
void _floatprint(va_list fill)
{
	printf("%f", va_arg(fill, double));
}
/**
 * _charprint - print char
 *@fill: va_list
 */
void _charprint(va_list fill)
{
	printf("%c", va_arg(fill, int));
}
/**
 * print_all - prints anything
 *@format: list of type arguments
 */
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
		{NULL, NULL} };

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		x = 0;
		while (arr[x].ch != NULL)
		{
			if (arr[x].ch[0] == format[i])
			{
				printf("%s", seperator);
				arr[x].f(args);
				seperator = ", ";
			}
			x++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
