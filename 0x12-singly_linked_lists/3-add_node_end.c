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
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newE, *tmp;
	char *str1 = strdup(str);

	newE = malloc(sizeof(list_t));

	if (str1 == NULL || newE == NULL)
	{
		free(newE);
		return (NULL);
	}
	if (*head == NULL)
	{
		newE->str = str1;
		newE->next = NULL;
		*head = newE;
		newE->len = strlen(str1);
	}
	else
	{
		tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newE;
	}
	return (tmp);

}
