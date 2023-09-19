#include <stdio.h>
#include "main.h"

/**
 * print_array - Program to elements of an array
 * @a: necessary variables
 * @n: another necessary variable
 * Return: None
 */

void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		if (counter != (n - 1))
		{
			printf("%d, ", a[counter]);
		}
		else
		{
			printf("%d", a[counter]);
		}
		_putchar('\n');
	}
}

