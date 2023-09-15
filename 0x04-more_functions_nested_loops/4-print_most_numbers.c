#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Entry point of the program to print 0 - 9 exclusing 2 & 4
 * Return: None
 */

void print_most_numbers(void)
{
	int numba;

	for (numba = 0; numba <= 9; numba++)
	{
		if (numba != 2 && numba != 4)
		{
			_putchar((numba % 10) + '0');
		}
	}

	_putchar('\n');
	return (0);
}

