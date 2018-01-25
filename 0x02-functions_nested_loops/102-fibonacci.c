#include <stdio.h>
/**
 *main - first 50 digits of fibonacci
 * Return: first 50 digits. Otherwise 0
 */
int main(void)
{
	long int x = 1;
	long int y = 2;
	long int z;
	long int count = 0;

	printf("1, 2, ");
	while (count < 48)
	{
		z = x + y;
		printf("%li", z);
		if (count != 47)
			printf(", ");
		x = y;
		y = z;
		count++;
	}
	printf("\n");
	return (0);
}
