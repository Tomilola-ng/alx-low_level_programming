#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Program that rvs str
 * @str: Variable string
 * Return: None
 */

void _print_rev_recursion(char *str)
{
	if (*str != '\0')
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}

