#include "lists.h"

/**
 * delete_nodeint_at_index - PROGRAM THAT deletes node
 * @head: HEAD ptr
 * @index: node index
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temporary;
	unsigned int counter = 1;

	temp = *head;

	do
	{
		if (index == 0)
		{
			temporary = *head;
			*head = temporary->next;
			free(temporary);
			return (1);
		}
		else if (counter == index)
		{
			temporary = temp->next;
			temp->next = temporary->next;
			free(temporary);
			return (1);
		}

		temp = temp->next;
		counter++;
	} while (temp != NULL);

	return (-1);
}
