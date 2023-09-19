#include <stdio.h>

/**
 * swap_int - Swaps two Integers.
 * @num_a: Pointer to the first integer to swap.
 * @num_b: Pointer to the second integer to swap.
 * Return: None
 */

void swap_int(int *num_a, int *num_b)
{
	int swap_num;

	swap_num = *num_a;
	*num_a = *num_b;
	*num_b = swap_num;
}
