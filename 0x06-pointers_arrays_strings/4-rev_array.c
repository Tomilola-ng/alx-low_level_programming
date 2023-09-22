#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Program to reverse array elements
 * @n: variable size of an array
 * @a: variable array refrance
 */

void reverse_array(int *a, int n)
{
	int counter, var_num;

	for (counter = 0; counter < (n / 2) + (n % 2); counter++)
	{
		var_num = a[counter];
		a[counter] = a[n - 1 - counter];
		a[n - 1 - counter] = var_num;
	}
}
