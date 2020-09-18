#include "hash_tables.h"
#include <stdio.h>

/**
 * free_list - Frees a linked list
 * @head: ptr to the head of the list
 **/
void free_list(hash_node_t *head)
{
	if (head == 0)
		return;
	if (head->next)
		free_list(head->next);
	free(head->value);
	free(head->key);
	free(head);
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hn;
	unsigned long int idx = 0;

	if (ht == 0)
		return;
	while (idx < ht->size)
	{
		hn = ht->array[idx];
		free_list(hn);
		idx++;
	}
	free(ht);
}
