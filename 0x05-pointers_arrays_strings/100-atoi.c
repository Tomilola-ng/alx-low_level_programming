#include <stdio.h>
#include "main.h"

/**
 * _atoi - Program that converts a string to an integer.
 * @s: the string to be comverted.
 *Return: Any integer of the newly comverted string.
 */

int _atoi(char *s)
{
	int var_sign = 1;

	unsigned int var_num = 0;

	do {
		if (*s == '-')
    {
      var_sign *= -1;
    }
      
    else if (*s >= '0' && *s <= '9')
    {
			var_num = (var_num * 10) + (*s - '0');
    }
      
		else if (var_num > 0)
    {
			break;
    }
	} while (*s++);
  
	return (num * sign);
}
