#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_list - Frees a linked list
 * @head: ptr to the head of the list
 **/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != 0)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
