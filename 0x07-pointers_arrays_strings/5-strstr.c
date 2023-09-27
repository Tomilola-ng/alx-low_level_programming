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
	int i, index;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (index = i; haystack[index] > '\0' && needle[index - i] > '\0'; index++)
		{
			if (haystack[index] != needle[index - i])
			{
				break;
			}
		}
		if (needle[index - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
