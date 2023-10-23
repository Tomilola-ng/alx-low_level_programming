#include <stdio.h>
#include "lists.h"

/**
 * list_len -  program that returns num of nodes
 * @h: list_t address HEAD
 * Return: integers
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
