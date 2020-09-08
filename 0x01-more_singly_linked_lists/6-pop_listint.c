#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * pop_listint - Pops a node from the head of the input list
 * @head: ptr to the head of the list
 *
 * Return: the popped int
 **/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *dump = *head;

	if (head == 0 || *head == 0)
		return (0);
	n = (*head)->n;
	*head = (*head)->next;
	free(dump);
	return (n);
}
