#include <stdio.h>
/**
 *
 */
int main(void)
{
	int x = 1024;
	int y = 0;

	while (x != 0)
	{
		x = x / 3;
		y = y + x;
	}
	x = 1024;
	while (x != 0)
	{
		x = x / 5;
		y = x + y;
	}
	printf("%d\n", y);
	return (0);
}
