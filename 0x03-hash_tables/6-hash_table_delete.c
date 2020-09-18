#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hn;
	unsigned long int idx = 0, first = 1;

	if (ht == 0)
		return;
	while (idx < ht->size)
	{
		hn = ht->array[idx];
		free(hn);
		idx++;
	}
	free(ht);
}
