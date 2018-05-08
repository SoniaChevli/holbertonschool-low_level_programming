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
	hash_node_t *insert;

	index = key_index((unsigned char *)key, ht->size);

	head = ht->array[index];


	insert = malloc(sizeof(hash_node_t));
	if (insert == NULL || key == NULL || value == NULL)
		return (0);

	insert->key = strdup(key);
	insert->value = strdup(value);
	if (head == NULL)
	{
		head = insert;
		return (1);
	}
	insert->next = head;
	head = insert;
	return (1);
}
