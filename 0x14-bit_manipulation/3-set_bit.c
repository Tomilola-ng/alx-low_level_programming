#include "main.h"

/**
 * set_bit - Program that sets values of bits
 * @n: Ptr to provided bit.
 * @index: variable index to set the value at
 * Return: default int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n ^= (1 << index);

	return (1);
}
