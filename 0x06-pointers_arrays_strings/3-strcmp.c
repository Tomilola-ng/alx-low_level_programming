#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Program that copies strings only
 * @s1: variable string reference
 * @s2: variable string reference
 * Return: (0) and success
 * return an integer (the remainder of the subtraction)
 */

int _strcmp(char *s1, char *s2)
{
	int counter;

	for (counter = 0; ((s1[counter] != '\0') || (s2[counter] != '\0')); i++)
	{
		if (s1[counter] - s2[counter] != 0)
    {
			return (s1[counter] - s2[counter]);
    }
	}

	return (0);
  
}
