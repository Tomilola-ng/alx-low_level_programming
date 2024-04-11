#include "search_algos.h"

/**
 * linear_search - MAIN FUNCTION
 * @array: PTR TO ARRAY
 * @size: ARRAY COUNT
 * @value: SEARCH VALUE
 * Return: idx as -1 or actual value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

    if (array == NULL)
        return (-1);

    for (idx = 0; idx < size; idx++)
    {
        printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
        if (array[idx] == value)
            return (idx);
    }

    return (-1);
}
