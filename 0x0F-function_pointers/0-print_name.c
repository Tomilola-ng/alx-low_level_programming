#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - program to print name
 * @name: ptr to a str
 * @f: ptr to z with the fuction to use as a parametera func
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
    {
        return;
    }

	f(name);
}