#include <stdio.h>
/**
 * main - go through each letter and print it
 * return: print all letters a-z in lowercase
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
putchar (c);
c++;
}
putchar ('\n');
return (0);
}
