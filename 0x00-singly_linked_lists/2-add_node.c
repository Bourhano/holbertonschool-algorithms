#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - Adds a node to the head of the input list
 * @head: ptr to the head of the list
 * @str: string to add as a node
 *
 * Return: updated pointer to the linked list
 **/
list_t *add_node(list_t **head, const char *str)
{
	size_t length = 0;
	list_t *newHead = NULL;
	const char *backup = str;

	if (*head == 0)
		return (NULL);
	while (*str++ != 0)
		length++;
	newHead = malloc(sizeof(list_t));
	if (newHead != 0)
	{
		newHead->str = strdup(backup);
		newHead->len = length;
		newHead->next = *head;
		*head = newHead;
	}
	return (newHead);
}
