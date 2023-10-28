#include "main.h"

/**
 * flip_bits - program that flips numbers
 * @n: var number.
 * @m: var number to flip n to
 * Return: bits or default
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	// do
	// {
	// 	bits += (xor & 1);
	// 	xor >>= 1;
	// } while (xor > 0);

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
