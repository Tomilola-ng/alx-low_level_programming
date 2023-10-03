#include "main.h"

/**
 * _strchr - Program to find a char in a string
 * @s: the string to be filtered
 * @c: the character as filter value
 * Return: Pointer to the found value or null if not
 */

char *_strchr(char *s, char c)
{
	int counter;
	int index;

	counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (index = 0; index <= counter; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
		else if (s[index] == '\0')
		{
			s = '\0';
		}
	}
	return (s);
}
