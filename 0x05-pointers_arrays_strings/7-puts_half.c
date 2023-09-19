#include <stdio.h>
#include "main.h"

/**
 * puts_half - program to print a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int counter;
	int index;
	int n;

	for (counter = 0; str[counter] != 0; counter++)
	{
    /* Do Nothing */
	}
  
	index = counter - 1;
	n = (index / 2) + 1;
  
	for (; n <= index; n++)
	{
		_putchar(str[n]);
	}
  
	_putchar('\n');
}
