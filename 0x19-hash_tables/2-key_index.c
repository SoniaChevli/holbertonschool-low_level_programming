#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: key of a hashtable
 * @size: sie of the table
 *
 * Return:index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int hashnumber;
	unsigned int index;

	hashnumber = hash_djb2(key);

	if (hashnumber == NULL)
		return (NULL);

	index = hashnumber % size;
	return (index);

}
