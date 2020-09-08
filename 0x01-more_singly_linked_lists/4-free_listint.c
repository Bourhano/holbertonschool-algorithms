#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_listint - Frees a linked list
 * @head: ptr to the head of the list
 **/
void free_listint(list_t *head)
{
	if (head == 0)
		return;
	if (head->next)
		free_listint(head->next);
	free(head);
}
