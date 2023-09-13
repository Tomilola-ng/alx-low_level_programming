#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char my_chars = "abcdefghijklmnopqrstuvwxyz";
	int counter = 0;

	while (counter < 10)
	{
		_putchar(my_chars);
		counter++;
	}
	_putchar('\n');
}
