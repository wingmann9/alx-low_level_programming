#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Finds a node in a dlistint_t linked list
 * @head: Head of the dlistint_t linked list
 * @index: Node to find
 *
 * Return: Address of node, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; --index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
