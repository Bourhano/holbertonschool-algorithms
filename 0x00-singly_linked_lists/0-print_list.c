#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the input linked list
 * @h: ptr to the head of the list
 *
 * Return: number of nodes
 **/
size_t print_list(const list_t *h)
{
	size_t nb = 0;

	while (h != 0)
	{
		nb++;
		if (h->str != 0)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (nb);
}
