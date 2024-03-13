#include "search_algos.h"

/**
 * linear_skip - searches for the value in the sorted skip list of intergers
 * @list: A pointer to the head of the skip
 * @value: A value to search for
 * Return: A pointer to the first node
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *nde, *j;

	if (list == NULL)
		return (NULL);

	for (nde = j = list; j->next != NULL && j->n < value;)
	{
		nde = j;
		if (j->express != NULL)
		{
			j = j->express;
			printf("Value checked at index [%ld] = [%d]\n",
				   j->index, j->n);
		}
		else
		{
			while (j->next != NULL)
				j = j->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   nde->index, j->index);

	for (; nde->index < j->index && nde->n < value; nde = nde->next)
		printf("Value checked at index [%ld] = [%d]\n", nde->index, nde->n);
	printf("Value checked at index [%ld] = [%d]\n", nde->index, nde->n);

	return (nde->n == value ? nde : NULL);
}
