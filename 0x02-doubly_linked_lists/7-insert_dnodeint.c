#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * dlistint_len - Returns the number of elements of a list
 * @h: ptr to the head of the list
 *
 * Return: number of elements
 **/
size_t dlistint_len(const dlistint_t *h)
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
 * insert_dnodeint_at_index - Adds a node at specified index of the input list
 * @h: double ptr to the head of the list
 * @idx: index to insert at
 * @n: int to add as a node
 *
 * Return: updated pointer to the linked list, NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len;
	listint_t *node = NULL, *savedHead = *h;

	if ((h == 0 && idx != 0) || *h == 0)
		return (0);
	len = dlistint_len(*h);
	if (idx > len)
		return (0);
	if (idx == 0)
	{
		*h = add_dnodeint(h, n);
		return (*h);
	}
	if (idx == len)
	{
		add_dnodeint_end(h, n);
		return (*h);
	}
	node = malloc(sizeof(listint_t));
	if (node == 0)
		return (0);
	node->n = n;
	while (idx > 1)
	{
		savedHead = savedHead->next;
		idx--;
	}
	node->next = savedHead->next;
	node->prev = savedHead;
	savedHead->next->prev = node;
	savedHead->next = node;
	return (*h);
}
