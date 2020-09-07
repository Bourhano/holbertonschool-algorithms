#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_list - Frees a linked list
 * @head: ptr to the head of the list
 **/
void free_list(list_t *head)
{
	if (head == 0)
		return;
	if (head->next)
		free_list(head->next);
	free(head->str);
	free(head);
}
