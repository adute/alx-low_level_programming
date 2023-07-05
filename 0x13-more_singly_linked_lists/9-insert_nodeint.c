#include"lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - adds new node at the index
 * @head: head node
 * @idx: the index and it stated at 0;
 * @n: integer to be added
 * Return: address of the new element on success
 * or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
	listint_t *last = *head;

	while (i < idx)
	{
	i++;
	last = last->next;
	}
	last->next = new;
	}

	return (*head);
}
