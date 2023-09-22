#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Program that copies a string.
 * @src: variable string refrance
 * Return: char *src An uppercase string.
 */

char *string_toupper(char *src)
{
	int counter = 0;

	while (src[counter] != '\0')
	{
		if ((src[counter] >= 'a') && (src[counter] <= 'z'))
		{
			src[counter] = src[counter] - 32;
		}
		counter++;
	}
  
	return (src);
}
