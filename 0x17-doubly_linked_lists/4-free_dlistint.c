#include "lists.h"

/**
 * free_dlistint - free a dlistint_t of list.
 *
 * @head: it is the  head of the list.
 * Return: No Thing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
