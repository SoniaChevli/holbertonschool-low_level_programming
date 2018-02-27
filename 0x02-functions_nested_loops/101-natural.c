#include <stdio.h>
/**
 *
 */
int main(void)
{
	int x = 0;
	int y = 0;
	int z = 1;

	while (y <= 1024)
	{
		y = z * 3;
		x = y + x;
		z++;
	}
	x = x - y;
	z = 1;
	y = 0;
	while (y <= 1024)
	{
		y = z * 5;
		x = x + y;
		z++;
	}
	x = x - y;
	printf("%d\n", x);
	return (0);
}
