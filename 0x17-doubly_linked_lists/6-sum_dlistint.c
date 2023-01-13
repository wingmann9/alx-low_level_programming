#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Sum up data of dlistint_t linked list
 * @head: Head of the dlistint_t linked list
 *
 * Return: Sum of data of dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
