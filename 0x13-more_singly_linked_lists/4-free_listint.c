#include "lists.h"

/**
 * free_listint - Program frees lists
 * @head: HEAD ptr
 * Return: None
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	do
	{
		ptr = head;
		head = head->next;
		free(ptr);
	} while (head != NULL);

}
