#include <stdio.h>

/**
 * _isdigit - Entry point of the program to check if input is a digit
 * @c: Varaible Input
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

