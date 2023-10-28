#include "main.h"

/**
 * get_bit - program that get bit values
 * @n: var to bit.
 * @index: variable index to get the value at
 * Return: bit or -1 as def
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
