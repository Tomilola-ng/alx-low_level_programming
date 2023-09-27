#include <stdio.h>
#include "main.h"

/**
 * cap_string - Program to capitalize all words of a string
 * @src: variable string refrance
 * Return: char *src A Capitalised string
 */

char *cap_string(char *src)
{
	int counter = 0;

	if ((src[counter] >= 'a') && (src[counter] <= 'z'))
	{
		src[counter] = src[counter] - 32;
	}

	while (src[counter] != '\0')
	{
		if ((src[counter] == ' ')
		|| (src[counter] == '\t')
		|| (src[counter] == '\n')
		|| (src[counter] == ',')
		|| (src[counter] == ';')
		|| (src[counter] == '.')
		|| (src[counter] == '!')
		|| (src[counter] == '?')
		|| (src[counter] == '"')
		|| (src[counter] == '(')
		|| (src[counter] == ')')
		|| (src[counter] == '{')
		|| (src[counter] == '}'))
		{
			if ((src[counter + 1] >= 'a') && (src[counter + 1] <= 'z'))
			{
				src[counter + 1] = src[counter + 1] - 32;
			}
		}

		counter++;
	}

	return (src);
}
