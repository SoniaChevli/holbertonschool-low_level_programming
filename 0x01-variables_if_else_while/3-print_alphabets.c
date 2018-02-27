#include <stdio.h>
/**
 * main - Use a while loop to print the alphabet in lower case then upper
 * Return: Alphabet in lower and upper. Otherwise 0
 */
int main(void)
{
char c = 'a';
char x = 'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (x <= 'Z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
