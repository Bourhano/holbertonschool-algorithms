#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - Adds a node to the end of the input list
 * @head: ptr to the head of the list
 * @str: string to add as a node
 *
 * Return: updated pointer to the linked list
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	size_t length = 0;
	list_t *newHead = NULL, *myPtr;
	const char *backup = str;

	while (*str++ != 0)
		length++;
	newHead = malloc(sizeof(list_t));
	if (newHead != 0)
	{
		newHead->str = strdup(backup);
		newHead->len = length;
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
