#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Entry point of the program to print int from 0 to 9
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar("\n");
}
