#include <stdio.h>
#include "main.h"

/**
 * leet - Program that encodes a string into 1337.
 * @src: variable string refrance
 * Return: char *src an encoded string into 1337.
 */

char *leet(char *src)
{
	int counter = 0;
	char uppercase_alphabet[] = {'4', 'B', 'C', 'D', '3', 'F', 'G', 'H', 'I',
	'J', 'K', '1', 'M', 'N', '0', 'P', 'Q', 'R', 'S', '7', 'U',
	 'V', 'W', 'X', 'Y', 'Z'};
	char alphabet[] = {'4', 'b', 'c', 'd', '3', 'f', 'g', 'h', 'i',
	 'j', 'k', '1', 'm', 'n', '0', 'p', 'q', 'r',
	  's', '7', 'u', 'v', 'w', 'x', 'y', 'z'};
  
	while (src[counter] != '\0')
	{
		while (((src[counter] >= 'a') && (src[counter] <= 'z'))
		|| ((src[counter] >= 'A') && (src[counter] <= 'Z')))
		{
			if ((src[counter] >= 'a') && (src[counter] <= 'z'))
			{
				src[counter] = alphabet[src[counter] - 97];
				break;
			}
      else
      {
			  src[counter] = uppercase_alphabet[src[counter] - 65];
			  break;
      }
		}

		counter++;
	}

	return (src);
}
