#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node -adds node at the begining
 * @head: head node
 * @str: data to be added
 * Return: address of new element, NUll if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (*head == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;

	return (*head);

}
