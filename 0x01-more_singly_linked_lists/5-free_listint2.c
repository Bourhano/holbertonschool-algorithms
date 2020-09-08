#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_listint - Frees a linked list
 * @head: ptr to the head of the list
 **/
void free_listint(listint_t *head)
{
	if (head == 0)
		return;
	if (head->next)
		free_listint(head->next);
	free(head);
}

/**
 * free_listint2 - Frees a linked list
 * @head: ptr to the head of the list
 **/
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = 0;
}
