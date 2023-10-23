#include <stdio.h>

/**
 * print_list - Program to print node or nil
 * @h: singly linked list
 * Return: node count
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
				h = h->next;
				nodes++;
			}
		}

	return (nodes);
}
