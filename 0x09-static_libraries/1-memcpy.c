#include "main.h"

/**
 * _memcpy - A Program to copy memory Area
 * @dest: Pointer with the address to be copied
 * @src: Pointer with the address to be copied
 * @n: Var of bytes to be copied
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}

	return (dest);
}

