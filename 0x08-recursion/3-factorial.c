#include <stdio.h>
#include "main.h"

/**
 * factorial - Program that calcs factorial
 * @num: Var number
 * Return: Factorial Answer
 */

int factorial(int num)
{
	if (num < 0)
	{
		return (-1);
	}

	if (num <= 1)
	{
		return (1);
	}

	return (num * factorial(num - 1));
}

