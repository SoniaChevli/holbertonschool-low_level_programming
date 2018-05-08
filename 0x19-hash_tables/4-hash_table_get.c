#include "hash_tables.h"
/**
 * hash_table_get - retrieves a valuse associated with a key
 * @ht: hash table to look at
 * @key: key that is being looked for
 *
 * Return: value associated with element. Otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *keyfinder;

	index = key_index((const unsigned char *)key, ht->size);

	keyfinder = ht->array[index];

	while (keyfinder)
	{

		if (strcmp(keyfinder->key, key) == 0)
		{

			return (keyfinder->value);
		}
		keyfinder = keyfinder->next;
	}

	return (NULL);
}
