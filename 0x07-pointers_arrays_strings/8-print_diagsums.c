#include "main.h"

/**
 * print_diagsums - check the code
 * @a: 2d array of int types
 * @size: size of array (square)
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int counter, sum1 = 0, sum2 = 0;

	for (counter = 0; counter < size; counter++)
	{
		sum1 += a[counter];
		sum2 += a[size - counter - 1];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
