#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint - Adds a node to the head of the input list
 * @head: ptr to the head of the list
 * @n: int to add as a node
 *
 * Return: updated pointer to the linked list
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newHead = NULL;

	newHead = malloc(sizeof(listint_t));
	if (newHead != 0)
	{
		newHead->n = n;
		newHead->next = *head;
		*head = newHead;
	}
	return (newHead);
}

/**
 * add_nodeint_endd - Adds a node to the end of the input list
 * @head: ptr to the head of the list
 * @n: string to add as a node
 *
 * Return: updated pointer to the linked list
 **/
listint_t *add_nodeint_endd(listint_t **head, const int n)
{
	listint_t *newHead = NULL, *myPtr;

	newHead = malloc(sizeof(listint_t));
	if (newHead != 0)
	{
		newHead->n = n;
		newHead->next = NULL;
	}
	else
		return (0);
	if (*head != 0)
	{
		myPtr = *head;
		while (myPtr->next != 0)
			myPtr = myPtr->next;
		myPtr->next = newHead;
	}
	else
		*head = newHead;
	return (newHead);
}

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


/**
 * insert_nodeint_at_index - Adds a node at specified index of the input list
 * @head: double ptr to the head of the list
 * @idx: index to insert at
 * @n: int to add as a node
 *
 * Return: updated pointer to the linked list
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len;
	listint_t *node = NULL, *savedHead = *head;

	if (head == 0 || *head == 0)
		return (0);
	len = listint_len(*head);
	if (idx > len)
		return (0);
	if (idx == 0)
	{
		*head = add_nodeint(head, n);
		return (*head);
	}
	if (idx == len)
	{
		add_nodeint_endd(head, n);
		return (*head);
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
	savedHead->next = node;
	return (*head);
}
