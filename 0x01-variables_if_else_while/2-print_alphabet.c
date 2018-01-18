#include <stdio.h>
/**
 * main - go through each letter and print it
 * Return: letters if the number is positive. 0 otherwise
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
