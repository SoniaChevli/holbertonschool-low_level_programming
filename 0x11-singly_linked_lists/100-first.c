#include <stdio.h>
void main1(void) __attribute__((constructor));
/**
 * main1 -  prints 3 lines
 */
void main1(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
