#include "variadic_functions.h"

/**
 * sum_them_all - Program that adds arguements passed
 * @n: Integer number of passed arguements
 * Return: sum of num
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter;
	int sum = 0;

	va_list ap;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (counter = 0; counter < n; counter++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
