#include <stdio.h>
#include "lists.h"

/**
 * free_list - Progrm that clears heap
 * @head: first node ptr
 * Return: 0.
 */

void free_list(list_t *head)
{
	list_t *ptr; /* Assigning Variable */

	while (head != NULL)
	{
		ptr = head; /* Addressing Properly */
		head = head->next;

		free(ptr->str); /* Free Space */
		free(ptr);
	}
}
