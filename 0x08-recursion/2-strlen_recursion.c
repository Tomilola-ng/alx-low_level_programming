#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Program using recurs to strlen
 * @str: String to be counted
 * Return: string Lenght
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(str + 1));
}

