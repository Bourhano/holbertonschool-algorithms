#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of the hash table
 *
 * Return: pointer to the table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == 0)
		return (0);
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == 0)
		return (0);
	return (ht);
}
