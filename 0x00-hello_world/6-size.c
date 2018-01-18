#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char bytesizechar;
int bytesizeint;
long int bytesizelong;
long long int bytesizelonglong;
float bytesizefloat;

printf("Size of a char: %d byte(s)\n", sizeof(bytesizechar));
printf("Size of an int: %d byte(s)\n", sizeof(bytesizeint));
printf("Size of a long int: %d byte(s)\n", sizeof(bytesizelong));
printf("Size of a long long int: %d byte(s)\n", sizeof(bytesizelonglong));
printf("Size of a float: %d byte(s)\n", sizeof(bytesizefloat));
return (0);
}
