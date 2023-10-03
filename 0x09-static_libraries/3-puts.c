#include <stdio.h>
#include "main.h"

/**
 * _puts - Program that prints a string followed by a new line to stdout.
 * @var_str: The string to be printed out
 * Return: None
 */

void _puts(char *var_str)
{
	int counter = 0;

	while (var_str[counter])
	{
		_putchar(var_str[counter]);
		counter++;
	}
	_putchar('\n');
}
