#include "tomi.h"

/**
 * _calloc - program allocs memory using malloc then init to zero
 * @size: size of the memory block to be allocated
 * @nmemb: number of elements
 * Return: pointer to the address of the memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *stk_block;
    unsigned int counter;

    if (nmemb == 0 || size == 0)
        return (NULL);
    stk_block = malloc(nmemb * size);
    if (stk_block != NULL)
    {
        for (counter = 0; counter < (nmemb * size); counter++)
            stk_block[counter] = 0;
        return (stk_block);
    }
    else
        return (NULL);
}
