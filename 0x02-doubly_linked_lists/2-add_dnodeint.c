#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_dnodeint - Adds a node to the head of the input list
 * @head: ptr to the head of the list
 * @n: int to add as a node
 *
 * Return: updated pointer to the linked list, NULL if failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newHead = NULL;

	if (head == 0)
		return (0);
	newHead = malloc(sizeof(dlistint_t));
	if (newHead != 0)
	{
		newHead->n = n;
		if (*head != 0)
		{
			newHead->next = *head;
			(*head)->prev = newHead;
		}
		else
			newHead->next = 0;
		newHead->prev = 0;
		*head = newHead;
	}
	return (newHead);
}
