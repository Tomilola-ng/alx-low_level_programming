#include "lists.h"

/**
 * print_listint - program that prints all the el of lists.
 * @h: ptrto head address.
 * Return: nodes count.
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	do
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	} while (h != NULL);

	return (count);
}
