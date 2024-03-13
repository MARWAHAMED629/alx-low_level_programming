#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using Jump search.
 * @list: Pointer to the head of the list.
 * @size: Number of the nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where the value is located, or NULL if
 * the value is not found or if the list is NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, s_size;
	listint_t *nde, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	s_size = sqrt(size);
	for (nde = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		nde = jump;
		for (step += s_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   nde->index, jump->index);

	for (; nde->index < jump->index && nde->n < value; nde = nde->next)
		printf("Value checked at index [%ld] = [%d]\n", nde->index, nde->n);
	printf("Value checked at index [%ld] = [%d]\n", nde->index, nde->n);

	return (nde->n == value ? nde : NULL);
}
