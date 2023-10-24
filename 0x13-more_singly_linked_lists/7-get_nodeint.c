#include "lists.h"

/**
 * get_nodeint_at_index - nth node getter
 * @head: HEAD ptr
 * @index: node indexed
 * Return: ptr value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int counter = 0;

	ptr = head;
	if (ptr == NULL)
		return (NULL);

	do
	{
		if (counter == index)
			return (ptr);
		
		ptr = ptr->next;
		counter++;
	} while (ptr != NULL);

	return (NULL);
}
