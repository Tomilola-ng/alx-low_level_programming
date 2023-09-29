#include <stdio.h>
#include "main.h"

int is_prime(int num, int half);

/**
 * is_prime_number - Program isPrimeNum
 * @num: Variable
 * Return: Prime Number Answer
 */

int is_prime_number(int num)
{
	if (num <= 1)
	{
		return (0);
	}

	return (num, num / 2);
}

/**
 * is_prime - my checker
 * @half: number in half
 * @num: Checks
 * Return: Yay or Nay
 */

int is_prime(num, half)
{
	if (half <= 1)
	{
		return (1);
	}
	if (num % half == 0)
	{
		return (0);
	}
	return (is_prime(num, half - 1));
}

