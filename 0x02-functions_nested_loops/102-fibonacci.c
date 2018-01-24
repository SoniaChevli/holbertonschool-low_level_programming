#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 1;
	int z;
	int count = 0;
	putchar('0' + x);
	putchar('0' + y);
	while (count <= 50);
	{
		z = x + y;
		putchar('0' + z);
		x = y;
		y = z;
		count ++;
	}
	return (0);
}
