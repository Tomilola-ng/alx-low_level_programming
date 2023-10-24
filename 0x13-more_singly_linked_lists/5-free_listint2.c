#include "lists.h"

/**
 * free_listint2 - PROGRAM FREES then NULLs HEAD
 * @head: pointer with the first nodeHEAD PTR
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *temporary;

	if (head == NULL)
		return;

	temporary = *head;

	do
	{
		tmp = temporary;
		temporary = temporary->next;
		free(tmp);
	} while (temporary != NULL);

	*head = NULL;
}
