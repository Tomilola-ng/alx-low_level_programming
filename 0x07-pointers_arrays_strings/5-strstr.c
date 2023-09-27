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
	int c, ndx;

	for (c = 0; haystack[c] > '\0'; c++)
	{
		for (ndx = c; haystack[ndx] > '\0' && needle[ndx - c] > '\0'; ndx++)
		{
			if (haystack[ndx] != needle[ndx - c])
			{
				break;
			}
		}
		if (needle[ndx - c] == '\0')
		{
			return (haystack + c);
		}
	}
	return (0);
}
