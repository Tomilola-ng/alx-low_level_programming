#include <stdio.h>

/**
 * _strcpy - Program that does copy copy.
 * @dest: I honestly don'e know
 * @src: If I know make I pass
 * Return: None
 */

char *_strcpy(char *dest, char *src)
{
	int counter;
	int counter2;

	for (counter = 0; src[counter] != 0; counter++)
	{
		/* Do Nothing */
	}

	for (counter2 = 0; counter2 <= counter; counter2++)
	{
		dest[counter2] = src[counter2];
	}

	return (dest);
}

