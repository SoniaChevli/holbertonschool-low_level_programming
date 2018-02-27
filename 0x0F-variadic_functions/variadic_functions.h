#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct ops - holds a string and function pointer
 *@ch: character
 *@f: function that prints a variable type
 */
typedef struct ops
{
	char *ch;
	void (*f)(va_list);
} ops;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
