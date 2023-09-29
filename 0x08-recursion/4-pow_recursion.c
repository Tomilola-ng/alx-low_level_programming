#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Program to ** easily
 * @num1: num1
 * @num2: num2
 * Return: None
 */

int _pow_recursion(int num1, int num2)
{
	if (num2 < 0)
	{
		return (-1);
	}

	if (num2 == 0)
	{
		return (1);
	}

	return (num1 * _pow_recursion(num1, (num2 - 1)));
}

