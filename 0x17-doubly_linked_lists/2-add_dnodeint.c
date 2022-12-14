#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Adds new node at the beginning of a dlistint_t linked list
 * @head: Pointer to the head of the dlistint_t linked list
 * @n: Integer for the new node to contain
 *
 * Return: Address of new node, otherwise NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
