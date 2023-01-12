#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Counts number of elements in dlistint_t linked list
 * @h: Head of the dlistint_t linked list
 *
 * Return: Number of elements in the dlistint_t linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; ++nodes)
		h = h->next;
	return (nodes);
}
