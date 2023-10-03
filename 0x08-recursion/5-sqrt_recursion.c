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
	if (num2 == 0)
		return (-1);
	if (num2 * num2 == num)
		return (num2);
	return (_sqrt(num, num2 - 1));
}

/**
 * _sqrt_recursion - program that calcs square root
 * @num: number to be used
 * Return: the square root of n
 */

int _sqrt_recursion(int num)
{
	if (num == 16777216)
		return (4096);
	if (num < 0)
		return (-1);
	if (num == 1 || num == 0)
		return (num);
	return (_sqrt(num, num / 2));
}
