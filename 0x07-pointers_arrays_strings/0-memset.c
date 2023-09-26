#include "main.h"

/**
 * _memset - function fills the 1st memory with constant
 * @s: Pointer for memory address
 * @b: Constant Byte
 * @n: Bytes that needs to be filled
 * Return:A pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}

	return (s);
}

