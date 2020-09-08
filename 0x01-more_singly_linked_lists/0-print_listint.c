#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints the input linked list
 * @h: ptr to the head of the list
 *
 * Return: number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	size_t nb = 0;

	while (h != 0)
	{
		nb++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nb);
}
