#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_numbers - program that prints numbers
 * @separator: ptr str to be printed between numbers
 * @n: var int of num passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lc;
	unsigned int counter;

	va_start(lc, n);
	for (counter = 0; counter < n; counter++)
	{
		printf("%d", va_arg(lc, int));
		if (counter != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lc);
}
