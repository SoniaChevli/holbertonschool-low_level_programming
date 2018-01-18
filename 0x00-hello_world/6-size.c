#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 int bytesizechar;
 char bytesizeint;
 long bytesizelong;
 longlong bytesizelonglong;
 float bytesizefloat;

  printf("Size of a char: %d byte(s)\n", bytesizechar);
  printf("Size of an int: %d byte(s)\n", bytesizeint);
  printf("Size of a long int: %d byte(s)\n", bytesizelong);
  printf("Size of a long long int: %d byte(s)\n", bytesizelonglong);
  printf("Size of a float: %d byte(s)\n", bytesizefloat);
return (0);
}
