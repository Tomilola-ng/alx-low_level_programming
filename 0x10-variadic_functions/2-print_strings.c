#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Program prints strings
 * @separator: ptr str to be printed between numbers
 * @n: int num of strings passed to the function
 * Return: None 
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lc;
	unsigned int counter;
	char *p;

	va_start(lc, n);
	for (counter = 0; counter < n; counter++)
	{
		p = va_arg(lc, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", p);
		if (counter != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lc);
}
