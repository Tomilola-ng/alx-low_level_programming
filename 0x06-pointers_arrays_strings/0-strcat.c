#include <stdio.h>
#include "main.h"

/**
 * _strcat - Program to concatenate 2 strings
 * @src: variable array
 * @dest: variable char
 * Return: None
 */

char *_strcat(char *dest, char *src)
{
	int counter;
	int num = -1;

	for (counter = 0, dest[counter] != '\0'; counter++)
	{
	}

	do {
		num++;
		dest[counter] = src[counter];
		counter;
	} while (src[num] != '\0');

	return (dest);
}

