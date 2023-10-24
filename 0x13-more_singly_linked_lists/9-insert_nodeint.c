#include "lists.h"

/**
 * insert_nodeint_at_index - program to insert nodes
 * @head: HEAD ptr
 * @idx: node index
 * @n: node creation
 * Return: ptr value
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temporary;
	unsigned int counter;

	if (idx == 0)
	{
		ptr = malloc(sizeof(listint_t));
		if (ptr == NULL)
			return (NULL);

		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	temporary = *head;
	counter = 1;
	while (temporary != NULL)
	{
		if (counter == idx)
		{
			ptr = malloc(sizeof(listint_t));
			if (ptr == NULL)
				return (NULL);

			ptr->n = n;
			ptr->next = temporary->next;
			temporary->next = ptr;
			return (ptr);
		}
		temporary = temporary->next;
		counter++;
	}
	return (NULL);
}
