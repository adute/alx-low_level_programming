#include"lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds new node at the end
 * @head: head node
 * @n: integer to be added
 * Return: address of the new element on success
 * or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if(new == NULL)
	{
		return;
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

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	}
	return (*head);

}
