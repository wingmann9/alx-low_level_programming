#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Frees dlistint_t linked list
 * @head: Head of dlistint_t linked list
 *
 * Return: Noting
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
