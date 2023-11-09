#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 *  node of a dlistint_t linked list
 *
 * @head: the head of list
 * @index: it is index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int b;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	b = 0;

	while (head != NULL)
	{
		if (b == index)
			break;
		head = head->next;
		b++;
	}

	return (head);
}
