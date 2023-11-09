#include "lists.h"

/**
 * sum_dlistint - it return the sum of all the data
 * of a doubly linked list.
 *
 * @head: it is a head of the list.
 * Return: total of the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int total;

	total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}

	return (total);
}
