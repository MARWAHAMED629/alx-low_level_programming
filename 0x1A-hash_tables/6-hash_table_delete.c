#include "hash_tables.h"

/**
 * hash_table_delete - deletes the hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int d = 0;
	hash_node_t *node;

	while (d < ht->size)
	{
		while (ht->array[d] != NULL)
		{
			node = ht->array[d]->next;
			free(ht->array[d]->key);
			free(ht->array[d]->value);
			free(ht->array[d]);
			ht->array[d] = node;
		}
		d++;
	}
	free(ht->array);
	free(ht);
}
