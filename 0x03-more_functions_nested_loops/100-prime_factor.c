#include <stdio.h>

int main(void)
{
	int bignumber = 612852475143;
	int a = 2;

	while (bignumber != a)
	{
		if (bignumber % a != 0)
			break;
		else
		{
			bignumber = bignumber / a;
			a++;
		}
	}
	printf("%d\n", bignumber);

	return (0);
}
