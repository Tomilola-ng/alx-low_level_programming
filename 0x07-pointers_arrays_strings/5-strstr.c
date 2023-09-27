#include "main.h"

/**
 * _strstr - Program that locates a substring in a string.
 * @haystack: The string to search within.
 * @needle: The substring to find.
 * Return: A pointer located substring in `haystack`,
 *         or NULL if `needle` is not found in `haystack`.
 */

char *_strstr(char *haystack, char *needle)
{
	int counter, index;

	for (counter = 0; haystack[counter] > '\0'; counter++)
	{
		for (index = counter; haystack[index] > '\0' && needle[index - counter] > '\0'; index++)
		{
			if (haystack[index] != needle[index - counter])
			{
				break;
			}
		}
		if (needle[index - counter] == '\0')
		{
			return (haystack + counter);
		}
	}
	return (0);
}
