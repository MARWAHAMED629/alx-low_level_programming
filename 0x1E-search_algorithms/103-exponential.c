#include "search_algos.h"

/**
 * b_search - searches for the value to be sorted
 * @array: array of integers
 * @left: left of element
 * @right: right of element
 * @value: value to search for
 * Return: -1 if not found || index of value
 */

int b_search(int *array, size_t left, size_t right, int value)
{
	size_t o;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (o = left; o < right; o++)
			printf("%d, ", array[o]);
		printf("%d\n", array[o]);

		o = left + (right - left) / 2;
		if (array[o] == value)
			return (o);
		if (array[o] > value)
			right = o - 1;
		else
			left = o + 1;
	}

	return (-1);
}


/**
 * exponential_search -searches for the value in the sorted array
 * @array: pointer to the first element of the array
 * @size: the number of an elements in the array
 * @value: the value to search for
 * Return: index of the value || -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t z = 0;
	size_t  right;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] != value)
	{
		for (z = 1; z < size && array[z] <= value; z *= 2)
			printf("Value checked array[%ld] = [%d]\n", z, array[z]);
	}

	right = z < size ? z : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", z / 2, right);
	return (b_search(array, z / 2, right, value));
}
