#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hashtable
 * @ht: hash table to add or update key/value
 * @value: value associated with the key
 * @key: key of the string
 *
 *Return: 1 if succeeded. Otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new;
	hash_node_t *tmp;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];


	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}


	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}

	tmp = ht->array[index];
	new->next = tmp;
	ht->array[index] = new;
	return (1);
}
