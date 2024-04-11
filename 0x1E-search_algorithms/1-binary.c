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
	size_t left = 0, right = size - 1, mid;

    if (array == NULL)
        return (-1);

    printf("Searching in array: ");
    for (mid = 0; mid < size; mid++)
        printf("%d, ", array[mid]);
    printf("\b\b\n");

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
        {
            printf("Searching in array: ");
            for (size_t i = left; i <= right; i++)
                printf("%d, ", array[i]);
            printf("\b\b\n");
            left = mid + 1;
        }
        else
        {
            printf("Searching in array: ");
            for (size_t i = left; i <= right; i++)
                printf("%d, ", array[i]);
            printf("\b\b\n");
            right = mid - 1;
        }
    }

    return (-1);
}
