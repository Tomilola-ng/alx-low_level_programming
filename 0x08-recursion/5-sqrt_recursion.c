#include <stdio.h>
#include "main.h"

/**
 * _sqrt - Program that calcs square root
 * @num: test number
 * @num2: squared number
 * Return: the square root of n
 */

int _sqrt(int num, int num2)
{
	if (num > num2 / 2)
		return (-1);
	else if (num * num == num2)
		return (n);
	return (_sqrt(num + 1, num2));
}

/**
 * _sqrt_recursion - program theat calcs square root
 * @num: number to be used
 * Return: the square root of n
 */

int _sqrt_recursion(int num)
{
	if (num == 1 || num == 0)
		return (num);
	return (_sqrt(0, num));
}
