#include <stdio.h>

int main(void)
{
	long int x = 0;
	long int y = 1;
	long int z;
	long int count = 0;

	printf("0, 1, ");
	while (count <= 50)
	{
		z = x + y;
		printf("%li", z);
		if (count != 50)
			printf(", ");
		x = y;
		y = z;
		count++;
	}
	printf("\n");
	return (0);
}
