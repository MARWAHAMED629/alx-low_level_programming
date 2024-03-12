#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 *                 of integers using the linear search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t z;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (z = 0; z < size; z++)
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", z, array[z]);

		/* If the value is found */
		if (array[z] == value)

			/* Return the index of the value */
			return (z);
	}

	/* Value not found, return -1 */
	return (-1);
}
