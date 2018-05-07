#include "hash_tables.h"
/**
 * hash_djb2 - function that funds the hasvalue
 * @str: key to be translated to a hashnumber
 *
 * Return: hashnumber
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
