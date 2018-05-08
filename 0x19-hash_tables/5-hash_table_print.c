#include "hash_tables.h"
/**
 * hash_table_print- function prints a hashtable
 *@ht: hashtable to print
 *
 *Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;
	unsigned int boo = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (boo == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			boo = 1;
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
