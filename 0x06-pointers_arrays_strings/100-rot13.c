#include <stdio.h>
#include "main.h"

/**
 * rot13 - Progrma that encodes rot13
 * @src: Pointer to the parsed string
 * Return: *src
 */

char *rot13(char *src)
{
	int counter, index;
	
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (counter = 0; src[counter] != '\0'; counter++)
	{
		for (index = 0; index < 52; index++)
		{
			if (src[counter] == data1[index])
			{
				src[counter] = datarot[index];
				break;
			}
		}
	}

	return (src);
}
