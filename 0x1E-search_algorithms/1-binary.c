#include "search_algos.h"

/**
 * binary_search - Searches for a value in the sorted array of integers using.
 * @array: A pointer to the first element of AN array to search.
 * @size: The number of An elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is n't present or an array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t z, l, r;
	
	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform binary search */
	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (z = l; z < r; z++)
			printf("%d, ", array[z]);
		printf("%d\n", array[z]);
		
		/* Calculate the middle index */
		i = l + (r - l) / 2;
		
		/* If the middle an element is the value */
		if (array[z] == value)
			/* Return the index */
			return (z);
		
		/* If the middle an  element is greater than the value */
		if (array[z] > value)
			/* Update the right boundary */
			r = z - 1;
		else
			/* Otherwise, update the left boundary */
			l = z + 1;
	}
	/* Value not found, return -1 */
	return (-1);
}
