#include "search_algos.h"

/**
 * linear_search - Performs a linear search on an array.
 * @array: Pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index of the first occurrence of the value in the array,
 *         or -1 if the value is not found.
 */

int linear_search(int *array, size_t size, int value)
{
    if (array == NULL) {
        return (-1);
    }

    size_t idx = 0;

    while (idx < size) {
        printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

        if (array[idx] == value) {
            return (idx); // Found, return the index
        }

        idx++;
    }

    return (-1);
}
