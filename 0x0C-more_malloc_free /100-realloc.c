#include "tomi.h"
#include <stddef.h>

/**
 * _realloc - program reallocs a memory block
 * @ptr: ptr to prev memory allocated with a call to malloc
 * @old_size: var size of ptr
 * @new_size: var size of the new memory to be allocated
 * Return: pointer to the address of the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *stk_block;
	unsigned int counter;

	if (ptr == NULL)
	{
		stk_block = malloc(new_size);
		return (stk_block);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		stk_block = malloc(new_size);
		if (stk_block != NULL)
		{
			for (counter = 0; counter < min(old_size, new_size); counter++)
				*((char *)stk_block + counter) = *((char *) ptr + counter);
			free(ptr);
			return (stk_block);
		}
		else
			return (NULL);
	}
}
