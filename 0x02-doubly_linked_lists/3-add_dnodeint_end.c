#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_dnodeint_end - Adds a node to the end of the input list
 * @head: ptr to the head of the list
 * @n: string to add as a node
 *
 * Return: updated pointer to the doubly linked list
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newHead = NULL, *myPtr;

	newHead = malloc(sizeof(dlistint_t));
	if (newHead != 0)
	{
		newHead->n = n;
		newHead->next = NULL;
		newHead->prev = NULL;
	}
	else
		return (0);
	if (*head != 0)
	{
		myPtr = *head;
		while (myPtr->next != 0)
			myPtr = myPtr->next;
		myPtr->next = newHead;
		newHead->prev = myPtr;
	}
	else
		*head = newHead;
	return (newHead);
}
