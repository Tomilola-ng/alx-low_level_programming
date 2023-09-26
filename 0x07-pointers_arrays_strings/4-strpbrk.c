#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 * Return: A pointer to the byte in `s` that maches `accept`,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        char *a = accept;
        while (*a != '\0')
        {
            if (*s == *a)
                return s;
            a++;
        }
        s++;
    }
    
    // If no matching byte is found, return NULL
    return NULL;
}

