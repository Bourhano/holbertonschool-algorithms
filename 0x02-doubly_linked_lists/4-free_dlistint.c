#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_dlistint - Frees a doubly linked list
 * @head: ptr to the head of the list
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == 0)
		return;
	if (head->next)
	{
		free_dlistint(head->prev);
		free_dlistint(head->next);
	}
	free(head);
}
