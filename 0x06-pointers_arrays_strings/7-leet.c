#include <stdio.h>
#include "main.h"

/**
 * leet - Program that encodes a string into 1337.
 * @src: variable string reference
 * Return: char *src an encoded string into 1337.
 */

char *leet(char *s)
{
	int i;
	int index;
	char cod[] = "aAeEoOtTlL";
	char cod_n[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (index = 0; cod[index] != '\0'; index++)
		{
			if (s[i] == cod[index])
			{
				s[i] = cod_n[index];
			}
		}
	}
	return (s);
}
