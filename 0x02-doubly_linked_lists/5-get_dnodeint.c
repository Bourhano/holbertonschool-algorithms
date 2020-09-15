#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - Returns the node of the specified index
 * @head: ptr to the head of the list
 * @index: position of the desired node
 *
 * Return: ptr to the desired node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index > 0)
	{
		if (head == 0)
			return (0);
		head = head->next;
		index--;
	}
	return (head);
}
