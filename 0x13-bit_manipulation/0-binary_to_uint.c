#include "holberton.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: binary number to convert
 *
 *Return: converted number. Otherwise 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 1, length = 0, sum = 0;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
		length++;
	if (length == 0)
		return (0);

	while (length)
	{
		length--;
		if (b[length] == '0' || b[length] == '1')
		{
			if (b[length] == '1')
				sum = sum + x;
			x = x * 2;
		}
		else
			return (0);
	}
	return (sum);

}
