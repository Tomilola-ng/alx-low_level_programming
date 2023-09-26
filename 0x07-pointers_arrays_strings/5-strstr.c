#include "main.h"

/**
 * _strstr - Programthat  locates a substring in a string.
 * @haystack: The string to search within.
 * @needle: The substring to find.
 * Return: A pointer located substring in `haystack`,
 *         or NULL if `needle` is not found in `haystack`.
 */

char *_strstr(char *haystack, char *needle)
{
	int index, counter;

	for (index = 0; haystack[index] != '\0'; index++)
	{
		for (counter = 0; needle[counter] != '\0'; counter++)
		{
			if (haystack[index + counter] != needle[counter])
			{
				break;
			}
		}
	}
	if (needle[counter] == '\0')
	{
		return (haystack + index);
	}

	return (NULL);
}
