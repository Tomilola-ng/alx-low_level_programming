#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - Program to concatenate 2 strings
 * @src: The source string to be appended to dest.
 * @dest: The destination string, where src will be appended.
 * Return: A pointer to the resulting concatenated string (dest).
 */

char *_strcat(char *dest, char *src)
{
	int counter;
	int len = strlen(dest);

	for (counter = 0; src[counter] != '\0'; counter++)
	{
		dest[len + counter] = src[counter];
	}
	dest[len + counter] = '\0';

	return (dest);
}
