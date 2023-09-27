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
	int contr, index;

	for (contr = 0; haystack[contr] > '\0'; contr++)
	{
		for (index = contr; haystack[index] > '\0' && needle[index - contr] > '\0'; index++)
		{
			if (haystack[index] != needle[index - contr])
			{
				break;
			}
		}
		if (needle[index - contr] == '\0')
		{
			return (haystack + contr);
		}
	}
	return (0);
}
