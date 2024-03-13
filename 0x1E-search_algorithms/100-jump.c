#include "search_algos.h"

/**
 * jump_search - searches for a vulue in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of An elements in the array
 * @value: the value to search for
 * Return: the first index of the value in the array.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t z, jump_s, prev_idx;

	if (array == NULL || size == 0)
		return (-1);

	/* Handle invalid input */
	jump_s = sqrt(size);
	for (z = prev_idx = 0; prev_idx < size && array[prev_idx] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_idx, array[prev_idx]);
		z = prev_idx;
		prev_idx += jump_s;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", z, prev_idx);

	prev_idx = prev_idx < size - 1 ? prev_idx : size - 1;
	for (; z < prev_idx && array[z] < value; z++)
		printf("Value checked array[%ld] = [%d]\n", z, array[z]);
	printf("Value checked array[%ld] = [%d]\n", z, array[z]);

	return (array[z] == value ? (int)z : -1);
}
