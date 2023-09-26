#include "main.h"

/**
 * _strspn - Program to concatenate 2 strings
 * @s: Pointer to string
 * @accept: Pointer to be accessed
 * Return: Number of Bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int counter, index;
	int num = 0;
	int tmp = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		tmp = num;

		for (index = 0; accept[index] != '\0'; index++)
		{
			if (s[counter] == accept[index])
			{
				num += 1;
			}
		}

		if (num == tmp)
		{
			return (num);
		}
	}

	return (num);
}
