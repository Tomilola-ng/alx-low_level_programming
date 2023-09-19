#include <stdio.h>
#include "main.h"

/**
 * _puts - Program
 * @var_str: The string to be printed out
 * Return: None
 */

void _puts(char *var_str)
{
	int counter;

	while (var_str[counter])
	{
		_putchar(var_str[counter]);
		counter++;
	}
	_putchar("\n");
}

