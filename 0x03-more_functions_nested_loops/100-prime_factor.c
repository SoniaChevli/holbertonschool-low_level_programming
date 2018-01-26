#include <stdio.h>
/**
 * main - print biggest prime factor of bignum
 * Return: big number otherwise 0.
 */
int main(void)
{
	long int bignumber = 612852475143;
	int a = 2;

	while (bignumber != a)
	{
		if (bignumber % a == 0)
			bignumber /= a;
		else
		{
			a++;
		}
	}
	printf("%li\n", bignumber);
	return (0);
}
