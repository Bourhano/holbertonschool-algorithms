#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - Sums the nodes of the input linked list
 * @head: ptr to the head of the list
 *
 * Return: sum of the nodes
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
