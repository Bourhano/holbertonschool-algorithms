#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint - Adds a node to the head of the input list
 * @head: ptr to the head of the list
 * @n: int to add as a node
 *
 * Return: updated pointer to the linked list
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newHead = NULL;

	newHead = malloc(sizeof(listint_t));
	if (newHead != 0)
	{
		newHead->n = n;
		newHead->next = *head;
		*head = newHead;
	}
	return (newHead);
}
