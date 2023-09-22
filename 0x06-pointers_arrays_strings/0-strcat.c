#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - Program to concatenate 2 strings
 * @src: variable array
 * @dest: variable char
 * Return: The length
 */

char *_strcat(char *dest, char *src)
{
	int counter;
	int len = strlen(dest);

	for (counter = 0, src[counter] != '\0'; counter++)
	{
		dest[len + counter] = src[counter];
	}
	dest[len + counter] = '\0';

	return (dest);
}
