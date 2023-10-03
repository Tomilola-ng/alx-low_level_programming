#include <stdio.h>

/**
 * _strlen - Program to print a string lenght
 * @var_s: String to be counted
 * Return: Counter Variable
 */

int _strlen(char *var_s)
{
	int counter = 0;

	while (var_s[counter])
	{
		counter++;
	}

	return (counter);
}

