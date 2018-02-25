#ifndef HOLB_H
#define HOLB_H
#include <stdarg.h>
/**
 *struct spec - printf specifiers
 *@s: character specifier
 *@print: function pointer to a format function
 *
 *Description: structure holds a character specifier and a format function
 */
typedef struct spec {
	char *s;
	int (*printspec)(va_list);
} specifiers;

int _printf(const char *format, ...);
int printchar(va_list list);
int printstr(va_list list);
int printintd(va_list list);
int _putchar(char c);
#endif
