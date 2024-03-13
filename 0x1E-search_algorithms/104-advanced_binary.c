#include "search_algos.h"


/**
 * advanced_b_recursive - performs recursive binary search
 * @array: pointer to the first element
 * @right: starting index
 * @left: ending index
 * @value: value to search for
 * Return: -1 || index where value is located
 */

int advanced_b_recursive(int *array, size_t left, size_t right, int value)
{
	size_t z;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (z = left; z < right; z++)
		printf("%d, ", array[z]);
	printf("%d\n", array[z]);

	z = left + (right - left) / 2;
	if (array[z] == value && (z == left || array[z - 1] != value))
		return (z);
	if (array[z] >= value)
		return (advanced_b_recursive(array, left, z, value));
	return (advanced_b_recursive(array, z + 1, right, value));
}

/**
 * advanced_binary - searches a value in a sorted array of intergers
 * @array: pointer to the first element of the array
 * @size: number of An elements in array
 * @value: value to the search for
 * Return: -1 || value
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_b_recursive(array, 0, size - 1, value));
}
