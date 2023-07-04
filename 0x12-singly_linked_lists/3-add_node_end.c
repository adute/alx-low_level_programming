#include"lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds new node at the end
 * @head: head node
 * @str: string to be added
 * Return: address of the new element on success
 * or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	}
	else
	{
	list_t *last = *head;

	while (last->next != NULL)
	{
	last = last->next;
	}
	last->next = new;
	}
	return (*head);

}
