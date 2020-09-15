#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * dlistint_len - Returns the number of elements of a list
 * @head: ptr to the head of the list
 *
 * Return: number of elements
 **/
size_t dlistint_len(const dlistint_t *head)
{
	size_t nb = 0;

	while (head != 0)
	{
		nb++;
		head = head->next;
	}
	return (nb);
}

/**
 * delete_dnodeint_at_index - Deletes node at specified index of the input list
 * @head: double ptr to the head of the list
 * @index: index to insert at
 *
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len;
	dlistint_t *savedHead = *head;

	if (head == 0 || *head == 0)
		return (-1);
	len = dlistint_len(*head);
	if (index > len)
		return (-1);
	if (index == 0)
	{
		*head = savedHead->next;
		savedHead->next->prev = 0;
		free(savedHead);
	}
	while (index > 1)
	{
		savedHead = savedHead->next;
		index--;
	}
	if (savedHead->next != 0)
	{
		savedHead->next->next->prev = savedHead;
		savedHead->next = savedHead->next->next;
		free(savedHead->next);
	}
	return (1);
}
