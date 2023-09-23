#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 * Return: 0 if the strings are equal, a negative value if s1 is less than s2,
 *         or a positive value if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int counter;

	for (counter = 0; ((s1[counter] != '\0') || (s2[counter] != '\0')); counter++)
	{
		if (s1[counter] - s2[counter] != 0)
		{
			return (s1[counter] - s2[counter]);
		}
	}

	return (0);
  
}
