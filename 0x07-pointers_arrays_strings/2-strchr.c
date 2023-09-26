#include "main.h"

/**
 * _strchr - Program to find a char in a string
 * @s: the string to be filtered
 * @c: the character as filter value
 * Return: Pointer to the found vale or null if not
 */

char *_strchr(char *s, char c)
{
	int counter = 0;
	int index;

	while (s[counter] != '\0')
	{
		counter++;
	}

	for (index = 0; index <= 1; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}

		else if (s[index] ==  '\0')
		{
			s = '\0';
		}
	}

	return (s);
}
