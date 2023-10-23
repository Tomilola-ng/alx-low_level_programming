#include <stdio.h>
#include "lists.h"

/**
 * add_node -  Program to add nodes
 * @head: First node ptr
 * @str: string ptr
 * Return: ptr address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int node;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	node = 0;
	while (str[node] != '\0')
	{
		node++;
	}
	ptr->len = node;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
