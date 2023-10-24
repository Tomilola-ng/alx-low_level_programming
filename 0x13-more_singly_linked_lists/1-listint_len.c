#include "lists.h"

/**
 * listint_len -  Program returns list length
 * @h: HEAD address
 * Return: value expected
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	do
	{
		count++;
		h = h->next;
	} while (h != NULL);

	return (count);
}
