#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 * @ht: hashtable to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *head;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		head = ht->array[i];
		while (head)
		{
			tmp = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = tmp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
