#include <stdio.h>
#include "main.h"

/**
 * print_rev - Program to print reverse string and a new line
 * @var_str: The string to be reversed
 * Return: None
 */

void print_rev(char *var_str)
{
	int counter;
	int index;

	for (counter = 0; var_str[counter] != '\0'; counter++)
	{
	}
	index = counter - 1;
	for (; index >= 0; index--)
	{
		_putchar(var_str[index]);
	}
	_putchar('\n');
}
