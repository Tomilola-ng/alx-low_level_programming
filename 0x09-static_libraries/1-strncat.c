#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - Program concatenates two strings not more than variable unknown
 * @dest: pointer char left side
 * @src: pointer char right side
 * @n: variable int
 * Return: Length
 */

char *_strncat(char *dest, char *src, int n)
{
	int counter;
	int len = strlen(dest);

	for (counter = 0; (src[counter] != '\0') && (counter < n); counter++)
	{
		dest[len + counter] = src[counter];
	}
	dest[len + counter] = '\0';

	return (dest);
}
