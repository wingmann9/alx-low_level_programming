#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all element of a dlistint_t linked list
 * @h: Head of the dlistint_t linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; ++nodes)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
