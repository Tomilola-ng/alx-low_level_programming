#include "main.h"

/**
 * _strchr - Program to find a char in a string
 * @s: the string to be filtered
 * @c: the character as filter value
 * Return: Pointer to the found vale or null if not
 */

char *_strchr(char *s, char c)
{
	int counter;

	counter = 0;

	while (s[counter] != '\0')
	{
		if (s[counter] == c)
		{
			return (s + counter);
		}
		counter++;
	}

	if (c = '\0')
	{
		return (s);
	}

	return (NULL);
}
