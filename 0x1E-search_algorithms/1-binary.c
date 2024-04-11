#include "search_algos.h"

/**
 * binary_search - MAIN FUNCTION
 * @array: PTR TO ARRAY
 * @size: ARRAY COUNT
 * @value: SEARCH VALUE
 * Return: idx as -1 or actual value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx, right, left;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (idx = left; idx < right; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		idx = left + (right - left) / 2;
		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			right = idx - 1;
		else
			left = idx + 1;
	}

	return (-1);
}
