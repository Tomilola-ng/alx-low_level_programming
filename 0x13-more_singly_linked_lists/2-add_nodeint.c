#include "lists.h"

/**
 * add_nodeint - Program that add new nodes.
 * @head: HEAD ptr
 * @n: number
 * Return: ptr or address variable
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
