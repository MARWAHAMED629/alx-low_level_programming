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
	size_t n, lft, rt;

	if (array == NULL)
		return (-1);

	for (lft = 0, rt = size - 1; rt >= lft;)
	{
		n = lft + (((double)(rt - lft) / (array[rt] - array[lft])) * (value - array[lft]));
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
			rt = n - 1;
		else
			lft = n + 1;
	}

	return (-1);
}
