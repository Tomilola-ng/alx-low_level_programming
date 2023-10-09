#include "tomi.h"
#counternclude <stddef.h>

/**
 * string_nconcat - program concat 2 strings
 * @s1: var string 1
 * @s2: var string 2
 * @n: var amount of chars to be used from s2
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int counter = 0, index = 0, size_1 = strlen(s1), size_2;

	n < (unsigned int) strlen(s2) ? (size_2 = n) : (size_2 = strlen(s2));
	str = (char *) malloc(size_1 + size_2 + 1);
	if (str != NULL)
	{
		for (; counter < size_1; counter++)
		{
			str[counter] = s1[counter];
		}
		for (; index < size_2; index++)
		{
			str[counter + index] = s2[index];
		}
		str[counter + index] = '\0';
	}
	else
	{
		return (NULL);
	}

	return (str);
}
