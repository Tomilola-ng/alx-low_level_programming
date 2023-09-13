#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char my_char;
	int counter = 0;

	while (counter < 10)
	{
		my_char = 'a'
		while (my_char <= 'z') {
            		_putchar(my_char);
            		my_char++;
		}
		counter++
		_putchar('\n');
	}
}
