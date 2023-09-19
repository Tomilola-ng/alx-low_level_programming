#include <stdio.h>

/**
 * rev_string - Program to return the length of any string passed.
 * @var_str: variable array with the characters of a word.
 * Return: None.
 */

void rev_string(char *var_str)
{
	int len, counter, half;
	char temp;

	for (len = 0; var_str[len] != '\0'; len++)
	;
	counter = 0;

	half = len / 2;

	while (half--)
	{
		temp = var_str[len - counter - 1];
		var_str[len - counter - 1] = var_str[counter];
		var_str[counter] = temp;
		counter++;
	}
}
