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
	hash_node_t *head;
	hash_node_t *new;
	hash_node_t *tmp;

	if (key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	head = ht->array[index];
	tmp = head;

	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
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

	if (head == NULL)
	{
		head = new;
		return (1);
	}

	new->next = head;
	head = new;
	return (1);
}
