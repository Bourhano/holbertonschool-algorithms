#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - Sums the nodes of the input doubly linked list
 * @head: ptr to the head of the list
 *
 * Return: sum of the nodes
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
