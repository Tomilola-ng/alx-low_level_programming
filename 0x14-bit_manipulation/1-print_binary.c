#include "main.h"

/**
 * print_binary - Program that prints the binary rep of nums
 * @n: ptr to the int t be printed in binary.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar((n & 1) + '0');
}
