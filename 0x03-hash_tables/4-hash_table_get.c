#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retreives an element from the hash table
 * @ht: pointer to the hash table
 * @key: the key to find its index
 *
 * Return: value associated with element, or NULL if key couldn’t be found
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hn;
	unsigned long int idx;

	if (key == 0 || ht == 0 || strlen(key) == 0)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	hn = ht->array[idx];
	while (hn != 0)
	{
		if (strcmp(hn->key, key) == 0)
		{
			return (hn->value);
		}
		else
		{
			hn = hn->next;
		}
	}
	return (0);
}
