#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index -\
 *	Inserts new node at a given position dlistint linked list
 * @h: Pointer to head of dlistint_t linked list
 * @idx: Position to insert the new node
 * @n: Integer contained in new node
 *
 * Return: Address of new node, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
