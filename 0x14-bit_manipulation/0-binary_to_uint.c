#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - program that Converts a binary to int.
 * @b: ptr to str of 0 & 1 characterss.
 * Return: Converted numbers or def
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, times = 1;
	int size;

	if (b == NULL)
		return (0);
	for (size = 0; b[size];)
		size++;
	for (size -= 1; size >= 0; size--)
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);
		num += (b[size] - '0') * times;
		times *= 2;
	}
	return (num);
}
