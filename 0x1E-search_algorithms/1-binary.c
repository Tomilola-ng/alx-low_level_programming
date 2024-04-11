#include "search_algos.h"

/**
 * binary_search - Performs a binary search on a sorted array.
 * @array: Pointer to the first element of the sorted array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index of the first occurrence of the value in the array,
 *         or -1 if the value is not found.
 */

int binary_search(int *array, size_t size, int value)
{
    if (array == NULL) {
        return (-1);
    }

    size_t left = 0;
    size_t right = size - 1;

    while (left <= right) {
        printf("Searching in array: ");
        for (size_t idx = left; idx <= right; idx++) { // Modified loop to include right index
            printf("%d, ", array[idx]);
        }
        printf("\n");

        size_t mid = left + (right - left) / 2;

        if (array[mid] == value) {
            return (mid);
        }

        if (array[mid] > value) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return (-1);
}
