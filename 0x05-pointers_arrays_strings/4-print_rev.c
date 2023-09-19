#include <stdio.h>
#include "main.h"

/**
 * print_rev - Program to print reverse string and a new line
 * @var_str: The string to be reversed
 * Return: None
 */

void print_rev(char *var_str)
{
        int counter;
        int str_length = 0;

        while (var_str[str_length] != '\0')
        {
                str_length++;
        }

        counter = str_length;

        while (counter <=  str_length)
        {
                _putchar(var_str[counter]);
                counter--;
        }

	_putchar('\n');

        return (0);
}
