#include "lists.h"

/**
 * add_nodeint_end -  Node adder program
 * @head: HEAD ptr
 * @n: node end
 * Return: ptr
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *temp;

	if (head == NULL)
		return (NULL);

	p = malloc(sizeof(listint_t));

	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
		*head = p;

	else
	{
		temp = *head;
		do
		{
			temp = temp->next;
		} while (temp->next != NULL);

		temp->next = p;
	}
	return (p);
}