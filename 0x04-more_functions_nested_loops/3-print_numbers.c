#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry point of the program to print int from 0 to 9
 * Return: None
 */

void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
