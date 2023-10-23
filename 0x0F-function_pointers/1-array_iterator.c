#include "function_pointers.h"

/**
 * array_iterator - Program that executes func as par
 * @array: ptr to int array
 * @size: var size of int
 * @action: func to work with
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	if (array == NULL || action == NULL)
    {
        return;
    }

	for (counter = 0; counter < size; counter++)
	{
		action(array[counter]);
	}
}