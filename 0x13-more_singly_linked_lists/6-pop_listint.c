#include "lists.h"

/**
 * pop_listint - PROGRAM pops off the first
 * @head: HEAD ptr
 * Return: address
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp1, *temporary;
	int count;

	tmp1 = *head;
	if (tmp1 == NULL)
		return (0);

	temporary = *head;
	tmp1 = tmp1->next;
	*head = tmp1;
	count = temporary->n;
	free(temporary);

	return (count);
}
