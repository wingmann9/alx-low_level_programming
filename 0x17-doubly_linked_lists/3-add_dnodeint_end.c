#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of a dlistint_t linked list
 * @head: Pointer to the head of the dlistint_t libked list
 * @n: Integer for the new node to contain
 *
 * Return: Address of new node, otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
