#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - Program that copies a string.
 * @dest: variable char pointer left side
 * @src: variable char pointer right side
 * @n: variable number of characters to be copied from source.
 * Return: Length
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter;
	int len = strlen(src);

	for (counter = 0; counter < n; counter++)
	{
		if (counter < len)
		{
			dest[counter] = src[counter];
		}
		else
		{
			dest[counter] = '\0';
		}
	}
	
	return (dest);
}
