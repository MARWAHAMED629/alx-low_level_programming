#include "search_algos.h"

/**
 * interpolation_search - searches for a value in the sorted array.
 * @array: pointer to the first element of the array.
 * @size: the number of elements in an array.
 * @value: the value to the search for.
 * Return: first index where value is the located.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t n, lt, r;

	if (array == NULL)
		return (-1);

	for (lt = 0, r = size - 1; r >= lt;)
	{
		n = lt + (((double)(r - lt) / (array[r] - array[lt])) * (value - array[lt]));
		if (n < size)
			printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", n);
			break;
		}

		if (array[n] == value)
			return (n);
		if (array[n] > value)
			r = n - 1;
		else
			lt = n + 1;
	}

	return (-1);
}
