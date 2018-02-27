#include <stdio.h>
/**
 *main - print alphabet without q and e
 * Return: alphabet minus q and e. Otherwise 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if ((x != 'e') && (x != 'q'))
		{
			putchar(x);
		}
		x++;
	}

	putchar('\n');
	return (0);
}
