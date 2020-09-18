#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key to find its index
 * @value: the value to insert
 *
 * Return: 1 if it succeeded, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn;
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);

	if (key == 0 || ht == 0)
		return (0);
	hn = malloc(sizeof(hash_node_t));
	hn->key = strdup(key);
	hn->value = strdup(value);
	if (ht->array[idx] == 0)
	{
		ht->array[idx] = hn;
	}
	else
	{
		hn->next = ht->array[idx];
		ht->array[idx] = hn;
	}
	return (1);
}
