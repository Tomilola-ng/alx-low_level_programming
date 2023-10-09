#include "tomi.h"

/**
 * malloc_checked - Program useing malloc, and exit with 98
 * @b: var size of the memory block to be allocated
 * Return: pointer to the address of the memory block
 */

void *malloc_checked(unsigned int b)
{
	void *num;

	num = malloc(b);
	if (num == NULL)
		exit(98);
	return (num);
}
