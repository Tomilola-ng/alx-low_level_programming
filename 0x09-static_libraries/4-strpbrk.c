#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer with the location of the string
 * @accept: characters to check
 * Return: A pointer to the byte in `s` that matches `accept`,
 *         or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int length;
	int counter, index;

	/* Calculate the length of string s */
	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	/* Iterate through the characters in s */
	for (counter = 0; counter <= length; counter++)
	{
		/* Iterate through the characters in accept */
		for (index = 0; accept[index] != '\0'; index++)
		{
			if (s[counter] == accept[index])
			{
				return (s + counter);
			}
		}
	}

	/* If no matching byte is found, return NULL */
	return (NULL);
}

