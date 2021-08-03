#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees the listint_t list
 * @head: header
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
		*head = NULL;
}
