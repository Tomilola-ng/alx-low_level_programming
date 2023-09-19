#include <stdio.h>

/**
 * swap_int - Entry point of the program
 * @num_a: Variable number been passed
 * @num_b: Other Variable number to be swapped
 * @swap_num: Agent for swapping :)
 * Return: Always 0 (Success)
 */

void swap_int(int *num_a, int *num_b)
{
	int swap_num;

	swap_num = *num_a;
	*num_a = *num_b;
	*num_b = swap_num;
}
