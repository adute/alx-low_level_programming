#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds new node at the end of list
 * @head: header
 * @str: string to be added
 *
 * Return: newnode
 */
list_t *add_node_end(list_t **head, const char*str)
{
	list_t *last = *head;
	list_t newE;
	char *str1 = strdup(str);

	newE = (list_t *)malloc(sizeof(list_t));

	if (str == NULL || head == NULL)
		return (NULL);
	while (last->next != NULL)
	{
		last = last->next
	}
	last->next = newE;

	return (newE);
}
