#include <stdio.h>
#include "lists.h"

/**
 * add_node_end -  Node pops
 * @head:FIRSTNODE Ptr
 * @str: string ptr
 * Return: ptr address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *tmp;
	unsigned int node;

	p = malloc(sizeof(list_t));
	if (p == NULL)
	{
		return (NULL);
	}

	p->str = strdup(str);
	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}

	node = 0;
	while (str[node] != '\0')
	{
		node++;
	}
	p->len = node;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
		tmp = *head;
		while (tmp->next != 0)
		{
			tmp = tmp->next;
		}
		tmp->next = p;
	}
	return (p);
}
