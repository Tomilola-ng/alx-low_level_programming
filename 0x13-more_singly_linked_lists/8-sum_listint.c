#include "lists.h"

/**
 * sum_listint - LIST ADDITION
 * @head: HEAD ptr
 * Return: results int
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	unsigned int counter = 0;

	ptr = head;
	if (head == NULL)
		return (0);

	do
	{
		counter = counter + (ptr->n);
		ptr = ptr->next;
	} while (ptr != NULL);

	return (counter);
}
