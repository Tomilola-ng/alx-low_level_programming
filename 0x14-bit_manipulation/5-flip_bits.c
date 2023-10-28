#include "main.h"

/**
 * flip_bits - program that flips numbers
 * @n: var number.
 * @m: var number to flip n to
 * Return: bits or default
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, answer;
	unsigned int j, i;

	j = 0;
	answer = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (answer == (diff & answer))
			j++;
		answer <<= 1;
	}

	return (j);
}
