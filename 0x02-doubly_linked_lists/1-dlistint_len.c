#include "lists.h"

/**
 * dlistint_len - Returns the number of elements of a doubly linked list
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
