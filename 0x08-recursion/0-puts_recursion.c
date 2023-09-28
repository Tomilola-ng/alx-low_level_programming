#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _puts_recursion - Program that prints a string
 * @str: The String to be printed
 * Return: None it is void
 */

void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(str[0]);
		_puts_recursion(str + 1);
	}
}

