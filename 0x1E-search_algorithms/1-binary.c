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
	size_t left = 0, right = size - 1;

    if (array == NULL)
        return (-1);

    printf("Searching in array: ");
    for (size_t mid = 0; mid < size; mid++)
        printf("%d, ", array[mid]);
    printf("\b\b\n");

    while (left <= right) {
        size_t mid = left + (right - left) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;

        printf("Searching in array: ");  // Print statements moved outside the inner loop
        for (size_t i = left; i <= right; i++)
            printf("%d, ", array[i]);
        printf("\b\b\n");
    }

    return (-1);
}
