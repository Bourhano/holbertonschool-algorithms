#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hn;
	unsigned long int idx = 0, first = 1;

	if (ht == 0)
		return;
	printf("{");
	while (idx < ht->size)
	{
		hn = ht->array[idx];
		while (hn != 0)
		{
			if (first)
			{
				printf("'%s': '%s'", hn->key, hn->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", hn->key, hn->value);
			hn = hn->next;
		}
		idx++;
	}
	printf("}\n");
}
