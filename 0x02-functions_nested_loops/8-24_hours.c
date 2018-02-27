#include "holberton.h"
/**
 *jack_bauer - print every minute of the video
 *
 * Return: every minute. Otherwise 0.
 */
void jack_bauer(void)
{
	int a = 00;
	int b = 00;

	while (a <= 23)
	{
		while (b <= 59)
		{
			_putchar('0' + a / 10);
			_putchar('0' + a % 10);
			_putchar(':');
			_putchar('0' + b / 10);
			_putchar('0' + b % 10);
			_putchar('\n');
			b++;
		}
		b = 00;
		a++;
	}
}
