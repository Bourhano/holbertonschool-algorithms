#include "lists.h"

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
