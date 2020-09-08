#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * listint_len - Returns the number of elements of a list
 * @h: ptr to the head of the list
 *
 * Return: number of elements
 **/
size_t listint_len(const listint_t *h)
{
	size_t nb = 0;

	while (h != 0)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}

/**
 * delete_nodeint_at_index - Deletes node at specified index of the input list
 * @head: double ptr to the head of the list
 * @index: index to insert at
 *
 * Return: updated pointer to the linked list
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int len;
	listint_t *savedHead = *head;

	if (head == 0 || *head == 0)
		return (-1);
	len = listint_len(*head);
	if (index > len)
		return (-1);
	if (index == 0)
	{
		*head = savedHead->next;
		free(savedHead);
	}
	while (index > 1)
	{
		savedHead = savedHead->next;
		index--;
	}
	if (savedHead->next != 0)
	{
		savedHead->next = savedHead->next->next;
		free(savedHead->next);
	}
	return (1);
}
