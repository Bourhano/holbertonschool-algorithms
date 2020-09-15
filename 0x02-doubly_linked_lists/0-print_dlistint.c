#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints the input doubly linked list
 * @h: ptr to the head of the list
 *
 * Return: number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
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
