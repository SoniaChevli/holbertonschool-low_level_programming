#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - find the last digit of random number
 * Return: print last digit. otherwise 0
 */

int main(void)
{
	int n;
	int x;

	x  = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (x > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else if (x == 0)
		printf("Last digit of %d is %d and is zero\n", n, x);
	else
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, x);
	return (0);
}
