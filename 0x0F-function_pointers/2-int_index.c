#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Program that finds int
 * @array: ptr to maze field aa array
 * @size: num of maze size
 * @cmp: ptr to checker
 * Return: value or 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (size <= 0)
    {
        return (-1);
    }

	if (array == NULL || cmp == NULL)
    {
        return (-1);
    }

	for (counter = 0; counter < size; counter++)
	{
		if (cmp(array[counter]) != 0)
        {
            return (counter);
        }

	}

	return (-1);
}