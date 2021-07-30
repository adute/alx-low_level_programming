#include <stddef.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds node at the head
 * @head: header of linked list
 * @str: newstring to be added
 *
 * Return: new address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newE;
	char *str1 = strdup(str);

	if (str == NULL || head == NULL)
		return (NULL);

	newE = (list_t *)malloc(sizeof(list_t));

	if (newE == NULL)
		free(newE);
	return (NULL);
	newE->str = str1;
	newE->next = *head;
	newE->len = strlen(str1);
	*head = newE;
	return (*head);
}
