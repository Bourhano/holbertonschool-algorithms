#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint_end - Adds a node to the end of the input list
 * @head: ptr to the head of the list
 * @n: string to add as a node
 *
 * Return: updated pointer to the linked list
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newHead = NULL, *myPtr;

	newHead = malloc(sizeof(listint_t));
	if (newHead != 0)
	{
		newHead->n = n;
		newHead->next = NULL;
	}
	else
		return (0);
	if (*head != 0)
	{
		myPtr = *head;
		while (myPtr->next != 0)
			myPtr = myPtr->next;
		myPtr->next = newHead;
	}
	else
		*head = newHead;
	return (newHead);
}
