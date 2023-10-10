#include "tomi.h"
#include <stddef.h>

/**
 * array_range - Program that creates an array of integers
 * @min: var smallest number in the array
 * @max: var largest value in the array
 * Return: ptr to the address of the memory block
 */

int *array_range(int min, int max)
{
	int *stk_block;
	int i, j = 0;

	if (min > max)
		return (NULL);
	stk_block = malloc(sizeof(*stk_block) * ((max - min) + 1));
	if (stk_block != NULL)
	{
		for (i = min; i <= max; i++)
		{
			stk_block[j] = i;
			j++;
		}
		return (stk_block);
	}
	else
		return (NULL);
}
