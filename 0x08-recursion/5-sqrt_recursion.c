#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - Program that returns sqrt
 * num: Var
 * Return: sqrt answer
 */

int checks(int num, int num2)
{
	if (num2 <= 3)
		return (-1);

	return num * num;
}

int _sqrt_recursion(int num)
{
	if (num <= 1)
		return (1);

	if (num == checks(num, (num - 1)))
	{
		return (num);
	}
	else
	{
		_sqrt_recursion(num);
	}
}

